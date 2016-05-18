<?php
//
//drupal_add_css(
//  $rwk_touchpro_path . 'css/screen_layout_small.css', array(
//    'preprocess' => TRUE,
//    'group' => CSS_THEME,
//    'media' => 'screen and (max-width:480px)',
//    'every_page' => TRUE,
//    'weight' => 900
//  )
//);

drupal_add_css(
  drupal_get_path('theme', 'immoklink') . 'css/screen_layout_small.css', array(
    'group' => CSS_DEFAULT,
    'every_page' => TRUE,
    'weight' => 900,
  )
);
drupal_add_css(
  drupal_get_path('theme', 'immoklink') . 'css/screen_layout_medium.css', array(
    'group' => CSS_DEFAULT,
    'every_page' => TRUE,
    'weight' => 901,
  )
);
