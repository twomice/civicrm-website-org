<?php
/**
 * @file
 * contenttype_export.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contenttype_export_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('call to action'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'download' => array(
      'name' => t('Download'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'features_slideshow' => array(
      'name' => t('Features Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'help_options' => array(
      'name' => t('Help Options'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage_alert' => array(
      'name' => t('Homepage Alert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Alert Text'),
      'help' => '',
    ),
    'secondary' => array(
      'name' => t('Secondary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tertiary' => array(
      'name' => t('Tertiary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
