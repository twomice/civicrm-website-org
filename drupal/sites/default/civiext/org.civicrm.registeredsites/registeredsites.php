<?php

require_once 'registeredsites.civix.php';

/**
 * Implementation of hook_civicrm_config
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_config
 */
function registeredsites_civicrm_config(&$config) {
  _registeredsites_civix_civicrm_config($config);
}

/**
 * Implementation of hook_civicrm_xmlMenu
 *
 * @param $files array(string)
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_xmlMenu
 */
function registeredsites_civicrm_xmlMenu(&$files) {
  _registeredsites_civix_civicrm_xmlMenu($files);
}

/**
 * Implementation of hook_civicrm_install
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_install
 */
function registeredsites_civicrm_install() {
  return _registeredsites_civix_civicrm_install();
}

/**
 * Implementation of hook_civicrm_uninstall
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_uninstall
 */
function registeredsites_civicrm_uninstall() {
  return _registeredsites_civix_civicrm_uninstall();
}

/**
 * Implementation of hook_civicrm_enable
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_enable
 */
function registeredsites_civicrm_enable() {
  return _registeredsites_civix_civicrm_enable();
}

/**
 * Implementation of hook_civicrm_disable
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_disable
 */
function registeredsites_civicrm_disable() {
  return _registeredsites_civix_civicrm_disable();
}

/**
 * Implementation of hook_civicrm_upgrade
 *
 * @param $op string, the type of operation being performed; 'check' or 'enqueue'
 * @param $queue CRM_Queue_Queue, (for 'enqueue') the modifiable list of pending up upgrade tasks
 *
 * @return mixed  based on op. for 'check', returns array(boolean) (TRUE if upgrades are pending)
 *                for 'enqueue', returns void
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_upgrade
 */
function registeredsites_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _registeredsites_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implementation of hook_civicrm_managed
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_managed
 */
function registeredsites_civicrm_managed(&$entities) {
  return _registeredsites_civix_civicrm_managed($entities);
}

/**
 * Implementation of hook_civicrm_caseTypes
 *
 * Generate a list of case-types
 *
 * Note: This hook only runs in CiviCRM 4.4+.
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_caseTypes
 */
function registeredsites_civicrm_caseTypes(&$caseTypes) {
  _registeredsites_civix_civicrm_caseTypes($caseTypes);
}

/**
 * Implementation of hook_civicrm_alterSettingsFolders
 *
 * @link http://wiki.civicrm.org/confluence/display/CRMDOC/hook_civicrm_alterSettingsFolders
 */
function registeredsites_civicrm_alterSettingsFolders(&$metaDataFolders = NULL) {
  _registeredsites_civix_civicrm_alterSettingsFolders($metaDataFolders);
}

function registeredsites_civicrm_tokens(&$tokens) {
  $tokens['individual'] = array(
    'individual.registered_site_name' => 'Name of site registered by an individual',
    'individual.registered_site_id' => 'ID of site registered by an individual',
  );
}

function registeredsites_civicrm_tokenValues(&$values, $cids, $job = null, $tokens = array(), $context = null) {
    // Date tokens
    if (empty($tokens['individual'])) {
        return;
    }

    foreach ($cids as $cid) {
        $values[$cid] = array(
            'individual.registered_site_name' => 'test_name',
            'individual.registered_site_id' => 'test_id',
        );
    }
}
