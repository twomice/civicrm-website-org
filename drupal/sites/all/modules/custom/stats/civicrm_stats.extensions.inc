<?php
/**
 * @file
 * Code for the CiviCRM Extensions Stats module.
 */

function civicrm_stats_extensions_store_usage_count($extensionName, $countUsers){
	// skip the total values for ""
	$nid = db_query("SELECT entity_id FROM field_data_field_extension_fq_name WHERE field_extension_fq_name_value = :key", array(':key' => $extensionName))->fetchField();

	// skip unregistered nodes
	if($nid == NULL){
		return;		
	}

	$node = node_load($nid);
	$node->field_usage = array('und' => array( array('value' => $countUsers) ) ); // this works for both inserting and updating records
	node_save($node);
}

function civicrm_stats_extensions_process_returned_values($rawValues){
	foreach($rawValues as $eachIndex => $eachValue){
		if ($eachValue['name'] == "") {
			continue;	
		}

		civicrm_stats_extensions_store_usage_count($eachValue['name'], $eachValue['total']);
	}
}

function civicrm_stats_extensions_update_usage_values(){
	$returnedRawValues = drupal_http_request("http://stats.civicrm.org/bgm/extensions.php?output=json&minresults=1");

	$decodedValues = json_decode($returnedRawValues->data, true);

	switch ($decodedValues) {
		case TRUE:
			civicrm_stats_extensions_process_returned_values($decodedValues);
			break;

		case NULL:
			break;

		case FALSE:
			break;
	}
}

function civicrm_stats_extensions_cron(){
	civicrm_stats_extensions_update_usage_values();
}
