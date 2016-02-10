<?php
$view = new view();
$view->name = 'administration_slideshows';
$view->description = 'Administration listings for slideshows.';
$view->tag = 'default';
$view->base_table = 'mwt_slideshow';
$view->human_name = 'Administration slideshows';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Slideshows';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer slideshow entity';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links"><li><a href="/slideshow/add">Add Slideshow</a></li>
</ul>';
/* Field: Slideshow: Slideshow ID */
$handler->display->display_options['fields']['slideshow_id']['id'] = 'slideshow_id';
$handler->display->display_options['fields']['slideshow_id']['table'] = 'mwt_slideshow';
$handler->display->display_options['fields']['slideshow_id']['field'] = 'slideshow_id';
$handler->display->display_options['fields']['slideshow_id']['exclude'] = TRUE;
/* Field: Slideshow: Label */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'mwt_slideshow';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Title';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'slideshow/[slideshow_id]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Operations';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/slideshow/[slideshow_id]/edit">Edit</a>&nbsp; &nbsp;<a href="/slideshow/[slideshow_id]/delete">Delete</a> ';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/workbench/slideshows';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Slideshows';
$handler->display->display_options['menu']['description'] = 'A view of slideshows';
$handler->display->display_options['menu']['weight'] = '105';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
