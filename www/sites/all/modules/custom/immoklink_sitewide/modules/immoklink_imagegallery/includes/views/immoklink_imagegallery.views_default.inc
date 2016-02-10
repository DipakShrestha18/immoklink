<?php

/**
 * @file
 * bp_imagegallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immoklink_imagegallery_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'immoklink_imagegallery') . '/includes/views/default_views', '/inc$/', array('key' => 'filename', 'recurse' => FALSE));
  $export = array();
  if (!empty($files)) {
    foreach ($files as $file) {
      @include ($file->uri);
      $export[$view->name] = $view;
    }
  }
  return $export;
}
