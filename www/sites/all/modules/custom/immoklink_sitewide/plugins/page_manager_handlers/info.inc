<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__info';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'Info',
  'no_blocks' => 1,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'info',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'info' => 'info',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
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
$display->uuid = 'b0715223-e5a4-49ee-9f16-38b5a68c124e';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-db5d2983-b2cb-4745-a1f1-787942f8d429';
$pane->panel = 'content';
$pane->type = 'info_page';
$pane->subtype = 'info_page';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'context' => array(
    0 => 'argument_entity_id:node_1',
  ),
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form--Lau01a_JLxzXfvYKwDmq2RAaJuJ-EjCZdggmrGCPUM',
  'form_token' => 'VJyjUQ4BZj1j0bZjc7hUoPwDnj_xxPDIwmvVG1chAtc',
  'form_id' => 'immoklink_sitewide_info_page_content_type_edit_form',
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
$pane->uuid = 'db5d2983-b2cb-4745-a1f1-787942f8d429';
$display->content['new-db5d2983-b2cb-4745-a1f1-787942f8d429'] = $pane;
$display->panels['content'][0] = 'new-db5d2983-b2cb-4745-a1f1-787942f8d429';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
