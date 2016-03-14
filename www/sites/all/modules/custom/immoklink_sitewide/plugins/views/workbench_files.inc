<?php
$view = new view();
$view->name = 'files';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'file_managed';
$view->human_name = 'Files';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Files';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer nodes';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
    'filename' => 'filename',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
    'filename' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
);
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['label'] = 'Filename';
$handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
/* Field: File: Upload date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: File Usage: Use count */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'file_usage';
$handler->display->display_options['fields']['count']['field'] = 'count';
$handler->display->display_options['fields']['count']['label'] = 'Uses';
/* Field: File: Edit link */
$handler->display->display_options['fields']['edit']['id'] = 'edit';
$handler->display->display_options['fields']['edit']['table'] = 'file_managed';
$handler->display->display_options['fields']['edit']['field'] = 'edit';
$handler->display->display_options['fields']['edit']['label'] = '';
$handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
/* Field: File: Delete link */
$handler->display->display_options['fields']['delete']['id'] = 'delete';
$handler->display->display_options['fields']['delete']['table'] = 'file_managed';
$handler->display->display_options['fields']['delete']['field'] = 'delete';
$handler->display->display_options['fields']['delete']['label'] = '';
$handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
/* Sort criterion: File: Upload date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter criterion: File: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'file_managed';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/workbench/content/files';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Files';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'Files';
$handler->display->display_options['tab_options']['weight'] = '0';
