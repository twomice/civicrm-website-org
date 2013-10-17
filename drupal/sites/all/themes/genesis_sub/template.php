<?php

/**
 * Implements hook_form_FORM_NAME_alter().
 */

function genesis_sub_preprocess_html(&$variables){
    drupal_add_css('https://fonts.googleapis.com/css?family=Oswald:300,400', array('type' => 'external'));
    drupal_add_css('https://fonts.googleapis.com/css?family=Lato', array('type' => 'external'));
}

function genesis_sub_form_comment_form_alter(&$form, &$form_state) {
    $form['author']['name']['#title'] = "Name";
    $form['author']['mail']['#title'] = "Email";
    $form['actions']['preview']['#value'] = "Preview Comment";
    $form['author']['mail']['#description'] = "(We will never sell or give your info to anyone.)";
    $form['author']['name']['#required'] = FALSE;
    $form['author']['mail']['#required'] = FALSE;
    unset($form['author']['homepage']);
}

function genesis_sub_form_alter(&$form, &$form_state, $form_id) {
	// hp signup on live
	if($form_id == 'webform_client_form_2295') {
      foreach ($form["submitted"] as $key => $value) {
          if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
              $form["submitted"][$key]['#attributes']["placeholder"] = t("Enter ").strtolower(t($value["#title"])).t(" to subscribe");
          } 
      }
			//hides the labels but keeps them accessible
			$form["submitted"][$key]['#title_display'] = 'invisible';
  }
	// header signup on live
	if($form_id == 'webform_client_form_2296') {
      foreach ($form["submitted"] as $key => $value) {
          if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
              $form["submitted"][$key]['#attributes']["placeholder"] = t("Enter ").strtolower(t($value["#title"])).t(" to subscribe");
          } 
      }
			//hides the labels but keeps them accessible
			$form["submitted"][$key]['#title_display'] = 'invisible';
  }
}
