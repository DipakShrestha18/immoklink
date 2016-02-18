<?php
/**
 * @file
 * Layout definition for Immoklink gallery.
 */

/**
 * Panel plugin definition for Book Prize.
 */
$plugin = array(
  'title'    => t('Immoklink - Gallery'),
  'category' => t('Immo Klink'),
  'icon'     => 'immoklink_gallery.png',
  'theme'    => 'panels_immoklink_gallery',
  'css'      => 'immoklink_gallery.css',
  'regions'  => array(
    // Regions in this panel
    'top'         => t('Header'),
    'nav'         => t('Nav'),
    'content'        => t('Main content'),
  ),
);


