<?php
/**
 * @file
 * fimmoklink_text_formats_and_wysiwyg_profiles.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function fimmoklink_text_formats_and_wysiwyg_profiles_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: html_no_media
  $profiles['html_no_media'] = array(
    'format' => 'html_no_media',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Source' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'PasteFromWord' => 1,
          'Font' => 1,
          'Table' => 1,
          'Smiley' => 1,
          'CreateDiv' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
