<?php
/**
 * @file
 * Code for the CiviCRM Extensions Stats module.
 */

class civicrm_org_stats_extensions {

  private $stats = array();
  const URL = "http://stats.civicrm.org/bgm/extensions.php?output=json&minresults=1";

  public function fetch() {
    $returnedRawValues = drupal_http_request(self::URL);
    $decodedValues = json_decode($returnedRawValues->data, TRUE);

    if ($decodedValues) {
      foreach ($decodedValues as $val) {
        if (!empty($val['name'])) {
          $this->stats[$val['name']] = (int) $val['total'];
        }
      }
      return TRUE;
    }
    return FALSE;
  }

  public function update() {
    $nodes = db_query("
      SELECT fq.entity_id as nid, fq.field_extension_fq_name_value as name, fq.language, fq.revision_id, cu.entity_id as cu_node, cu.field_extension_current_usage_value as usage_value
      FROM field_data_field_extension_fq_name fq
      LEFT JOIN field_data_field_extension_current_usage cu ON cu.entity_id = fq.entity_id
      WHERE fq.deleted = 0
      AND fq.field_extension_fq_name_value IN (:keys)",
      array(':keys' => array_keys($this->stats))
    );
    foreach ($nodes as $node) {
      $usage = $this->stats[$node->name];
      // No need to update
      if (!empty($node->cu_node) && $node->usage_value == $usage) {
        continue;
      }
      $clear_cache = TRUE;
      // Update existing field
      if (!empty($node->cu_node)) {
        db_query("UPDATE field_data_field_extension_current_usage SET field_extension_current_usage_value = :usage_value WHERE entity_id = {$node->nid} AND entity_type = 'node'", array(':usage_value' => $usage));
        db_query("UPDATE field_revision_field_extension_current_usage SET field_extension_current_usage_value = :usage_value WHERE entity_id = {$node->nid} AND entity_type = 'node' and revision_id = {$node->revision_id}", array(':usage_value' => $usage));
      }
      // Insert if necessary
      else {
        db_query("INSERT INTO field_data_field_extension_current_usage (entity_type, bundle, entity_id, revision_id, `language`, delta, field_extension_current_usage_value)
          VALUES ('node', 'extension', {$node->nid}, {$node->revision_id}, '{$node->language}', 0, :usage_value)", array(':usage_value' => $usage));
        db_query("INSERT INTO field_revision_field_extension_current_usage (entity_type, bundle, entity_id, revision_id, `language`, delta, field_extension_current_usage_value)
          VALUES ('node', 'extension', {$node->nid}, {$node->revision_id}, '{$node->language}', 0, :usage_value)", array(':usage_value' => $usage));
      }
    }
    if (isset($clear_cache)) {
      // FIXME: This is a bit of an overkill, really we just need to clear the cache for affected nodes
      drupal_flush_all_caches();
    }
  }

}
