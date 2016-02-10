<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->langcode contains its textual representation.
 *   $language->dir contains the language direction.
 *   It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html>
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>

    <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable = yes">

    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
  <link rel="stylesheet" type="text/css" href="/sites/all/themes/immoklink_base/css/gallery/screen.css">
  <link rel="stylesheet" type="text/css" href="/sites/all/themes/immoklink_base/css/screen_styles.css" />
  <link rel="stylesheet" type="text/css" href="/sites/all/themes/immoklink_base/css/screen_layout_large.css" />
  <link rel="stylesheet" type="text/css" media="only screen and (min-width:50px) and (max-width:500px)" href="/sites/all/themes/immoklink_base/css/screen_layout_small.css" />
  <link rel="stylesheet" type="text/css" media="only screen and (min-width:501px) and (max-width:800px)" href="/sites/all/themes/immoklink_base/css/screen_layout_medium.css" />

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]>
  <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
    <script>
      (function flagSVG() {
        var ns = {'svg': 'http://www.w3.org/2000/svg'};
        if(document.implementation.hasFeature("http://www.w3.org/TR/SVG11/feature#BasicStructure", "1.1")) {document.getElementsByTagName('html')[0].className += ' svg';}
      })();
    </script>

  <script type="text/javascript" src="/sites/all/themes/immoklink_base/js/jquery-1.8.3.min.js"></script>
  <script type="text/javascript" src="/sites/all/themes/immoklink_base//js/farinspace/jquery.imgpreload.min.js"></script>
  <script type="text/javascript" src="/sites/all/themes/immoklink_base//js/design.js"></script>
  <!--[if lt IE 9]>
  <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

  <!--peter gallery-->
  <script src="/sites/all/themes/immoklink_base//js/gallery-peter/modernizr-2.6.2.min.js"></script>
  <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js">
  </script>
  <script>
    window.jQuery || document.write('<script src="/sites/all/themes/immoklink_base/js/gallery-peter/jquery-1.9.1.min.js"><\/script>')
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
    my.slideCount = 10;

  </script>
  <script src="/sites/all/themes/immoklink_base/js/gallery-peter/plugins.min.js">
  </script>
  <script src="/sites/all/themes/immoklink_base/js/gallery-peter/main.min.js">
  </script>
  <!--end peter gallery-->

  <!--video in a gallery
    <script type="text/javascript" src="/sites/all/themes/immoklink_base//js/venobox.min.js"></script>
  <!--end of video in a gallery-->
</head>
<body>

    <div id="skip-link">
      <a href="#main" class="element-invisible element-focusable" role="link"><?php print t('Skip to main content'); ?></a>
    </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

  </body>
</html>
