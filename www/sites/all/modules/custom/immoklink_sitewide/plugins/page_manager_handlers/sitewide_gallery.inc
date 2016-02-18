<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'site_template__panel_context_561beb63-488d-4419-82d7-86a7e12e46d2';
$handler->task = 'site_template';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'ImmoKlink Gallery',
  'no_blocks' => 1,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'news' => 'news',
            'books' => 'books',
            'exhibitions' => 'exhibitions',
            'info' => 'info',
          ),
        ),
        'context' => 'node',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'immoklink_gallery';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => array(
      'region_wrapper' => array(
        'type' => '',
        'add_default_classes' => 0,
        'class_enable' => 0,
        'class' => '',
        'attributes_enable' => 0,
        'attributes' => '',
      ),
      'separator' => array(
        'active' => 0,
        'element_type' => '',
        'show_css' => 0,
        'element_class' => '',
      ),
    ),
    'nav' => array(
      'region_wrapper' => array(
        'type' => 'div',
        'add_default_classes' => 0,
        'class_enable' => 0,
        'class' => '',
        'attributes_enable' => 0,
        'attributes' => '',
      ),
      'separator' => array(
        'active' => 0,
        'element_type' => '',
        'show_css' => 0,
        'element_class' => '',
      ),
    ),
    'content' => array(
      'region_wrapper' => array(
        'type' => '',
        'add_default_classes' => 0,
        'class_enable' => 0,
        'class' => '',
        'attributes_enable' => 0,
        'attributes' => '',
      ),
      'separator' => array(
        'active' => 0,
        'element_type' => '',
        'show_css' => 0,
        'element_class' => '',
      ),
    ),
  ),
  'top' => array(
    'style' => 'planer',
  ),
  'nav' => array(
    'style' => 'planer',
  ),
  'content' => array(
    'style' => 'planer',
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '53f9ca11-a34f-468f-b696-792fedee61bc';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-0f0845cb-b186-4575-88fe-89f0b5aa39d8';
$pane->panel = 'content';
$pane->type = 'pane_messages';
$pane->subtype = 'pane_messages';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_title' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_content' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
  ),
  'style' => 'planer',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '0f0845cb-b186-4575-88fe-89f0b5aa39d8';
$display->content['new-0f0845cb-b186-4575-88fe-89f0b5aa39d8'] = $pane;
$display->panels['content'][0] = 'new-0f0845cb-b186-4575-88fe-89f0b5aa39d8';
$pane = new stdClass();
$pane->pid = 'new-96cf7f5b-1f55-4467-9dd2-806cd1875f3b';
$pane->panel = 'content';
$pane->type = 'page_content';
$pane->subtype = 'page_content';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'context' => 'argument_page_content_1',
  'override_title' => 1,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_title' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_content' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
  ),
  'style' => 'planer',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$pane->uuid = '96cf7f5b-1f55-4467-9dd2-806cd1875f3b';
$display->content['new-96cf7f5b-1f55-4467-9dd2-806cd1875f3b'] = $pane;
$display->panels['content'][1] = 'new-96cf7f5b-1f55-4467-9dd2-806cd1875f3b';
$pane = new stdClass();
$pane->pid = 'new-2ff49373-9142-4131-bdb8-7a1f683602ae';
$pane->panel = 'nav';
$pane->type = 'menu';
$pane->subtype = 'menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-reV41QhQIplcUY_GKfAMiaKtHBzONBhn5jnETWbXav8',
  'form_token' => 'cv1gwNOhXLs091MvNzLYh77Hr2LjGNsACPe4-8tpC_s',
  'form_id' => 'immoklink_sitewide_menu_content_type_edit_form',
  'op' => 'Finish',
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_title' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_content' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
  ),
  'style' => 'planer',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '2ff49373-9142-4131-bdb8-7a1f683602ae';
$display->content['new-2ff49373-9142-4131-bdb8-7a1f683602ae'] = $pane;
$display->panels['nav'][0] = 'new-2ff49373-9142-4131-bdb8-7a1f683602ae';
$pane = new stdClass();
$pane->pid = 'new-4e5569fa-ff8b-4afe-99d7-1bd94ae3bd0a';
$pane->panel = 'top';
$pane->type = 'logo';
$pane->subtype = 'logo';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'context' => array(
    0 => 'logged-in-user',
  ),
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-VbPVyzGqnzMFz2tSPmm0qSUMApUXt9fkg1q8iubdmqY',
  'form_token' => 'r85xAAvQyUgSDxh-GMXhxCmF1y8OYlgCtgGHMa04jP4',
  'form_id' => 'immoklink_sitewide_logo_content_type_edit_form',
  'op' => 'Finish',
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_title' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
    'element_content' => array(
      'type' => '',
      'add_default_classes' => 0,
      'class_enable' => 0,
      'class' => '',
      'attributes_enable' => 0,
      'attributes' => '',
    ),
  ),
  'style' => 'planer',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '4e5569fa-ff8b-4afe-99d7-1bd94ae3bd0a';
$display->content['new-4e5569fa-ff8b-4afe-99d7-1bd94ae3bd0a'] = $pane;
$display->panels['top'][0] = 'new-4e5569fa-ff8b-4afe-99d7-1bd94ae3bd0a';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
