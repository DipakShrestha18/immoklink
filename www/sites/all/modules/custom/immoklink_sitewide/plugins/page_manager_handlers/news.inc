<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_8f1905e4-3cac-461e-ae35-2ec37f65c799';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'News Blogs',
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
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'news' => 'news',
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
$pane->pid = 'new-a97b3ba0-3ec0-4f49-86a2-506d0ecfc512';
$pane->panel = 'content';
$pane->type = 'title_breakcrumbs';
$pane->subtype = 'title_breakcrumbs';
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
$pane->uuid = 'a97b3ba0-3ec0-4f49-86a2-506d0ecfc512';
$display->content['new-a97b3ba0-3ec0-4f49-86a2-506d0ecfc512'] = $pane;
$display->panels['content'][0] = 'new-a97b3ba0-3ec0-4f49-86a2-506d0ecfc512';
$pane = new stdClass();
$pane->pid = 'new-2fd6d083-95cb-42d1-b4be-ed88b261292d';
$pane->panel = 'content';
$pane->type = 'news_image_content';
$pane->subtype = 'news_image_content';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => array(
    'element_wrapper' => array(
      'type' => 'figure',
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
$pane->uuid = '2fd6d083-95cb-42d1-b4be-ed88b261292d';
$display->content['new-2fd6d083-95cb-42d1-b4be-ed88b261292d'] = $pane;
$display->panels['content'][1] = 'new-2fd6d083-95cb-42d1-b4be-ed88b261292d';
$pane = new stdClass();
$pane->pid = 'new-c7fc3cbd-136a-4ee8-93b0-b5e7d2c6187d';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_news_listing_text';
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
      'type' => 'section',
      'add_default_classes' => 0,
      'class_enable' => 1,
      'class' => 'abstract',
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
      'type' => 'p',
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
$pane->uuid = 'c7fc3cbd-136a-4ee8-93b0-b5e7d2c6187d';
$display->content['new-c7fc3cbd-136a-4ee8-93b0-b5e7d2c6187d'] = $pane;
$display->panels['content'][2] = 'new-c7fc3cbd-136a-4ee8-93b0-b5e7d2c6187d';
$pane = new stdClass();
$pane->pid = 'new-661495d5-310d-47c3-890b-e46940f9ff10';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_news_date';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'date_format',
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
      'type' => 'p',
      'add_default_classes' => 0,
      'class_enable' => 1,
      'class' => 'pubdate',
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
$pane->uuid = '661495d5-310d-47c3-890b-e46940f9ff10';
$display->content['new-661495d5-310d-47c3-890b-e46940f9ff10'] = $pane;
$display->panels['content'][3] = 'new-661495d5-310d-47c3-890b-e46940f9ff10';
$pane = new stdClass();
$pane->pid = 'new-c4053a3d-f953-441a-b737-917a20fea211';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_news_main_text';
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
$pane->position = 4;
$pane->locks = array();
$pane->uuid = 'c4053a3d-f953-441a-b737-917a20fea211';
$display->content['new-c4053a3d-f953-441a-b737-917a20fea211'] = $pane;
$display->panels['content'][4] = 'new-c4053a3d-f953-441a-b737-917a20fea211';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
