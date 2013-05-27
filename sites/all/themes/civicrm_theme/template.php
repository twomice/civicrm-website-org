<?php
// $Id: template.php,v 1.10 2011/01/14 02:57:57 jmburnz Exp $

/**
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function to match your subthemes name,
 *    e.g. if you name your theme "themeName" then the function
 *    name will be "themeName_preprocess_hook". Tip - you can
 *    search/replace on "genesis_SUBTHEME".
 * 2. Uncomment the required function to use.
 */

/**
 * Override or insert variables into all templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess(&$vars, $hook) {
}
function genesis_SUBTHEME_process(&$vars, $hook) {
}
// */

/**
 * Override or insert variables into the html templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess_html(&$vars) {
  // Uncomment the folowing line to add a conditional stylesheet for IE 7 or less.
  // drupal_add_css(path_to_theme() . '/css/ie/ie-lte-7.css', array('weight' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}
function genesis_SUBTHEME_process_html(&$vars) {
}
// */

/**
 * Override or insert variables into the page templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess_page(&$vars) {
}
function genesis_SUBTHEME_process_page(&$vars) {
}
// */

/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess_node(&$vars) {
}
function genesis_SUBTHEME_process_node(&$vars) {
}
// */

/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess_comment(&$vars) {
}
function genesis_SUBTHEME_process_comment(&$vars) {
}
// */

/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_SUBTHEME_preprocess_block(&$vars) {
}
function genesis_SUBTHEME_process_block(&$vars) {
}
// */

  /**
   * Implements hook_form_FORM_NAME_alter().
   */
  function civicrm_theme_form_comment_form_alter(&$form, &$form_state) {
      $form['author']['name']['#title'] = "Name";
      $form['author']['mail']['#title'] = "Email";
	  $form['actions']['preview']['#value'] = "Preview Comment";
       $form['author']['mail']['#description'] = "(We will never sell or give your info to anyone.)";
      $form['author']['name']['#required'] = FALSE;
      $form['author']['mail']['#required'] = FALSE;
      unset($form['author']['homepage']);
 }
// Add a placeholder for each input (textfield, textarea and email) and concatenate it with "Enter your " 
function civicrm_theme_form_alter(&$form, &$form_state, $form_id) {
	  // Sign up to our mailing list
    if($form_id == webform_client_form_2052) { 
      foreach ($form["submitted"] as $key => $value) {
          if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
              $form["submitted"][$key]['#attributes']["placeholder"] = t("Enter your ").strtolower(t($value["#title"]));
          } 
      }
			//hides the labels but keeps them accessible
			$form["submitted"][$key]['#title_display'] = 'invisible';
  }
	 
}

