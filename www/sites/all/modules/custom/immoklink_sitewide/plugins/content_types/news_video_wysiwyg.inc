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
  'title' => t('News main content with vimeo'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_news_video_wysiwyg_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_news_video_wysiwyg_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;
  global $base_url;
  if (isset($node->field_news_vimeo_url[LANGUAGE_NONE])) {
    $paragraphs = $node->field_news_vimeo_url[LANGUAGE_NONE];
    foreach ($paragraphs as $paragraph) {
      $content = paragraphs_field_get_entity($paragraph);
      if ($content->bundle == 'wysiwyg_field') {
        $output .= $content->field_paragraph_wysiwyg_field[LANGUAGE_NONE][0]['safe_value'];
      } elseif ($content->bundle == 'news_video') {
        $video = $content->field_vimeo_url[LANGUAGE_NONE][0]['value'];
        $img_name = $content->field_paragraph_news_image[LANGUAGE_NONE][0]['filename'];
        $output .= '<a class="btn btn-info venoboxvid vbox-item" data-gall="gall2" data-type="vimeo" href="' . $video . '?autoplay=1"><img class="slide-img" src="' . $base_url . '/sites/default/files/' . $img_name . '"></a>';
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
function immoklink_sitewide_news_video_wysiwyg_content_type_admin_title($subtype, $conf) {
  return t('News main content');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_news_video_wysiwyg_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_news_video_wysiwyg_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
