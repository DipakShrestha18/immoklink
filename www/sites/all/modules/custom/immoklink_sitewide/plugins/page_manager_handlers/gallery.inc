<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_1dee7f55-fbef-478d-a0bd-ae46157db4ea';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 4;
$handler->conf = array(
  'title' => 'Gallery',
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
            'gallery' => 'gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'planer_one_column';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
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
    'default' => NULL,
  ),
  'content' => array(
    'style' => 'planer',
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '2f729715-8d17-4b94-8a15-95bd5021f840';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-2b09f8ec-1fad-44c3-8ba3-ed364caa4c43';
$pane->panel = 'content';
$pane->type = 'node_title';
$pane->subtype = 'node_title';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'link' => 0,
  'markup' => 'none',
  'id' => '',
  'class' => '',
  'context' => 'argument_entity_id:node_1',
  'override_title' => 1,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => 'div',
      'add_default_classes' => 0,
      'class_enable' => 1,
      'class' => 'page',
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
      'type' => 'h1',
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
$pane->uuid = '2b09f8ec-1fad-44c3-8ba3-ed364caa4c43';
$display->content['new-2b09f8ec-1fad-44c3-8ba3-ed364caa4c43'] = $pane;
$display->panels['content'][0] = 'new-2b09f8ec-1fad-44c3-8ba3-ed364caa4c43';
$pane = new stdClass();
$pane->pid = 'new-951c0f74-fcd0-4b5a-8a1c-7c2f00a850f5';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_gallery_images';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'gallery_format',
  'delta_limit' => '',
  'delta_offset' => '',
  'delta_reversed' => 0,
  'formatter_settings' => array(),
  'context' => 'argument_entity_id:node_1',
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
$pane->uuid = '951c0f74-fcd0-4b5a-8a1c-7c2f00a850f5';
$display->content['new-951c0f74-fcd0-4b5a-8a1c-7c2f00a850f5'] = $pane;
$display->panels['content'][1] = 'new-951c0f74-fcd0-4b5a-8a1c-7c2f00a850f5';
$pane = new stdClass();
$pane->pid = 'new-c99a41f1-46c1-43cd-b2ac-607c5035b5cb';
$pane->panel = 'content';
$pane->type = 'gallery_links';
$pane->subtype = 'gallery_links';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'context' => array(
    0 => 'argument_entity_id:node_1',
  ),
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-VFxaDoi-0S8ESJsM0g2aSfMoUcCcQ6ALhFPI-4B1Efo',
  'form_token' => 'lMmGJHIpiZnNUnT1qOCHLab_aZNpCgjT2vfGreStocw',
  'form_id' => 'immoklink_sitewide_gallery_links_content_type_edit_form',
  'op' => 'Finish',
  'override_title' => 1,
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
$pane->position = 2;
$pane->locks = array();
$pane->uuid = 'c99a41f1-46c1-43cd-b2ac-607c5035b5cb';
$display->content['new-c99a41f1-46c1-43cd-b2ac-607c5035b5cb'] = $pane;
$display->panels['content'][2] = 'new-c99a41f1-46c1-43cd-b2ac-607c5035b5cb';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
