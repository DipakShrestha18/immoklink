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
  'title' => t('Gallery JS'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_gallery_js_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_gallery_js_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;
  $numofimages = count($node->field_gallery_images[LANGUAGE_NONE]);


  $output .= '<!--peter gallery-->
    <script src="/sites/all/themes/immoklink_base//js/gallery-peter/modernizr-2.6.2.min.js"></script>
    <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js">
    </script>
    <script>
      window.jQuery || document.write(\'<script src="/sites/all/themes/immoklink_base/js/gallery-peter/jquery-1.9.1.min.js"><\/script>\')
    </script>

    <script>
      var my = {};
      my.view = "image";
      my.slidesize = "big";
      my.cache = "1444337682";

      my.sec_slug = "objects";
      my.gal_slug = "ace-hotel";
      my.img_slug = "4073";

      my.homeFlag = false;


      my.slide = 0;
      my.slideCount = ' . $numofimages . ';

    </script>
    <script src="/sites/all/themes/immoklink_base/js/gallery-peter/plugins.min.js">
    </script>
    <script src="/sites/all/themes/immoklink_base/js/gallery-peter/main.min.js">
    </script>
    <!--end peter gallery-->';

  $output .= '<!--video in a gallery-->
        <script type="text/javascript" src="/sites/all/themes/immoklink_base/js/venobox.min.js"></script>
        <!--end of video in a gallery-->';

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_gallery_js_content_type_admin_title($subtype, $conf) {
  return t('Gallery JS');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_gallery_js_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_gallery_js_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
