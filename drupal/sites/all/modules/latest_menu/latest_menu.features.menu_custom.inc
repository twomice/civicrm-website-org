<?php
/**
 * @file
 * latest_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function latest_menu_menu_default_menu_custom() {
  $menus = array();

 
 
  // Exported menu: menu-footer-get-started
  $menus['menu-footer-get-started'] = array(
    'menu_name' => 'menu-footer-get-started',
    'title' => 'footer-get-started',
    'description' => '',
  );
  // Exported menu: menu-footer-participate
  $menus['menu-footer-participate'] = array(
    'menu_name' => 'menu-footer-participate',
    'title' => 'footer-participate',
    'description' => '',
  );
  // Exported menu: menu-footer-what-is-civicrm-subm
  $menus['menu-footer-what-is-civicrm-subm'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'title' => 'footer-what is civicrm-submenu',
    'description' => '',
  );
  // Exported menu: menu-footer-will-civicrm-meet-yo
  $menus['menu-footer-will-civicrm-meet-yo'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'title' => 'footer-Will civicrm meet your needs',
    'description' => '',
  );
  // Exported menu: menu-primary-menu
  $menus['menu-primary-menu'] = array(
    'menu_name' => 'menu-primary-menu',
    'title' => 'primary menu',
    'description' => '',
  );
  // Exported menu: menu-top-contactus
  $menus['menu-top-contactus'] = array(
    'menu_name' => 'menu-top-contactus',
    'title' => 'Top Contactus',
    'description' => '',
  );

  $menus['menu-for-developers'] = array(
    'menu_name' => 'menu-for-developers',
    'title' => 'For Developers',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
 
  t('Top Contactus');
  t('footer-Will civicrm meet your needs');
  t('footer-get-started');
  t('footer-participate');
  t('footer-what is civicrm-submenu');
  t('primary menu');
  t('For Developers');



  return $menus;
}
