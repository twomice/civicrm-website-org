<?php
/**
 * @file
 * Code for the CiviCRM Extensions Stats module.
 */

function civicrm_stats_extensions_store_usage_count($extensionName, $countUsers) {
  // skip the total values for ""
  $nid = db_query("SELECT entity_id FROM field_data_field_extension_fq_name WHERE field_extension_fq_name_value = :key", array(':key' => $extensionName))->fetchField();

  // skip unregistered nodes
  if (!$nid) {
    return;    
  }

  $node = node_load($nid);
  // this works for both inserting and updating records
  $node->field_usage = array('und' => array(array('value' => $countUsers)));
  node_save($node);
}

function civicrm_stats_extensions_process_returned_values($values) {
  foreach($values as $value){
    if (!$value['name']) {
      continue;  
    }
    civicrm_stats_extensions_store_usage_count($value['name'], $value['total']);
  }
}

function civicrm_stats_extensions_update_usage_values() {
  $returnedRawValues = drupal_http_request("http://stats.civicrm.org/bgm/extensions.php?output=json&minresults=1");

  $decodedValues = json_decode($returnedRawValues->data, true);

  if ($decodedValues) {
    civicrm_stats_extensions_process_returned_values($decodedValues);
  }
}
