<?php

require_once 'membershipprogram.civix.php';

/**
 * Implementation of hook_civicrm_config
 */
function membershipprogram_civicrm_config(&$config) {
  _membershipprogram_civix_civicrm_config($config);
}

/**
 * Implementation of hook_civicrm_xmlMenu
 *
 * @param $files array(string)
 */
function membershipprogram_civicrm_xmlMenu(&$files) {
  _membershipprogram_civix_civicrm_xmlMenu($files);
}

/**
 * Implementation of hook_civicrm_install
 */
function membershipprogram_civicrm_install() {
  return _membershipprogram_civix_civicrm_install();
}

/**
 * Implementation of hook_civicrm_uninstall
 */
function membershipprogram_civicrm_uninstall() {
  return _membershipprogram_civix_civicrm_uninstall();
}

/**
 * Implementation of hook_civicrm_enable
 */
function membershipprogram_civicrm_enable() {
  return _membershipprogram_civix_civicrm_enable();
}

/**
 * Implementation of hook_civicrm_disable
 */
function membershipprogram_civicrm_disable() {
  return _membershipprogram_civix_civicrm_disable();
}

/**
 * Implementation of hook_civicrm_upgrade
 *
 * @param $op string, the type of operation being performed; 'check' or 'enqueue'
 * @param $queue CRM_Queue_Queue, (for 'enqueue') the modifiable list of pending up upgrade tasks
 *
 * @return mixed  based on op. for 'check', returns array(boolean) (TRUE if upgrades are pending)
 *                for 'enqueue', returns void
 */
function membershipprogram_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _membershipprogram_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implementation of hook_civicrm_managed
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 */
function membershipprogram_civicrm_managed(&$entities) {
  return _membershipprogram_civix_civicrm_managed($entities);
}

/**
 * Implementation of CiviCRM's buildForm hook
 */
function membershipprogram_civicrm_buildForm($formName, &$form) {
  if ($formName == 'CRM_Contribute_Form_Contribution_Main' && $form->_id == 64) {
    $hideDiscount = TRUE;
    // get the filename from the url
    $affiliate = CRM_Utils_Request::retrieve('affiliate', 'String', $form);
    $validAffiliates = array('ncrp');

    if (in_array($affiliate, $validAffiliates)) {
      $hideDiscount = FALSE;
    }

    $form->assign('hideDiscount', $hideDiscount);
  }
}
