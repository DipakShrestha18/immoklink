<?php
/**
 * @file
 * fimmoklink_image_config.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function fimmoklink_image_config_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'label' => 'Gallery thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: listings_image.
  $styles['listings_image'] = array(
    'label' => 'Listings image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
