<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_dd9f3795-7ff5-49a7-8426-e18636193f3f';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 8;
$handler->conf = array(
  'title' => 'Exhibitions New',
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
            'exhibtions_new' => 'exhibtions_new',
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
$display->uuid = 'c2af9bba-3658-41a7-816c-7bcc4a0b82b0';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-35af6662-bc99-4bd1-b373-3bd78f8977ce';
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
$pane->uuid = '35af6662-bc99-4bd1-b373-3bd78f8977ce';
$display->content['new-35af6662-bc99-4bd1-b373-3bd78f8977ce'] = $pane;
$display->panels['content'][0] = 'new-35af6662-bc99-4bd1-b373-3bd78f8977ce';
$pane = new stdClass();
$pane->pid = 'new-58b0e315-2a73-4c19-bd67-15d0af970e30';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'text_default',
  'delta_limit' => '0',
  'delta_offset' => '0',
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
$pane->uuid = '58b0e315-2a73-4c19-bd67-15d0af970e30';
$display->content['new-58b0e315-2a73-4c19-bd67-15d0af970e30'] = $pane;
$display->panels['content'][1] = 'new-58b0e315-2a73-4c19-bd67-15d0af970e30';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = 'new-35af6662-bc99-4bd1-b373-3bd78f8977ce';
$handler->conf['display'] = $display;
