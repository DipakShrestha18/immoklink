<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Contact'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_contact_content_type_render',
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_contact_content_type_render($subtype, $conf, $panel_args, $context) {
  global $base_url;

  $output = '';
  $output .= '<div class="address">';
  $output .= '<p>Immo Klink Studio<br />
              London EC1<br />
              +44(0)2072516976<br />
              <a href="mailto:studio@immoklink.com">studio@immoklink.com</a></p>';
  $output .= '</div>';


  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}

/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_contact_content_type_admin_title($subtype, $conf) {
  return t('Newsletter form');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_contact_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_contact_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
