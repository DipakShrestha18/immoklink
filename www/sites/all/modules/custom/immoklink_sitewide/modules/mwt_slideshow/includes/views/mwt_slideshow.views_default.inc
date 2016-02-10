<?php

/**
 * @file
 * mwt_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mwt_slideshow_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'mwt_slideshow') . '/includes/views/default_views', '/inc$/', array('key' => 'filename', 'recurse' => FALSE));
  $export = array();
  if (!empty($files)) {
    foreach ($files as $file) {
      @include ($file->uri);
      $export[$view->name] = $view;
    }
  }
  return $export;
}
