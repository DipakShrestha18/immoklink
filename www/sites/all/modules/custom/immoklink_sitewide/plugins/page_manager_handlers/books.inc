<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_c6c0f4df-22de-4c7b-a210-84fe9eddc43a';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 3;
$handler->conf = array(
  'title' => 'Books',
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
            'books' => 'books',
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
    'default' => NULL,
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
  'content' => array(
    'style' => 'planer',
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '46fd6853-a5cd-40a6-b541-9178ccdfe68d';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-ff0351d5-684d-4d10-98d6-3403c7c5fd52';
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
      'type' => 'h1',
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
$pane->uuid = 'ff0351d5-684d-4d10-98d6-3403c7c5fd52';
$display->content['new-ff0351d5-684d-4d10-98d6-3403c7c5fd52'] = $pane;
$display->panels['content'][0] = 'new-ff0351d5-684d-4d10-98d6-3403c7c5fd52';
$pane = new stdClass();
$pane->pid = 'new-362262c5-8393-479e-8187-bd77d6d5bf18';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_books_description';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'text_default',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
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
$pane->uuid = '362262c5-8393-479e-8187-bd77d6d5bf18';
$display->content['new-362262c5-8393-479e-8187-bd77d6d5bf18'] = $pane;
$display->panels['content'][1] = 'new-362262c5-8393-479e-8187-bd77d6d5bf18';
$pane = new stdClass();
$pane->pid = 'new-4f57f745-ec33-4393-acda-f1b8f8e008ec';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_books_books';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'books_format',
  'delta_limit' => '',
  'delta_offset' => '',
  'delta_reversed' => 0,
  'formatter_settings' => array(
    'view_mode' => 'full',
  ),
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
      'class' => 'grid-container',
      'attributes_enable' => 1,
      'attributes' => 'id=three-columns
style=display:block;',
      'attributes_array' => array(
        'id' => 'three-columns',
        'style' => 'display:block;',
      ),
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
$pane->uuid = '4f57f745-ec33-4393-acda-f1b8f8e008ec';
$display->content['new-4f57f745-ec33-4393-acda-f1b8f8e008ec'] = $pane;
$display->panels['content'][2] = 'new-4f57f745-ec33-4393-acda-f1b8f8e008ec';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
