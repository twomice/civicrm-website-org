<?php
/**
 * @file
 * Code for the CiviCRM Extensions Stats module.
 */

class civicrm_org_stats {

  protected function updateRecord($node, $usage) {
    db_query("UPDATE field_data_field_extension_current_usage SET field_extension_current_usage_value = :usage_value WHERE entity_id = {$node->nid} AND entity_type = 'node'", array(':usage_value' => $usage));
    db_query("UPDATE field_revision_field_extension_current_usage SET field_extension_current_usage_value = :usage_value WHERE entity_id = {$node->nid} AND entity_type = 'node' and revision_id = {$node->revision_id}", array(':usage_value' => $usage));
  }

  protected function insertRecord($node, $usage) {
    db_query("INSERT INTO field_data_field_extension_current_usage (entity_type, bundle, entity_id, revision_id, `language`, delta, field_extension_current_usage_value)
      VALUES ('node', 'extension', {$node->nid}, {$node->revision_id}, '{$node->language}', 0, :usage_value)", array(':usage_value' => $usage));
    db_query("INSERT INTO field_revision_field_extension_current_usage (entity_type, bundle, entity_id, revision_id, `language`, delta, field_extension_current_usage_value)
      VALUES ('node', 'extension', {$node->nid}, {$node->revision_id}, '{$node->language}', 0, :usage_value)", array(':usage_value' => $usage));
  }

  /**
   * Clear drupal's caches related to node field data
   */
  protected function clearCache() {
    cache_clear_all('*', 'cache_field', TRUE);
    cache_clear_all('*', 'cache_page', TRUE);
  }
}
