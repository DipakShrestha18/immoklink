<?php
/**
 * @file
 * Plugin to output logo.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Gallery links'),
  // 'icon' => intranet_sitewide_panels_ui_panel_icon_path(),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_gallery_links_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_gallery_links_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;
  $link = '/gallery-thumbnail/' . $node->nid;
  $thumbnail_icon = '/' . drupal_get_path('theme', 'immoklink_base') . '/images/assets/thumbnail.png';
  $share_icon = '/' . drupal_get_path('theme', 'immoklink_base') . '/images/assets/share.png';

  $output .= '<div class="page"><div class="wrap">';
  $output .= '<a href="' . $link . '" class="share1"><img src="' . $thumbnail_icon . '" width="20" height="20"></a>';
  $output .= '<a class="share no-state sub-nav-item" href="#"><img src="' . $share_icon . '" width="20" height="20"></a>';
  $output .= '</div></div>';

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_gallery_links_content_type_admin_title($subtype, $conf) {
  return t('Gallery Links');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_gallery_links_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_gallery_links_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
