<?php
/**
 * @file
 * ccrm_case_study.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function ccrm_case_study_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ccrm_cs_testimonial_group1|node|ccrm_case_study|form';
  $field_group->group_name = 'group_ccrm_cs_testimonial_group1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccrm_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client Testimonial #1',
    'weight' => '18',
    'children' => array(
      0 => 'field_ccrm_cs_testimonial_name_1',
      1 => 'field_ccrm_cs_testimonial_titl_1',
      2 => 'field_ccrm_cs_testimonial_body_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ccrm_cs_testimonial_group1|node|ccrm_case_study|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ccrm_cs_testimonial_group2|node|ccrm_case_study|form';
  $field_group->group_name = 'group_ccrm_cs_testimonial_group2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccrm_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client Testimonial #2',
    'weight' => '19',
    'children' => array(
      0 => 'field_ccrm_cs_testimonial_name_2',
      1 => 'field_ccrm_cs_testimonial_titl_2',
      2 => 'field_ccrm_cs_testimonial_body_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ccrm_cs_testimonial_group2|node|ccrm_case_study|form'] = $field_group;

  return $export;
}
