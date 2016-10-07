<?php
$view = new view();
$view->name = 'news_listings_by_tag';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'News Listings by tag';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Date (field_news_date) */
$handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
$handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
$handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
$handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
/* Contextual filter: Content: Tags (field_news_tags) */
$handler->display->display_options['arguments']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
$handler->display->display_options['arguments']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
$handler->display->display_options['arguments']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
$handler->display->display_options['arguments']['field_news_tags_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_news_tags_tid']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_news_tags_tid']['default_argument_options']['index'] = '2';
$handler->display->display_options['arguments']['field_news_tags_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_news_tags_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_news_tags_tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$translatables['news_listings_by_tag'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('All'),
);
