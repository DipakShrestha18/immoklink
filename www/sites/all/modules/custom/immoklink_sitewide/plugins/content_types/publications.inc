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
  'title' => t('Publications'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_publications_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_publications_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }
  global $base_url;

  $node = $context[0]->data;
  if (isset($node->field_publications[LANGUAGE_NONE])) {
    $publications = $node->field_publications[LANGUAGE_NONE];

    foreach ($publications as $publication) {
      $publication = paragraphs_field_get_entity($publication);
      $uri = $publication->field_publications_image[LANGUAGE_NONE][0]['uri'];
      $imagename = $publication->field_publications_image[LANGUAGE_NONE][0]['filename'];
      if (isset($publication->field_publications_pdf_file[LANGUAGE_NONE])) {
        $filename = $publication->field_publications_pdf_file[LANGUAGE_NONE][0]['filename'];
      }
      $image = theme_image_style(array('style_name' => 'fullwidth_potrait_image', 'path' => $uri, 'height' => '', 'width' => '', 'alt' => ''));

      $output .= '<section id="gallery-highlight" class="page-cover">';
      $output .= '<div class="page-cover-item clearfix image-landscape">';
      $output .= '<div class="page-cover-wrap">';
      $output .= '<span class="page-cover-img">';
      if (isset($publication->field_publications_pdf_file[LANGUAGE_NONE])) {
        $output .= '<a href="' . $base_url . '/sites/default/files/' . $filename . '" target="_blank">';
        $output .= $image;
        $output .= '</a>';
      } else {
        $output .= '<a class="btn btn-info venoboxvid vbox-item" href="' . $base_url . '/sites/default/files/' . $imagename . '">';
        $output .= $image;
        $output .= '</a>';
      }
      $output .= '</span></div>';

      if (isset($publication->field_publications_description[LANGUAGE_NONE])) {
        $output .= '<div class="page-cover-wrap">';
        $output .= $publication->field_publications_description[LANGUAGE_NONE][0]['value'];
        $output .= '</div>';
      }
      $output .= '</div></section>';
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
function immoklink_sitewide_publications_content_type_admin_title($subtype, $conf) {
  return t('Publications');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_publications_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_publications_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
