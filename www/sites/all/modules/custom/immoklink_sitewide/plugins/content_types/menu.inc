<?php
/**
 * @file
 * Plugin to output menu.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Sitewide menu'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_menu_content_type_render',
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_menu_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;


  $output = '';

  $navs = array(
    'People' => '/gallery-thumbnail/63',
    'Reportage' => '/reportage',
    'Works' => '/works',
    'Fashion' => '/fashion',
    'Info' => '/info',
    'News' => '/news',
  );
  foreach ($navs as $key => $nav) {
    if ($nav == request_uri()) {
      $output .= '<a class="selected" href="' . $nav . '" >' . $key .'</a>';
    } else {
      $output .= '<a href="' . $nav . '">' . $key . '</a>';
    }
  }

  if (in_array('Editor', $user->roles)) {
    $output .= l('My workbench', 'admin/workbench');
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_menu_content_type_admin_title($subtype, $conf) {
  return t('Sitewide menu');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_menu_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_menu_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
