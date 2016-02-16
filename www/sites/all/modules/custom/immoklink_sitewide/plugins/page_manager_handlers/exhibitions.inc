<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_7d348ff1-fbd7-4928-828c-4820cce9e26f';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 2;
$handler->conf = array(
  'title' => 'Exhibitions',
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
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'exhibitions' => 'exhibitions',
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
$display->uuid = 'e4909092-da4d-4750-a1ee-7a964838714a';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-1c9744ae-1146-46c4-9312-1b480102694b';
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
$pane->uuid = '1c9744ae-1146-46c4-9312-1b480102694b';
$display->content['new-1c9744ae-1146-46c4-9312-1b480102694b'] = $pane;
$display->panels['content'][0] = 'new-1c9744ae-1146-46c4-9312-1b480102694b';
$pane = new stdClass();
$pane->pid = 'new-c6d862c7-4cd9-489a-8e61-a6ae9ae0f8e8';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions_image';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'title',
  'formatter' => 'image',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(
    'image_style' => '',
    'image_link' => '',
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
$pane->uuid = 'c6d862c7-4cd9-489a-8e61-a6ae9ae0f8e8';
$display->content['new-c6d862c7-4cd9-489a-8e61-a6ae9ae0f8e8'] = $pane;
$display->panels['content'][1] = 'new-c6d862c7-4cd9-489a-8e61-a6ae9ae0f8e8';
$pane = new stdClass();
$pane->pid = 'new-a0488dff-66dd-46c0-8fca-38cd06701d02';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions_exhibition';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'title',
  'formatter' => 'immoklink_exhibitions_field_formatter_default',
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
$pane->position = 2;
$pane->locks = array();
$pane->uuid = 'a0488dff-66dd-46c0-8fca-38cd06701d02';
$display->content['new-a0488dff-66dd-46c0-8fca-38cd06701d02'] = $pane;
$display->panels['content'][2] = 'new-a0488dff-66dd-46c0-8fca-38cd06701d02';
$pane = new stdClass();
$pane->pid = 'new-66f668b8-e9dd-4a6c-a3e0-c6583e3d754a';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibition_group_exh_title';
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
$pane->position = 3;
$pane->locks = array();
$pane->uuid = '66f668b8-e9dd-4a6c-a3e0-c6583e3d754a';
$display->content['new-66f668b8-e9dd-4a6c-a3e0-c6583e3d754a'] = $pane;
$display->panels['content'][3] = 'new-66f668b8-e9dd-4a6c-a3e0-c6583e3d754a';
$pane = new stdClass();
$pane->pid = 'new-35ccc1cf-6a99-4926-a7b0-4cf4d0ffba5b';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions_image1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'image',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(
    'image_style' => '',
    'image_link' => '',
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
$pane->position = 4;
$pane->locks = array();
$pane->uuid = '35ccc1cf-6a99-4926-a7b0-4cf4d0ffba5b';
$display->content['new-35ccc1cf-6a99-4926-a7b0-4cf4d0ffba5b'] = $pane;
$display->panels['content'][4] = 'new-35ccc1cf-6a99-4926-a7b0-4cf4d0ffba5b';
$pane = new stdClass();
$pane->pid = 'new-56dfbece-b531-4d49-a018-8f36365574a5';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions_group_exhi';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'immoklink_exhibitions_field_formatter_default',
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
$pane->position = 5;
$pane->locks = array();
$pane->uuid = '56dfbece-b531-4d49-a018-8f36365574a5';
$display->content['new-56dfbece-b531-4d49-a018-8f36365574a5'] = $pane;
$display->panels['content'][5] = 'new-56dfbece-b531-4d49-a018-8f36365574a5';
$pane = new stdClass();
$pane->pid = 'new-6eb3784c-9411-4154-84e0-86e8f33fb969';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibition_pub_col_title';
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
$pane->position = 6;
$pane->locks = array();
$pane->uuid = '6eb3784c-9411-4154-84e0-86e8f33fb969';
$display->content['new-6eb3784c-9411-4154-84e0-86e8f33fb969'] = $pane;
$display->panels['content'][6] = 'new-6eb3784c-9411-4154-84e0-86e8f33fb969';
$pane = new stdClass();
$pane->pid = 'new-ebf76843-c562-42da-b3a1-4ad2b9f9bbda';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibitions_image2';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'image',
  'delta_limit' => 0,
  'delta_offset' => '0',
  'delta_reversed' => FALSE,
  'formatter_settings' => array(
    'image_style' => '',
    'image_link' => '',
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
$pane->position = 7;
$pane->locks = array();
$pane->uuid = 'ebf76843-c562-42da-b3a1-4ad2b9f9bbda';
$display->content['new-ebf76843-c562-42da-b3a1-4ad2b9f9bbda'] = $pane;
$display->panels['content'][7] = 'new-ebf76843-c562-42da-b3a1-4ad2b9f9bbda';
$pane = new stdClass();
$pane->pid = 'new-bc421e76-87cb-4916-af6f-c1a6468394aa';
$pane->panel = 'content';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_exhibition_public_collect';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'immoklink_exhibitions_field_formatter_default',
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
$pane->position = 8;
$pane->locks = array();
$pane->uuid = 'bc421e76-87cb-4916-af6f-c1a6468394aa';
$display->content['new-bc421e76-87cb-4916-af6f-c1a6468394aa'] = $pane;
$display->panels['content'][8] = 'new-bc421e76-87cb-4916-af6f-c1a6468394aa';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
