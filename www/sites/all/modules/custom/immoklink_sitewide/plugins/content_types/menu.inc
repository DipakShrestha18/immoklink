<?php
/**
 * @file
 * Plugin to output menu.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Sitewide menu'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_menu_content_type_render',
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
  ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_menu_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;
  $output = '';
  if (!isset($context[0]->data)) {
    return;
  }

  $node = $context[0]->data;

  $navs = array(
    'People' => '/gallery-thumbnail/63',
    'Reportage' => '/reportage',
    'Works' => '/works',
    'Fashion' => '/fashion',
    'Publications' => '/publications',
    'About' => '/about',
    'News' => '/news',
  );

  foreach ($navs as $key => $nav) {
    if ($nav == request_uri()) {
      $output .= '<a class="selected" href="' . $nav . '" id="' . strtolower($key) . '" >' . $key . '</a>';
    } else {
      $output .= '<a href="' . $nav . '"  id="' . $key . '">' . $key . '</a>';
    }
  }

  if (in_array('Editor', $user->roles)) {
    $output .= l('My workbench', 'admin/workbench');
  }

  if (isset($node->type) && $node->type = 'gallery') {
    if (isset($node->field_gallery_gallery_type[LANGUAGE_NONE])) {
      $term_id = $node->field_gallery_gallery_type[LANGUAGE_NONE][0]['target_id'];
      $term = taxonomy_term_load($term_id);
    } else {
      $term = new stdClass();
      $term->name = 'People';
    }

    $output .= '<script type="text/javascript">$("nav a").removeClass();</script>';
    if ($term->name == 'Reportage') {
      $output .= '<script type="text/javascript">$("nav a#Reportage").addClass("selected");</script>';
    } elseif ($term->name == 'Fashion') {
      $output .= '<script type="text/javascript">$("nav a#Fashion").addClass("selected");</script>';
    } elseif ($term->name == 'Works') {
      $output .= '<script type="text/javascript">$("nav a#Works").addClass("selected");</script>';
    } elseif ($term->name == 'People') {
      $output .= '<script type="text/javascript">$("nav a#People").addClass("selected");</script>';
    }
  }

  if (strpos(request_uri(), 'gallery-thumbnail/') !== false) {
    $node_thumbnail = node_load(arg(1));
    if (!$node_thumbnail) {
      $output .= '<script type="text/javascript">$("nav a#People").addClass("selected");</script>';
    } else if ($node_thumbnail) {
      if (isset($node_thumbnail->field_gallery_gallery_type[LANGUAGE_NONE])) {
        $tid = $node_thumbnail->field_gallery_gallery_type[LANGUAGE_NONE][0]['target_id'];
        $term = taxonomy_term_load($tid);
        if ($term->name == 'Reportage') {
          $output .= '<script type="text/javascript">$("nav a#Reportage").addClass("selected");</script>';
        } elseif ($term->name == 'Fashion') {
          $output .= '<script type="text/javascript">$("nav a#Fashion").addClass("selected");</script>';
        } elseif ($term->name == 'Works') {
          $output .= '<script type="text/javascript">$("nav a#Works").addClass("selected");</script>';
        }
      }
    }
  }

  if (strpos(request_uri(), '/news/') !== false) {
    $output .= '<script type="text/javascript">$("nav a#News").addClass("selected");</script>';
  }

  $info_url = array(
    "/info/about",
    "/info/exhibitions",
    "/info/books",
    "/info/press",
  );

  if (in_array(request_uri(), $info_url)) {
    $output .= '<script type="text/javascript">$("nav a#Info").addClass("selected");</script>';
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_menu_content_type_admin_title($subtype, $conf) {
  return t('Sitewide menu');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_menu_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_menu_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
