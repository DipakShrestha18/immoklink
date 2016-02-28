<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Email signup form'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_newsletter_form_content_type_render',
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_newsletter_form_content_type_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  $block->title = '';
  $block->content = drupal_get_form('immoklink_sitewide_newsletter_form');

  return $block;
}

/**
 * Newsletter form.
 */
function immoklink_sitewide_newsletter_form() {
  $form['#prefix'] = '<div id="signup-error"></div><div id="webform-ajax-wrapper-3">';
  $form['#suffix'] = '</div>';
  $form['my_markup'] = array(
    '#markup' => '<p>Sign up for email updates.</p>'
  );
  $form['signup'] = array(
    '#title' => t("Sign up for updates when we publish new content."),
    '#type' => 'textfield',
    '#default_value' => '',
    '#attributes' => array(
      'placeholder' => t('email@there.com'),
    ),
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('sign up'),
  );
  $form['#validate'] = array('immoklink_sitewide_newsletter_form_validate');
  $form['#submit'] = array('immoklink_sitewide_newsletter_form_submit');
  $form['actions']['submit']['#ajax'] = array(
    'callback' => 'immoklink_sitewide_newsletter_form_ajax_callback',
    'event' => 'click',
    'wrapper' => 'newsletter-form',
    'progress' => array(
      'message' => '',
      'type' => 'throbber',
    ),
  );
  return $form;
}

/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_newsletter_form_content_type_admin_title($subtype, $conf) {
  return t('Newsletter form');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_newsletter_form_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_newsletter_form_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
