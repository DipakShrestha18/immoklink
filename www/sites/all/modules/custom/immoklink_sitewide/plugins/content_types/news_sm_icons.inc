<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('News Social Media Icons'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_news_sm_icons_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_news_sm_icons_content_type_render($subtype, $conf, $panel_args, $context) {
  global $base_url;

  if (!isset($context[0]->data)) {
    return;
  }
  $output = '';
  $node = $context[0]->data;
  $title = $node->title;
  $path = drupal_get_path_alias('node/' . $node->nid);
  $link = $base_url . '/' . $path;

  $output = '';
  $output .= '<div class="icons-news">';
  $output .= '<a href="http://www.facebook.com/share.php?u=' . $link . '&title=' . $title . ' target="_blank">
  <img class="sm-icon" src="' . $base_url . '/sites/all/themes/immoklink_base/images/assets/facebook_about1.png">
   </a>
  <a class="icon twitter-link" href="https://twitter.com/intent/tweet?original_referer=' . $base_url . '&amp;url=' . $link . '&amp;text=' . $title . '&amp;via=Immoklink" target="_blank"><img class="sm-icon" src="' . $base_url . '/sites/all/themes/immoklink_base/images/assets/twitter_about1.png"></a>';
  $output .= '</div>';


  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}

/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_news_sm_icons_content_type_admin_title($subtype, $conf) {
  return t('News Social Media Icons');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_news_sm_icons_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_news_sm_icons_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
