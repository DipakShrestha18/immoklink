<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_48a76801-9fdf-47d1-a91e-ed5c662e83c9';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 9;
$handler->conf = array(
  'title' => 'Publications',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'publications' => 'publications',
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
$display->uuid = '16d87dee-f6c3-4689-95a4-efc26605253d';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-063ed212-2039-45bb-a3e5-01cf2821355b';
$pane->panel = 'content';
$pane->type = 'publications';
$pane->subtype = 'publications';
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
  'form_build_id' => 'form-oZnU6peQNgOnxaiIFwiMnIj2kLMArqnQS-MhCm_1KNM',
  'form_token' => '90XsHhM0_z5_NYfoe67hsLgiy8wUpaLuKHwB2zVEemU',
  'form_id' => 'immoklink_sitewide_publications_content_type_edit_form',
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
$pane->uuid = '063ed212-2039-45bb-a3e5-01cf2821355b';
$display->content['new-063ed212-2039-45bb-a3e5-01cf2821355b'] = $pane;
$display->panels['content'][0] = 'new-063ed212-2039-45bb-a3e5-01cf2821355b';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
