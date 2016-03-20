<?php
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'site_template__panel_context_398d5eeb-fd5a-4917-9ba4-3100967db03c';
$handler->task = 'site_template';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
    'title' => 'ImmoKlink Sitewide',
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
                'context' => 'node',
                'not' => TRUE,
            ),
            1 => array(
                'name' => 'path_visibility',
                'settings' => array(
                    'visibility_setting' => '1',
                    'paths' => 'gallery-thumbnail/*',
                ),
                'context' => 'empty',
                'not' => FALSE,
            ),
        ),
        'logic' => 'or',
    ),
);
$display = new panels_display();
$display->layout = 'immoklink_sitewide';
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
    'content' => array(
        'style' => 'planer',
    ),
    'top' => array(
        'style' => 'planer',
    ),
    'nav' => array(
        'style' => 'planer',
    ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'f350f138-e3ad-4d45-ad64-8bc521c8adbd';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-01f4ef19-9f61-42ef-a009-94b7fa281940';
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
$pane->uuid = '01f4ef19-9f61-42ef-a009-94b7fa281940';
$display->content['new-01f4ef19-9f61-42ef-a009-94b7fa281940'] = $pane;
$display->panels['content'][0] = 'new-01f4ef19-9f61-42ef-a009-94b7fa281940';
$pane = new stdClass();
$pane->pid = 'new-0afe8e6d-75ae-4d98-b5dd-57a4f9b49949';
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
$pane->uuid = '0afe8e6d-75ae-4d98-b5dd-57a4f9b49949';
$display->content['new-0afe8e6d-75ae-4d98-b5dd-57a4f9b49949'] = $pane;
$display->panels['content'][1] = 'new-0afe8e6d-75ae-4d98-b5dd-57a4f9b49949';
$pane = new stdClass();
$pane->pid = 'new-2fefdde5-f449-4d3d-911d-2f5e1bafe203';
$pane->panel = 'nav';
$pane->type = 'menu';
$pane->subtype = 'menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
    'return' => 'Finish',
    'cancel' => 'Cancel',
    'context' => array(
        0 => 'logged-in-user',
    ),
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-2BRSUIwIsB0TWTppfGeJrFu-KHZOrKNQ6iMeNK9pAhQ',
    'form_token' => '9WLgzMfEdZelM7KN0TS_PXCUDOsTcIKGp4syKSIL4VE',
    'form_id' => 'immoklink_sitewide_menu_content_type_edit_form',
    'op' => 'Finish',
    'override_title' => 0,
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
$pane->uuid = '2fefdde5-f449-4d3d-911d-2f5e1bafe203';
$display->content['new-2fefdde5-f449-4d3d-911d-2f5e1bafe203'] = $pane;
$display->panels['nav'][0] = 'new-2fefdde5-f449-4d3d-911d-2f5e1bafe203';
$pane = new stdClass();
$pane->pid = 'new-8a49a748-9fcd-4fca-b4b4-e1858db7dd9e';
$pane->panel = 'top';
$pane->type = 'logo';
$pane->subtype = 'logo';
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
$pane->uuid = '8a49a748-9fcd-4fca-b4b4-e1858db7dd9e';
$display->content['new-8a49a748-9fcd-4fca-b4b4-e1858db7dd9e'] = $pane;
$display->panels['top'][0] = 'new-8a49a748-9fcd-4fca-b4b4-e1858db7dd9e';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
