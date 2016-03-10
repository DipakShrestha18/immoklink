<?php
/**
 * @file
 * Plugin to output news main content.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('News image content'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_news_image_content_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_news_image_content_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;

  if (!isset($node->field_news_main_image_hide[LANGUAGE_NONE]) || ($node->field_news_main_image_hide[LANGUAGE_NONE][0]['value'] != 1)) {
    if (isset($node->field_news_image_main[LANGUAGE_NONE])) {
      $uri = $node->field_news_image_main[LANGUAGE_NONE][0]['uri'];
      $alt = isset($node->field_news_image_main[LANGUAGE_NONE][0]['alt']) ? $node->field_news_image_main[LANGUAGE_NONE][0]['alt'] : '';

      $height = $node->field_news_image_main[LANGUAGE_NONE][0]['height'];
      $width = $node->field_news_image_main[LANGUAGE_NONE][0]['width'];
      if ($height > $width) {
        $potrait_image = theme_image_style(array('style_name' => 'fullwidth_potrait_image', 'path' => $uri, 'height' => '', 'width' => '', 'alt' => $alt));
        $output .= $potrait_image;
      } else if ($height <= $width) {
        $landscape_image = theme_image_style(array('style_name' => 'fullwidth_landscape_image', 'path' => $uri, 'height' => '', 'width' => '', 'alt' => $alt));
        $output .= $landscape_image;
      }
    }
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_news_image_content_content_type_admin_title($subtype, $conf) {
  return t('News image content');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_news_image_content_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_news_image_content_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
