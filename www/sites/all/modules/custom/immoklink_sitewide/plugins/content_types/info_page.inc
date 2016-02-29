<?php
/**
 * @file
 * Plugin to output info page.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Info page'),
  // 'icon' => intranet_sitewide_panels_ui_panel_icon_path(),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_info_page_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_info_page_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;

  $firstline_add = isset($node->field_info_address_first_line[LANGUAGE_NONE]) ? $node->field_info_address_first_line[LANGUAGE_NONE][0]['value'] . '<br />': '';
  $secondline_add = isset($node->field_info_address_second_line[LANGUAGE_NONE]) ? $node->field_info_address_second_line[LANGUAGE_NONE][0]['value'] . '<br />' : '';
  $thirdline_add = isset($node->field_info_address_third_line[LANGUAGE_NONE]) ? $node->field_info_address_third_line[LANGUAGE_NONE][0]['value'] . '<br />' : '';
  $postcode = isset($node->field_info_postcode[LANGUAGE_NONE]) ? $node->field_info_postcode[LANGUAGE_NONE][0]['value'] . '<br />' : '';
  if (isset($node->field_info_telephone[LANGUAGE_NONE])) {
    $tel = '<a class="tel" itemprop="telephone" href="tel:' . $node->field_info_telephone[LANGUAGE_NONE][0]['value'] .'">' . $node->field_info_telephone[LANGUAGE_NONE][0]['value'] . '</a>';
  } else {
    $tel = '';
  }

  if (isset($node->field_info_email[LANGUAGE_NONE])) {
    $email = '<a href="mailto:' . $node->field_info_email[LANGUAGE_NONE][0]['value'] . '" class="email-link">' . $node->field_info_email[LANGUAGE_NONE][0]['value'] . '</a>';
  } else {
    $email = '';
  }

  $output .= '<div id="three-columns" class="grid-container" style="display:block;">
			          <ul class="news columns-3">
            	      <li class="media"><p>' . $firstline_add . $secondline_add . $thirdline_add . $postcode . $tel . $email . '</p></li>';


  $infos = $node->field_info_info_list[LANGUAGE_NONE];
  global $base_url;
  foreach ($infos as $info) {
    $output .= '<li class="media">
                	<a class="hoover" href="' . $base_url . $info['info_link'] . '">
                    <div class="media__body">
                        <h2>' . $info['info_title'] . '</h2>
                    </div>';
    $file = file_load($info['info_image_fid']);
    $image_path = $file->uri;
  $output .= theme_image_style(array('style_name' => 'listings_image', 'path' => $image_path, 'height' => '', 'width' => '', 'attributes' => array('class' => array('media__image'))));

  $output .= '</a></li>';
  }

  global $base_url;
  $path = $base_url . '/' . drupal_get_path('theme', 'immoklink_base') . '/images/assets/';
  $output .= '<li class="media" style="vertical-align:bottom; text-align:right;">';

  if (isset($node->field_info_facebook_url[LANGUAGE_NONE])) {
    $output .= '<a href="' . $node->field_info_facebook_url[LANGUAGE_NONE][0]['value'] . '" class="sm-icon"><img class="sm-icon" src="' . $path . 'facebook_about.png" /></a>';
  }

  if (isset($node->field_info_twitter_url[LANGUAGE_NONE])) {
    $output .= '<a href="' . $node->field_info_twitter_url[LANGUAGE_NONE][0]['value'] . '" class="sm-icon"><img  class="sm-icon" src="' . $path . 'twitter_about.png" /></a>';
  }

  if (isset($node->field_info_instagram_url[LANGUAGE_NONE])) {
    $output .=  '<a href="' . $node->field_info_instagram_url[LANGUAGE_NONE][0]['value'] . '" class="sm-icon"><img class="sm-icon" src="' . $path . 'instagram_about.png" /></a>';
  }

  if (isset($node->field_info_blog_url[LANGUAGE_NONE])) {
    $output .=  '<a href="' . $node->field_info_blog_url[LANGUAGE_NONE][0]['value'] . '" class="sm-icon"><img class="sm-icon" src="' . $path . 'blogicon_about.png" /></a>';
  }
  $output .= '</li></ul></div>';

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_info_page_content_type_admin_title($subtype, $conf) {
  return t('Info page');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_info_page_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_info_page_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
