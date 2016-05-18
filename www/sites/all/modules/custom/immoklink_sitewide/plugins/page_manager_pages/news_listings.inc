<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'news_landing_page';
$page->task = 'page';
$page->admin_title = 'News Landing Page';
$page->admin_description = 'News blog listings page.';
$page->path = 'news';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_news_landing_page__panel';
$handler->task = 'page';
$handler->subtask = 'news_landing_page';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 1,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'panel',
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
$display->uuid = '12a895ec-b1f3-4798-a328-702823d51b80';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-354dd404-23df-41a8-ba2e-2c3dca193a8b';
$pane->panel = 'content';
$pane->type = 'news_listings';
$pane->subtype = 'news_listings';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-zmLSTxJHhYyb9SPakozsfbrZa-w4pD4h_qdY6-ZFt_M',
  'form_token' => 'yvIcNj0-GHJoVKdN37CEtNCboEK8Xqx7oZtB3fp-bsE',
  'form_id' => 'immoklink_sitewide_news_listings_content_type_edit_form',
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
$pane->uuid = '354dd404-23df-41a8-ba2e-2c3dca193a8b';
$display->content['new-354dd404-23df-41a8-ba2e-2c3dca193a8b'] = $pane;
$display->panels['content'][0] = 'new-354dd404-23df-41a8-ba2e-2c3dca193a8b';
$pane = new stdClass();
$pane->pid = 'new-7187eff3-9f46-4911-9860-826b87043907';
$pane->panel = 'content';
$pane->type = 'news_listings_files';
$pane->subtype = 'news_listings_files';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'return' => 'Finish',
  'cancel' => 'Cancel',
  'override_title' => 1,
  'override_title_heading' => 'h2',
  'form_build_id' => 'form-KqHr_Ufqds9x_YSuaHuowI7dNQPodpOEE0DsLzy6aos',
  'form_token' => 'H4J3QX2Zyh5E3ek5DbWZwXDkVe1Wsv0iVYRKE5efqG4',
  'form_id' => 'immoklink_sitewide_news_listings_files_content_type_edit_form',
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
$pane->uuid = '7187eff3-9f46-4911-9860-826b87043907';
$display->content['new-7187eff3-9f46-4911-9860-826b87043907'] = $pane;
$display->panels['content'][1] = 'new-7187eff3-9f46-4911-9860-826b87043907';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
