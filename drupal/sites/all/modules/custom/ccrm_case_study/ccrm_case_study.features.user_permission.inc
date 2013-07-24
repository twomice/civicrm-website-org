<?php
/**
 * @file
 * ccrm_case_study.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ccrm_case_study_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ccrm_case_study content
  $permissions['create ccrm_case_study content'] = array(
    'name' => 'create ccrm_case_study content',
    'roles' => array(),
  );

  return $permissions;
}
