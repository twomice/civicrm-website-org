<?php
/**
 * @file
 * Code for the CiviCRM Extensions Stats module.
 */
require_once("civicrm_org_stats.inc");
class civicrm_org_stats_drupal extends civicrm_org_stats {

  const URL = 'https://drupal.org/project/';
  const DRUPAL = 128;

  public function update() {
    $nodes = db_query("
      SELECT fq.entity_id as nid, fq.field_extension_fq_name_value as name, fq.language, fq.revision_id, cu.entity_id as cu_node, cu.field_extension_current_usage_value as usage_value
      FROM field_data_field_extension_fq_name fq
      INNER JOIN field_data_field_extension_cms cms ON cms.entity_id = fq.entity_id
      LEFT JOIN field_data_field_extension_current_usage cu ON cu.entity_id = fq.entity_id
      WHERE fq.deleted = 0
      AND fq.field_extension_fq_name_value NOT LIKE '%.%'
      AND fq.field_extension_fq_name_value NOT LIKE '% %'
      AND cms.field_extension_cms_tid = " . self::DRUPAL
    );
    foreach ($nodes as $node) {
      $usage = $this->getStats(str_replace('-', '_', $node->name));
      // No need to update
      if ($usage === FALSE || (!empty($node->cu_node) && $node->usage_value == $usage)) {
        continue;
      }
      $clear_cache = TRUE;
      // Update existing field
      if (!empty($node->cu_node)) {
        $this->updateRecord($node, $usage);
      }
      // Insert if necessary
      else {
        $this->insertRecord($node, $usage);
      }
    }
    if (isset($clear_cache)) {
      $this->clearCache();
    }
  }

  /**
   * Search project page for usage data.
   * @param $name
   * @return bool|int
   */
  private function getStats($name) {
    $html = $this->fetch($name);
    if ($html === FALSE) {
      return FALSE;
    }
    $html = strstr($html, '</strong>', TRUE);
    $html = strstr($html, 'Reported installs');
    $html = strstr($html, '>');
    $html = str_replace(array('>', ','), '', $html);
    return is_numeric($html) ? $html : FALSE;
  }


  /**
   * Scrape a drupal.org project page for usage stats
   * @param string $name
   * @return bool|string
   */
  private function fetch($name) {
    $returnedRawValues = drupal_http_request(self::URL . $name);
    if (empty($returnedRawValues->error) && !empty($returnedRawValues->data)) {
      $html = strstr($returnedRawValues->data, '<h3>Project Information</h3>');
      return $html;
    }
    return FALSE;
  }
}
