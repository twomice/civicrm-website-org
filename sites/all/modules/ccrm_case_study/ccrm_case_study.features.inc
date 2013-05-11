<?php
/**
 * @file
 * ccrm_case_study.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ccrm_case_study_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function ccrm_case_study_node_info() {
  $items = array(
    'ccrm_case_study' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('The name of the organization this case study is about:'),
      'help' => '',
    ),
  );
  return $items;
}
