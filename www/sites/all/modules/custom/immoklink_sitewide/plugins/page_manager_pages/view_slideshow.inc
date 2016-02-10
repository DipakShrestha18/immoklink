<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'view_slideshow';
$page->task = 'page';
$page->admin_title = 'View slideshow';
$page->admin_description = 'Overrides slideshow display.';
$page->path = 'slideshow/%slideshow';
$page->access = array();
$page->menu = array();
$page->arguments = array(
  'slideshow' => array(
    'id' => 1,
    'identifier' => 'Slideshow: ID',
    'name' => 'entity_id:mwt_slideshow',
    'settings' => array(),
  ),
);
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_view_slideshow_panel_context';
$handler->task = 'page';
$handler->subtask = 'view_slideshow';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => array(
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
  'middle' => array(
    'style' => 'planer',
  ),
);
$display->cache = array();
$display->title = '%slideshow:title';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-1';
$pane->panel = 'middle';
$pane->type = 'token';
$pane->subtype = 'mwt_slideshow:title';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'sanitize' => 1,
  'context' => 'argument_entity_id:mwt_slideshow_1',
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
$display->content['new-1'] = $pane;
$display->panels['middle'][0] = 'new-1';
$pane = new stdClass();
$pane->pid = 'new-2';
$pane->panel = 'middle';
$pane->type = 'entity_field';
$pane->subtype = 'mwt_slideshow:field_slideshow_image';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'slideshow_image',
  'delta_limit' => '0',
  'delta_offset' => '0',
  'delta_reversed' => 0,
  'formatter_settings' => array(),
  'context' => 'argument_entity_id:mwt_slideshow_1',
  'override_title' => 1,
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => 'div',
      'add_default_classes' => 0,
      'class_enable' => 1,
      'class' => 'royalslider-container',
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
      'type' => 'div',
      'add_default_classes' => 0,
      'class_enable' => 1,
      'class' => 'royalSlider rsMosaic',
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
$display->content['new-2'] = $pane;
$display->panels['middle'][1] = 'new-2';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
