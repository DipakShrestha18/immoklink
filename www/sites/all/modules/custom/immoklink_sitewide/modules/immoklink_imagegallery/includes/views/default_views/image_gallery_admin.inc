<?php
$view = new view();
$view->name = 'image_gallery_admin';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'immoklink_imagegallery';
$view->human_name = 'Image gallery admin';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Image galleries';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own unpublished content';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links"><li><a href="/imagegallery/add">Add gallery</a></li>
</ul>';
/* Field: Image gallery: Image gallery ID */
$handler->display->display_options['fields']['imagegallery_id']['id'] = 'imagegallery_id';
$handler->display->display_options['fields']['imagegallery_id']['table'] = 'immoklink_imagegallery';
$handler->display->display_options['fields']['imagegallery_id']['field'] = 'imagegallery_id';
$handler->display->display_options['fields']['imagegallery_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['imagegallery_id']['alter']['path'] = 'imagegallery/[imagegallery_id]';
/* Field: Image gallery: Label */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'immoklink_imagegallery';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'imagegallery/[imagegallery_id]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Operations';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/imagegallery/[imagegallery_id]/edit">Edit</a>&nbsp; &nbsp;<a href="/imagegallery/[imagegallery_id]/delete">Delete</a> ';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/workbench/content/image-galleries';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Image galleries';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
