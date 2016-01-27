<?php
/**
 * @file
 * Layout definition for Immoklink site.
 */

/**
 * Panel plugin definition for Book Prize.
 */
$plugin = array(
  'title'    => t('Immoklink - Sitewide'),
  'category' => t('Immo Klink'),
  'icon'     => 'immoklink_sitewide.png',
  'theme'    => 'panels_immoklink_sitewide_immoklink_sitewide',
  'css'      => 'immoklink_sitewide.css',
  'regions'  => array(
    // Regions in this panel
    'top'         => t('Header'),
    'nav'         => t('Nav'),
    'content'        => t('Main content'),
  ),
);


