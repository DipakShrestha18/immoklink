<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_fb75b10d-f421-43cc-99ee-f0a6cda87ac4';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 7;
$handler->conf = array(
  'title' => 'Basic page',
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
            'basic_page' => 'basic_page',
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
$display->uuid = '8c3c738f-b2bc-480b-9d77-bc93f824a761';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-01f7bfe8-4643-4c60-a168-32df686d5144';
$pane->panel = 'content';
$pane->type = 'node_title';
$pane->subtype = 'node_title';
$pane->shown = FALSE;
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
$pane->uuid = '01f7bfe8-4643-4c60-a168-32df686d5144';
$display->content['new-01f7bfe8-4643-4c60-a168-32df686d5144'] = $pane;
$display->panels['content'][0] = 'new-01f7bfe8-4643-4c60-a168-32df686d5144';
$pane = new stdClass();
$pane->pid = 'new-b44ca6a0-9fc1-4768-94a3-82f2a0b72f00';
$pane->panel = 'content';
$pane->type = 'contact';
$pane->subtype = 'contact';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-KUA-uw2NByc_JviNUoqlWPeqNz3XeVU3y3ZdBXz_QDI',
  'form_token' => '_lz0lx1GwdgGDUCvMULfN2WkMxZ4sJJu-2UR0HahXWc',
  'form_id' => 'immoklink_sitewide_contact_content_type_edit_form',
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
$pane->position = 1;
$pane->locks = array();
$pane->uuid = 'b44ca6a0-9fc1-4768-94a3-82f2a0b72f00';
$display->content['new-b44ca6a0-9fc1-4768-94a3-82f2a0b72f00'] = $pane;
$display->panels['content'][1] = 'new-b44ca6a0-9fc1-4768-94a3-82f2a0b72f00';
$pane = new stdClass();
$pane->pid = 'new-2668f7d6-18bf-47e2-884c-593f9e74b65c';
$pane->panel = 'content';
$pane->type = 'email_signup';
$pane->subtype = 'email_signup';
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
$pane->position = 2;
$pane->locks = array();
$pane->uuid = '2668f7d6-18bf-47e2-884c-593f9e74b65c';
$display->content['new-2668f7d6-18bf-47e2-884c-593f9e74b65c'] = $pane;
$display->panels['content'][2] = 'new-2668f7d6-18bf-47e2-884c-593f9e74b65c';
$pane = new stdClass();
$pane->pid = 'new-2af8c40b-d07e-4bb7-967e-f3a6279a3dc6';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:body';
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
$pane->position = 3;
$pane->locks = array();
$pane->uuid = '2af8c40b-d07e-4bb7-967e-f3a6279a3dc6';
$display->content['new-2af8c40b-d07e-4bb7-967e-f3a6279a3dc6'] = $pane;
$display->panels['content'][3] = 'new-2af8c40b-d07e-4bb7-967e-f3a6279a3dc6';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
