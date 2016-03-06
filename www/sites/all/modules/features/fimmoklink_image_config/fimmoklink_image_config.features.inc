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

  // Exported image style: fullwidth_landscape_image.
  $styles['fullwidth_landscape_image'] = array(
    'label' => 'Fullwidth Landscape Image',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fullwidth_potrait_image.
  $styles['fullwidth_potrait_image'] = array(
    'label' => 'Fullwidth Potrait Image',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 470,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

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

  // Exported image style: image_landscale.
  $styles['image_landscale'] = array(
    'label' => 'Image landscale',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_portrait.
  $styles['image_portrait'] = array(
    'label' => 'Image portrait',
    'effects' => array(
      4 => array(
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
