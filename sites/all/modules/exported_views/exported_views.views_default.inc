<?php
/**
 * @file
 * exported_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exported_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'announcement_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Announcement view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Announcement view';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: announcement_image */
  $handler->display->display_options['fields']['field_announcement_image']['id'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['table'] = 'field_data_field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['field'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_announcement_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_announcement_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_announcement_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_announcement_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_announcement_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: announcement url */
  $handler->display->display_options['fields']['field_announcement_url']['id'] = 'field_announcement_url';
  $handler->display->display_options['fields']['field_announcement_url']['table'] = 'field_data_field_announcement_url';
  $handler->display->display_options['fields']['field_announcement_url']['field'] = 'field_announcement_url';
  $handler->display->display_options['fields']['field_announcement_url']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['text'] = '<a href=[field_announcement_url]>Register Now...</a>';
  $handler->display->display_options['fields']['field_announcement_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['path'] = '[field_announcement_url]';
  $handler->display->display_options['fields']['field_announcement_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_announcement_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_announcement_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_announcement_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_announcement_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_announcement_url']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'announcement' => 'announcement',
  );
  /* Filter criterion: Content: visible on tab (field_visible_on_tab) */
  $handler->display->display_options['filters']['field_visible_on_tab_value']['id'] = 'field_visible_on_tab_value';
  $handler->display->display_options['filters']['field_visible_on_tab_value']['table'] = 'field_data_field_visible_on_tab';
  $handler->display->display_options['filters']['field_visible_on_tab_value']['field'] = 'field_visible_on_tab_value';
  $handler->display->display_options['filters']['field_visible_on_tab_value']['value'] = array(
    'Yes' => 'Yes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['announcement_view'] = array(
    t('Master'),
    t('Announcement view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href=[field_announcement_url]>Register Now...</a>'),
    t('[field_announcement_url]'),
    t('Block'),
  );
  $export['announcement_view'] = $view;

  $view = new view;
  $view->name = 'blog_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog_news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'blog_news';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More...';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?
$paths =  drupal_lookup_path(\'alias\', $path ="node/".$row->nid); 
print $paths;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count_1']['id'] = 'comment_count_1';
  $handler->display->display_options['fields']['comment_count_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count_1']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count_1']['label'] = '';
  $handler->display->display_options['fields']['comment_count_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['alter']['path'] = 'node/[nid]#comments';
  $handler->display->display_options['fields']['comment_count_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['alt'] = 'Jump to the first comment of this posting.';
  $handler->display->display_options['fields']['comment_count_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['format_plural'] = 1;
  $handler->display->display_options['fields']['comment_count_1']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count_1']['format_plural_plural'] = '@count comments';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '<a title="Add a new comment to this page" href="comment/reply/[nid]#comment-form">Add a Comment</a>';
  $handler->display->display_options['fields']['view_node_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Add a comment';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['text'] = '<span class="more">[view_node]</span><span class="xyz-blog">[php_1]</span><span class="blog-count">[comment_count_1]</span><span class="add-comment-link-new">[view_node_1]</span>';
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?
$user=user_load($row->uid);
$username=$user->name;
$str = strtolower($username);
$link = str_replace(" ","-",$str);
print \'<a title="Read \'.$username.\'\\\'s blog entires." href=/blogs/\'.$link.\'>\'.$username.\'\\\'s blog</a>\';
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'blog-news';
  $translatables['blog_news'] = array(
    t('Master'),
    t('blog_news'),
    t('More...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Block'),
    t('more'),
    t('Page'),
    t('node/[nid]#comments'),
    t('Jump to the first comment of this posting.'),
    t('.'),
    t(','),
    t('[title]'),
    t('Read more'),
    t('<a title="Add a new comment to this page" href="comment/reply/[nid]#comment-form">Add a Comment</a>'),
    t('Add a comment'),
    t('<span class="more">[view_node]</span><span class="xyz-blog">[php_1]</span><span class="blog-count">[comment_count_1]</span><span class="add-comment-link-new">[view_node_1]</span>'),
  );
  $export['blog_news'] = $view;

  $view = new view;
  $view->name = 'call_to_action';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'call to action';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'call to action';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'READ CASE STUDY...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<h4><a href="/what/supportus">SUPPORT US...</a></h4>
';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<a >READ CASE STUDY...</a>';
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=[nid]>READ CASE STUDY...</a>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'call_to_action' => 'call_to_action',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'LEARN MORE...';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field-view-node"><a href="/participate/introduction">LEARN MORE...</a></div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'call to action';
  $translatables['call_to_action'] = array(
    t('Master'),
    t('call to action'),
    t('READ CASE STUDY...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a >READ CASE STUDY...</a>'),
    t('<a href=[nid]>READ CASE STUDY...</a>'),
    t('All'),
    t('Block'),
    t('more'),
    t('LEARN MORE...'),
    t('<div class="views-field-view-node"><a href="/participate/introduction">LEARN MORE...</a></div>'),
  );
  $export['call_to_action'] = $view;

  $view = new view;
  $view->name = 'casestudy_new_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'casestudy-new ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'casestudy-new ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'crm_solution_slideshow' => 'crm_solution_slideshow',
    'auto_created_voc67560' => 0,
    'vocabulary_1' => 0,
    'vocabulary_2' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Monochrome Logo */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['text'] = '<span class="monochrome-image" title="[title] - Click for Case Study">[field_cs_image]</span>';
  $handler->display->display_options['fields']['field_cs_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['path'] = 'casestudy/node/[nid]';
  $handler->display->display_options['fields']['field_cs_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => 'case-study',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_cs_image']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random_1']['id'] = 'random_1';
  $handler->display->display_options['sorts']['random_1']['table'] = 'views';
  $handler->display->display_options['sorts']['random_1']['field'] = 'random';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  /* Filter criterion: Content: Front Page Visible (field_front_page_visible) */
  $handler->display->display_options['filters']['field_front_page_visible_value']['id'] = 'field_front_page_visible_value';
  $handler->display->display_options['filters']['field_front_page_visible_value']['table'] = 'field_data_field_front_page_visible';
  $handler->display->display_options['filters']['field_front_page_visible_value']['field'] = 'field_front_page_visible_value';
  $handler->display->display_options['filters']['field_front_page_visible_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: Content: Monochrome Logo (field_cs_image:fid) */
  $handler->display->display_options['filters']['field_cs_image_fid']['id'] = 'field_cs_image_fid';
  $handler->display->display_options['filters']['field_cs_image_fid']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['filters']['field_cs_image_fid']['field'] = 'field_cs_image_fid';
  $handler->display->display_options['filters']['field_cs_image_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'casestudy-inner';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href = /casestudy/node/[nid]><div class = "ccrm-casestudy">[title]</div></a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$url=$_SERVER[\'REQUEST_URI\'];
$term = explode(\'/\', $url); 
$terms = drupal_get_normal_path($term[2], $path_language = NULL);
$term = explode(\'taxonomy/term/\', $terms);
return $term[1];   

';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['block_description'] = 'case-study-inner';
  $translatables['casestudy_new_'] = array(
    t('Master'),
    t('casestudy-new '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('<span class="monochrome-image" title="[title] - Click for Case Study">[field_cs_image]</span>'),
    t('casestudy/node/[nid]'),
    t('All'),
    t('Block'),
    t('casestudy-inner'),
    t('<a href = /casestudy/node/[nid]><div class = "ccrm-casestudy">[title]</div></a>'),
    t('case-study-inner'),
  );
  $export['casestudy_new_'] = $view;

  $view = new view;
  $view->name = 'civi_case_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Civi Case Study';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CiviCRM Case Studies';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cs_image' => 'field_cs_image',
    'title' => 'title',
    'field_ccrm_cs_features' => 'field_ccrm_cs_features',
    'field_ccrm_cs_org_type' => 'field_ccrm_cs_org_type',
    'field_ccrm_cs_expertise' => 'field_ccrm_cs_expertise',
    'field_ccrm_cs_developmentteam' => 'field_ccrm_cs_developmentteam',
    'field_ccrm_cs_furtherinfo' => 'field_ccrm_cs_furtherinfo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cs_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccrm_cs_features' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccrm_cs_org_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccrm_cs_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccrm_cs_developmentteam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccrm_cs_furtherinfo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: For more on the success of this organization, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['id'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['table'] = 'field_data_field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['label'] = 'Website';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field_api_classes'] = 0;
  /* Field: Content: Monochrome Logo */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => 'case-study',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_cs_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_ccrm_cs_furtherinfo]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Features Deployed: */
  $handler->display->display_options['fields']['field_ccrm_cs_features']['id'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['table'] = 'field_data_field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['label'] = 'Features Deployed';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field_api_classes'] = 0;
  /* Field: Content: Kind of Organization: */
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['id'] = 'field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['table'] = 'field_data_field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['field'] = 'field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['text'] = '<a href="/civicase/[field_ccrm_cs_org_type]">[field_ccrm_cs_org_type]</a>';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['field_api_classes'] = 0;
  /* Field: Content: What issues does the organization focus on (check all that apply): */
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['id'] = 'field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['table'] = 'field_data_field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['field'] = 'field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['label'] = 'Expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['field_api_classes'] = 0;
  /* Field: Content: For more information on the development team, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['id'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['table'] = 'field_data_field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['label'] = 'Development Team';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field_api_classes'] = 0;
  /* Field: Content: Headline: */
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['id'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['table'] = 'field_data_field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['label'] = 'Headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['text'] = '[field_ccrm_cs_headline]<br>
<a href="/casestudy/node/[nid]">read more</a>';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Kind of Organization: (field_ccrm_cs_org_type) */
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['id'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['table'] = 'field_data_field_ccrm_cs_org_type';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['field'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  /* Filter criterion: Content: Kind of Organization: (field_ccrm_cs_org_type) */
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['id'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['table'] = 'field_data_field_ccrm_cs_org_type';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['field'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['expose']['operator_id'] = 'field_ccrm_cs_org_type_value_op';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['expose']['label'] = 'Organization Type:';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['expose']['operator'] = 'field_ccrm_cs_org_type_value_op';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['expose']['identifier'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['filters']['field_ccrm_cs_org_type_value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Features Deployed: (field_ccrm_cs_features) */
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['id'] = 'field_ccrm_cs_features_value';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['table'] = 'field_data_field_ccrm_cs_features';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['field'] = 'field_ccrm_cs_features_value';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['expose']['operator_id'] = 'field_ccrm_cs_features_value_op';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['expose']['label'] = 'Feature:';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['expose']['operator'] = 'field_ccrm_cs_features_value_op';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['expose']['identifier'] = 'field_ccrm_cs_features_value';
  $handler->display->display_options['filters']['field_ccrm_cs_features_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Monochrome Logo */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => 'case-study',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_cs_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Features Deployed: */
  $handler->display->display_options['fields']['field_ccrm_cs_features']['id'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['table'] = 'field_data_field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['label'] = 'Features Deployed';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field_api_classes'] = 0;
  /* Field: Content: Kind of Organization: */
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['id'] = 'field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['table'] = 'field_data_field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['field'] = 'field_ccrm_cs_org_type';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['label'] = 'Kind of Organization';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['text'] = '<a href="/civicase/[field_ccrm_cs_org_type]">[field_ccrm_cs_org_type]</a>';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_org_type']['field_api_classes'] = 0;
  /* Field: Content: What issues does the organization focus on (check all that apply): */
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['id'] = 'field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['table'] = 'field_data_field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['field'] = 'field_ccrm_cs_expertise';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['label'] = 'What issues does the organization focus on (check all that apply)';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_expertise']['field_api_classes'] = 0;
  /* Field: Content: For more information on the development team, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['id'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['table'] = 'field_data_field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['label'] = 'For more information on the development team, visit (enter URL)';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field_api_classes'] = 0;
  /* Field: Content: For more on the success of this organization, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['id'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['table'] = 'field_data_field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['label'] = 'For more on the success of this organization, visit (enter URL)';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'what/casestudies';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
global $user;
// if visitor is not logged in
if ($user->uid) {
echo \'<div class="proflist_link"><a href="/node/add/ccrm-case-study">Add a Case Study</a></div>\';
}
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Monochrome Logo */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => 'case-study',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_cs_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Headline: */
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['id'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['table'] = 'field_data_field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['label'] = 'CiviCRM Case Study';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['text'] = '<a href="/casestudy/node/[nid]">[field_ccrm_cs_headline]</a>';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field_api_classes'] = 0;
  /* Field: Content: For more information on the development team, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['id'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['table'] = 'field_data_field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['label'] = 'Developer';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['path'] = '[field_ccrm_cs_developmentteam]';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['block_description'] = 'civi-case-study';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Kind of Organization: (field_ccrm_cs_org_type) */
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['id'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['table'] = 'field_data_field_ccrm_cs_org_type';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['field'] = 'field_ccrm_cs_org_type_value';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_ccrm_cs_org_type_value']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'civicase';

  /* Display: CiviCRM Case Studies detail */
  $handler = $view->new_display('page', 'CiviCRM Case Studies detail', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[title]';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Headline: */
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['id'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['table'] = 'field_data_field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field'] = 'field_ccrm_cs_headline';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['label'] = '';
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_headline']['field_api_classes'] = 0;
  /* Field: Content: Project images: */
  $handler->display->display_options['fields']['field_ccrm_cs_images']['id'] = 'field_ccrm_cs_images';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['table'] = 'field_data_field_ccrm_cs_images';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['field'] = 'field_ccrm_cs_images';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['label'] = '';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['settings'] = array(
    'slideshow_image_style' => 'secondary-page-slideshow',
    'slideshow_link' => '',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_pause' => 0,
    'slideshow_pager' => 'number',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_ccrm_cs_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_images']['field_api_classes'] = 0;
  /* Field: Content: Organization Location */
  $handler->display->display_options['fields']['field_ccrm_cs_location']['id'] = 'field_ccrm_cs_location';
  $handler->display->display_options['fields']['field_ccrm_cs_location']['table'] = 'field_data_field_ccrm_cs_location';
  $handler->display->display_options['fields']['field_ccrm_cs_location']['field'] = 'field_ccrm_cs_location';
  $handler->display->display_options['fields']['field_ccrm_cs_location']['label'] = '';
  $handler->display->display_options['fields']['field_ccrm_cs_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_location']['field_api_classes'] = 0;
  /* Field: Content: Features Deployed: */
  $handler->display->display_options['fields']['field_ccrm_cs_features']['id'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['table'] = 'field_data_field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field'] = 'field_ccrm_cs_features';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['label'] = '';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_features']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_ccrm_cs_features']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
<tr>
<td valign="top" class="case-detail"><div class="case-title">[title]</div>
<div class="case-location">[field_ccrm_cs_location]</div>
<div class="feature-dep">Feature Deployed:</div>[field_ccrm_cs_features]
</td>
</tr>
</table>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: What was the initial promise of this project? */
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['id'] = 'field_ccrm_cs_promise';
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['table'] = 'field_data_field_ccrm_cs_promise';
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['field'] = 'field_ccrm_cs_promise';
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['label'] = 'The Promise';
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_promise']['field_api_classes'] = 0;
  /* Field: Content: What was the biggest challenge facing this project? */
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['id'] = 'field_ccrm_cs_challenge';
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['table'] = 'field_data_field_ccrm_cs_challenge';
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['field'] = 'field_ccrm_cs_challenge';
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['label'] = 'The Challenge';
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_challenge']['field_api_classes'] = 0;
  /* Field: Content: Why was civiCRM chosen as the solution? Were other CRMs evaluated? */
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['id'] = 'field_ccrm_cs_solution';
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['table'] = 'field_data_field_ccrm_cs_solution';
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['field'] = 'field_ccrm_cs_solution';
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['label'] = 'The CiviCRM Solution';
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_solution']['field_api_classes'] = 0;
  /* Field: Content: For more on the success of this organization, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['id'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['table'] = 'field_data_field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field'] = 'field_ccrm_cs_furtherinfo';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['label'] = 'More on the Success of this Organization';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['path'] = '[field_ccrm_cs_furtherinfo]';
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_furtherinfo']['field_api_classes'] = 0;
  /* Field: Content: For more information on the development team, visit (enter URL): */
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['id'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['table'] = 'field_data_field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field'] = 'field_ccrm_cs_developmentteam';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['label'] = 'The Team';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['path'] = '[field_ccrm_cs_developmentteam]';
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_developmentteam']['field_api_classes'] = 0;
  /* Field: Content: What site functionality was key to the project? */
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['id'] = 'field_ccrm_cs_functionality';
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['table'] = 'field_data_field_ccrm_cs_functionality';
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['field'] = 'field_ccrm_cs_functionality';
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['label'] = 'Key Functionality';
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_functionality']['field_api_classes'] = 0;
  /* Field: Content: What modifications and modules were deployed? */
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['id'] = 'field_ccrm_cs_modifications';
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['table'] = 'field_data_field_ccrm_cs_modifications';
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['field'] = 'field_ccrm_cs_modifications';
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['label'] = 'Modifications and Modules';
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_modifications']['field_api_classes'] = 0;
  /* Field: Content: What were the server & hosting requirements? */
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['id'] = 'field_ccrm_cs_hosting';
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['table'] = 'field_data_field_ccrm_cs_hosting';
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['field'] = 'field_ccrm_cs_hosting';
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['label'] = 'Server & Hosting Requirements';
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_hosting']['field_api_classes'] = 0;
  /* Field: Content: What did the CiviCRM community gain from this project? What features were incorporated back into CiviCRM (if applicable): */
  $handler->display->display_options['fields']['field_ccrm_cs_community']['id'] = 'field_ccrm_cs_community';
  $handler->display->display_options['fields']['field_ccrm_cs_community']['table'] = 'field_data_field_ccrm_cs_community';
  $handler->display->display_options['fields']['field_ccrm_cs_community']['field'] = 'field_ccrm_cs_community';
  $handler->display->display_options['fields']['field_ccrm_cs_community']['label'] = 'Benefits To The CiviCRM Community';
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ccrm_cs_community']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['path'] = 'casestudy/node/%';

  /* Display: Related case study for inner page */
  $handler = $view->new_display('block', 'Related case study for inner page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'crm_solution_slideshow' => 'crm_solution_slideshow',
    'auto_created_voc67560' => 0,
    'vocabulary_1' => 0,
    'vocabulary_2' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href = /casestudy/node/[nid_1]><div class = "ccrm-casestudy">[title]</div></a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$nid = arg(2);
$node = node_load($nid);
if ($node != NULL) {
    $field = $node->field_related_casestudy;
    $terms_en = $field[\'und\'];
    if( !empty( $terms_en ) ){
        foreach ($terms_en as $term) {
            $terms[] = $term[\'tid\'];
        }
        return implode(\'+\', $terms);
    }
    else 
        return null;
 }';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccrm_case_study' => 'ccrm_case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$nid = arg(2);
$node = node_load($nid);
if ($node != NULL) {
    $field = $node->field_related_casestudy;
    $terms_en = $field[\'und\'];
    if( empty( $terms_en ) ){
        return true;
        }
 }
if($row->nid == arg(2)){
return true;
}';
  $translatables['civi_case_study'] = array(
    t('Master'),
    t('CiviCRM Case Studies'),
    t('more'),
    t('Apply'),
    t('Clear'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No Results Found'),
    t('Website'),
    t('Organization'),
    t('<a href="[field_ccrm_cs_furtherinfo]" target="_blank">[title]</a>'),
    t('Features Deployed'),
    t('Organization Type'),
    t('<a href="/civicase/[field_ccrm_cs_org_type]">[field_ccrm_cs_org_type]</a>'),
    t('Expertise'),
    t('Development Team'),
    t('Headline'),
    t('[field_ccrm_cs_headline]<br>
<a href="/casestudy/node/[nid]">read more</a>'),
    t('All'),
    t('Organization Type:'),
    t('Feature:'),
    t('Page'),
    t('Title'),
    t('Kind of Organization'),
    t('What issues does the organization focus on (check all that apply)'),
    t('For more information on the development team, visit (enter URL)'),
    t('For more on the success of this organization, visit (enter URL)'),
    t('Block'),
    t('CiviCRM Case Study'),
    t('<a href="/casestudy/node/[nid]">[field_ccrm_cs_headline]</a>'),
    t('Developer'),
    t('[field_ccrm_cs_developmentteam]'),
    t('civi-case-study'),
    t('CiviCRM Case Studies detail'),
    t('[title]'),
    t('<table>
<tr>
<td valign="top" class="case-detail"><div class="case-title">[title]</div>
<div class="case-location">[field_ccrm_cs_location]</div>
<div class="feature-dep">Feature Deployed:</div>[field_ccrm_cs_features]
</td>
</tr>
</table>'),
    t('The Promise'),
    t('The Challenge'),
    t('The CiviCRM Solution'),
    t('More on the Success of this Organization'),
    t('[field_ccrm_cs_furtherinfo]'),
    t('The Team'),
    t('Key Functionality'),
    t('Modifications and Modules'),
    t('Server & Hosting Requirements'),
    t('Benefits To The CiviCRM Community'),
    t('Related case study for inner page'),
    t('term'),
    t('<a href = /casestudy/node/[nid_1]><div class = "ccrm-casestudy">[title]</div></a>'),
  );
  $export['civi_case_study'] = $view;

  $view = new view;
  $view->name = 'civicrm_blog_description';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'CiviCRM Blog Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'CiviCRM Blog Description';
  $translatables['civicrm_blog_description'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('CiviCRM Blog Description'),
  );
  $export['civicrm_blog_description'] = $view;

  $view = new view;
  $view->name = 'complete_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Find expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Experts';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'nothing',
    'field_8' => 'field_8',
    'field_10' => 'field_10',
    'field_1' => 'field_1',
    'field_7' => 'field_7',
    'field_3' => 'field_3',
    'field_5' => 'field_5',
    'field_4' => 'field_4',
    'field_11' => 'field_11',
    'field_12' => 'field_12',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_11' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_12' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. The active contributors on this page support the project by providing engineering and training resources, assisting other community members on the forums and IRC, and organizing / participating in community events. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of additional service providers. Please make appropriate inquiries before retaining services.
Add your organization to the professional services listings.
</p>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'Additional Service Providers...';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_8']['id'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['table'] = 'field_data_field_8';
  $handler->display->display_options['fields']['field_8']['field'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['label'] = '';
  $handler->display->display_options['fields']['field_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_8']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_8']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_8']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_8']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_10']['id'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['table'] = 'field_data_field_10';
  $handler->display->display_options['fields']['field_10']['field'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['label'] = '';
  $handler->display->display_options['fields']['field_10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_10']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_10']['field_api_classes'] = 0;
  /* Field: Content: Company Website */
  $handler->display->display_options['fields']['field_1']['id'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['table'] = 'field_data_field_1';
  $handler->display->display_options['fields']['field_1']['field'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['label'] = '';
  $handler->display->display_options['fields']['field_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_1']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_7']['id'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['table'] = 'field_data_field_7';
  $handler->display->display_options['fields']['field_7']['field'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['label'] = '';
  $handler->display->display_options['fields']['field_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_7']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_7']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_7']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_3']['id'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['table'] = 'field_data_field_3';
  $handler->display->display_options['fields']['field_3']['field'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['label'] = '';
  $handler->display->display_options['fields']['field_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_3']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_5']['id'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['table'] = 'field_data_field_5';
  $handler->display->display_options['fields']['field_5']['field'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['label'] = '';
  $handler->display->display_options['fields']['field_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_5']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_5']['field_api_classes'] = 0;
  /* Field: Content: State / Province */
  $handler->display->display_options['fields']['field_4']['id'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['table'] = 'field_data_field_4';
  $handler->display->display_options['fields']['field_4']['field'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['label'] = '';
  $handler->display->display_options['fields']['field_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_4']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_4']['field_api_classes'] = 0;
  /* Field: Content: Company Overview */
  $handler->display->display_options['fields']['field_11']['id'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['table'] = 'field_data_field_11';
  $handler->display->display_options['fields']['field_11']['field'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['label'] = '';
  $handler->display->display_options['fields']['field_11']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_11']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_11']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_11']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_11']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_11']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_11']['field_api_classes'] = 0;
  /* Field: Content: CiviCRM Services */
  $handler->display->display_options['fields']['field_12']['id'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['table'] = 'field_data_field_12';
  $handler->display->display_options['fields']['field_12']['field'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['label'] = '';
  $handler->display->display_options['fields']['field_12']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_12']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_12']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_12']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_12']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_12']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_12']['field_api_classes'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'professionals' => 'professionals',
  );

  /* Display: find an active expert in civicrm */
  $handler = $view->new_display('block', 'find an active expert in civicrm', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
echo \'<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. The active contributors on this page support the project by providing engineering and training resources, assisting other community members on the forums and IRC, and organizing / participating in community events. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of<a href="/whats/moreexpert"> additional service providers.</a> Please make appropriate inquiries before retaining services.
Add your organization to the professional services listings.
</p>\';
global $user;
// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}
?>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="proflist_link">
	<a href="/whats/moreexpert">Additional Service Providers...</a></div>
<?php
global $user;

// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}

?>
';
  $handler->display->display_options['footer']['area']['format'] = '2';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_8']['id'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['table'] = 'field_data_field_8';
  $handler->display->display_options['fields']['field_8']['field'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['label'] = '';
  $handler->display->display_options['fields']['field_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_8']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_8']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_8']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_8']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_10']['id'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['table'] = 'field_data_field_10';
  $handler->display->display_options['fields']['field_10']['field'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['label'] = '';
  $handler->display->display_options['fields']['field_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_10']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_10']['field_api_classes'] = 0;
  /* Field: Content: Company Website */
  $handler->display->display_options['fields']['field_1']['id'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['table'] = 'field_data_field_1';
  $handler->display->display_options['fields']['field_1']['field'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['label'] = '';
  $handler->display->display_options['fields']['field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_1']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_7']['id'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['table'] = 'field_data_field_7';
  $handler->display->display_options['fields']['field_7']['field'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['label'] = '';
  $handler->display->display_options['fields']['field_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_7']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_7']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_7']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_3']['id'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['table'] = 'field_data_field_3';
  $handler->display->display_options['fields']['field_3']['field'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['label'] = '';
  $handler->display->display_options['fields']['field_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_3']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_5']['id'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['table'] = 'field_data_field_5';
  $handler->display->display_options['fields']['field_5']['field'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['label'] = '';
  $handler->display->display_options['fields']['field_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_5']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_5']['field_api_classes'] = 0;
  /* Field: Content: State / Province */
  $handler->display->display_options['fields']['field_4']['id'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['table'] = 'field_data_field_4';
  $handler->display->display_options['fields']['field_4']['field'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['label'] = '';
  $handler->display->display_options['fields']['field_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_4']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_4']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class = "pro-title">[title]</div>
<div class = "cont-person">[field_8]</div>
<div class = "pro-email">[field_10]</div>
<div class = "web-url">[field_1]</div>
<div class = "phone">[field_7]</div>
<div class = "city">[field_3]</div>
<div class = "state">[field_4]</div>
<div class = "country">[field_5]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Company Overview */
  $handler->display->display_options['fields']['field_11']['id'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['table'] = 'field_data_field_11';
  $handler->display->display_options['fields']['field_11']['field'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_11']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_11']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_11']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_11']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_11']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_11']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_11']['field_api_classes'] = 0;
  /* Field: Content: CiviCRM Services */
  $handler->display->display_options['fields']['field_12']['id'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['table'] = 'field_data_field_12';
  $handler->display->display_options['fields']['field_12']['field'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_12']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_12']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_12']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_12']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_12']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_12']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_12']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'professionals' => 'professionals',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Company Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Internal Section (field_16) */
  $handler->display->display_options['filters']['field_16_value']['id'] = 'field_16_value';
  $handler->display->display_options['filters']['field_16_value']['table'] = 'field_data_field_16';
  $handler->display->display_options['filters']['field_16_value']['field'] = 'field_16_value';
  $handler->display->display_options['filters']['field_16_value']['value'] = array(
    'Recommended' => 'Recommended',
  );

  /* Display: More export */
  $handler = $view->new_display('page', 'More export', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'nothing',
    'field_8' => 'field_8',
    'field_10' => 'field_10',
    'field_1' => 'field_1',
    'field_7' => 'field_7',
    'field_3' => 'field_3',
    'field_5' => 'field_5',
    'field_4' => 'field_4',
    'nothing' => 'title',
    'field_11' => 'field_11',
    'field_12' => 'field_12',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_11' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_12' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of <a href = "/what/experts">providers who are active contributors.</a> Please make appropriate inquiries before retaining services. 
</p>
<?php
global $user;
// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}
?>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="proflist_link">
	<a href="/what/experts">Service Providers - Active Contributors...</a></div>
<?php
global $user;

// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}

?>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Result Found !';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_8']['id'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['table'] = 'field_data_field_8';
  $handler->display->display_options['fields']['field_8']['field'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['label'] = '';
  $handler->display->display_options['fields']['field_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_8']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_8']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_8']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_8']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_10']['id'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['table'] = 'field_data_field_10';
  $handler->display->display_options['fields']['field_10']['field'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['label'] = '';
  $handler->display->display_options['fields']['field_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_10']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_10']['field_api_classes'] = 0;
  /* Field: Content: Company Website */
  $handler->display->display_options['fields']['field_1']['id'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['table'] = 'field_data_field_1';
  $handler->display->display_options['fields']['field_1']['field'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['label'] = '';
  $handler->display->display_options['fields']['field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_1']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_7']['id'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['table'] = 'field_data_field_7';
  $handler->display->display_options['fields']['field_7']['field'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['label'] = '';
  $handler->display->display_options['fields']['field_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_7']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_7']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_7']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_3']['id'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['table'] = 'field_data_field_3';
  $handler->display->display_options['fields']['field_3']['field'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['label'] = '';
  $handler->display->display_options['fields']['field_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_3']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_5']['id'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['table'] = 'field_data_field_5';
  $handler->display->display_options['fields']['field_5']['field'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['label'] = '';
  $handler->display->display_options['fields']['field_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_5']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_5']['field_api_classes'] = 0;
  /* Field: Content: State / Province */
  $handler->display->display_options['fields']['field_4']['id'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['table'] = 'field_data_field_4';
  $handler->display->display_options['fields']['field_4']['field'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['label'] = '';
  $handler->display->display_options['fields']['field_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_4']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_4']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class = "pro-title">[title]</div>
<div class = "cont-person">[field_8]</div>
<div class = "pro-email">[field_10]</div>
<div class = "web-url">[field_1]</div>
<div class = "phone">[field_7]</div>
<div class = "city">[field_3]</div>
<div class = "state">[field_4]</div>
<div class = "country">[field_5]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Company Overview */
  $handler->display->display_options['fields']['field_11']['id'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['table'] = 'field_data_field_11';
  $handler->display->display_options['fields']['field_11']['field'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_11']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_11']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_11']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_11']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_11']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_11']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_11']['field_api_classes'] = 0;
  /* Field: Content: CiviCRM Services */
  $handler->display->display_options['fields']['field_12']['id'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['table'] = 'field_data_field_12';
  $handler->display->display_options['fields']['field_12']['field'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_12']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_12']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_12']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_12']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_12']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_12']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_12']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'professionals' => 'professionals',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Internal Section (field_16) */
  $handler->display->display_options['filters']['field_16_value']['id'] = 'field_16_value';
  $handler->display->display_options['filters']['field_16_value']['table'] = 'field_data_field_16';
  $handler->display->display_options['filters']['field_16_value']['field'] = 'field_16_value';
  $handler->display->display_options['filters']['field_16_value']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_16_value']['value'] = array(
    'Recommended' => 'Recommended',
  );
  $handler->display->display_options['path'] = 'whats/moreexpert';

  /* Display: complete list of expert */
  $handler = $view->new_display('page', 'complete list of expert', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'nothing',
    'field_8' => 'field_8',
    'field_10' => 'field_10',
    'field_1' => 'field_1',
    'field_7' => 'field_7',
    'field_3' => 'field_3',
    'field_5' => 'field_5',
    'field_4' => 'field_4',
    'nothing' => 'nothing',
    'field_11' => 'field_11',
    'field_12' => 'field_12',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_11' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_12' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of <a href = "/what/experts">providers who are active contributors.</a> Please make appropriate inquiries before retaining services. 
</p>
<?php
global $user;
// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}
?>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="proflist_link">
	<a href="/what/experts">Service Providers - Active Contributors...</a></div>
<?php
global $user;

// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}

?>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Result Found !';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_8']['id'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['table'] = 'field_data_field_8';
  $handler->display->display_options['fields']['field_8']['field'] = 'field_8';
  $handler->display->display_options['fields']['field_8']['label'] = '';
  $handler->display->display_options['fields']['field_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_8']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_8']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_8']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_8']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_10']['id'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['table'] = 'field_data_field_10';
  $handler->display->display_options['fields']['field_10']['field'] = 'field_10';
  $handler->display->display_options['fields']['field_10']['label'] = '';
  $handler->display->display_options['fields']['field_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_10']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_10']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_10']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_10']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_10']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_10']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_10']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_10']['field_api_classes'] = 0;
  /* Field: Content: Company Website */
  $handler->display->display_options['fields']['field_1']['id'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['table'] = 'field_data_field_1';
  $handler->display->display_options['fields']['field_1']['field'] = 'field_1';
  $handler->display->display_options['fields']['field_1']['label'] = '';
  $handler->display->display_options['fields']['field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_1']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_7']['id'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['table'] = 'field_data_field_7';
  $handler->display->display_options['fields']['field_7']['field'] = 'field_7';
  $handler->display->display_options['fields']['field_7']['label'] = '';
  $handler->display->display_options['fields']['field_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_7']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_7']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_7']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_3']['id'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['table'] = 'field_data_field_3';
  $handler->display->display_options['fields']['field_3']['field'] = 'field_3';
  $handler->display->display_options['fields']['field_3']['label'] = '';
  $handler->display->display_options['fields']['field_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_3']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_5']['id'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['table'] = 'field_data_field_5';
  $handler->display->display_options['fields']['field_5']['field'] = 'field_5';
  $handler->display->display_options['fields']['field_5']['label'] = '';
  $handler->display->display_options['fields']['field_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_5']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_5']['field_api_classes'] = 0;
  /* Field: Content: State / Province */
  $handler->display->display_options['fields']['field_4']['id'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['table'] = 'field_data_field_4';
  $handler->display->display_options['fields']['field_4']['field'] = 'field_4';
  $handler->display->display_options['fields']['field_4']['label'] = '';
  $handler->display->display_options['fields']['field_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_4']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_4']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class = "pro-title">[title]</div>
<div class = "cont-person">[field_8]</div>
<div class = "pro-email">[field_10]</div>
<div class = "web-url">[field_1]</div>
<div class = "phone">[field_7]</div>
<div class = "city">[field_3]</div>
<div class = "state">[field_4]</div>
<div class = "country">[field_5]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Company Overview */
  $handler->display->display_options['fields']['field_11']['id'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['table'] = 'field_data_field_11';
  $handler->display->display_options['fields']['field_11']['field'] = 'field_11';
  $handler->display->display_options['fields']['field_11']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_11']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_11']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_11']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_11']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_11']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_11']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_11']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_11']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_11']['field_api_classes'] = 0;
  /* Field: Content: CiviCRM Services */
  $handler->display->display_options['fields']['field_12']['id'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['table'] = 'field_data_field_12';
  $handler->display->display_options['fields']['field_12']['field'] = 'field_12';
  $handler->display->display_options['fields']['field_12']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_12']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_12']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_12']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_12']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_12']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_12']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_12']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_12']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_12']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'professionals' => 'professionals',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'complete-expert';
  $translatables['complete_expert'] = array(
    t('Master'),
    t('Experts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. The active contributors on this page support the project by providing engineering and training resources, assisting other community members on the forums and IRC, and organizing / participating in community events. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of additional service providers. Please make appropriate inquiries before retaining services.
Add your organization to the professional services listings.
</p>'),
    t('Additional Service Providers...'),
    t('find an active expert in civicrm'),
    t('<?php
echo \'<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. The active contributors on this page support the project by providing engineering and training resources, assisting other community members on the forums and IRC, and organizing / participating in community events. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of<a href="/whats/moreexpert"> additional service providers.</a> Please make appropriate inquiries before retaining services.
Add your organization to the professional services listings.
</p>\';
global $user;
// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}
?>'),
    t('<div class="proflist_link">
	<a href="/whats/moreexpert">Additional Service Providers...</a></div>
<?php
global $user;

// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}

?>
'),
    t('Name'),
    t('<div class = "pro-title">[title]</div>
<div class = "cont-person">[field_8]</div>
<div class = "pro-email">[field_10]</div>
<div class = "web-url">[field_1]</div>
<div class = "phone">[field_7]</div>
<div class = "city">[field_3]</div>
<div class = "state">[field_4]</div>
<div class = "country">[field_5]</div>'),
    t('Company Overview'),
    t('CiviCRM Services'),
    t('Company Name'),
    t('More export'),
    t('<p>
If you need help installing, implementing and/or customizing CiviCRM...consider contacting one of the professional services organizations listed here. (The listings are sorted randomly and not in an order that would imply importance of one provider over others). You can also view a list of <a href = "/what/experts">providers who are active contributors.</a> Please make appropriate inquiries before retaining services. 
</p>
<?php
global $user;
// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}
?>'),
    t('<div class="proflist_link">
	<a href="/what/experts">Service Providers - Active Contributors...</a></div>
<?php
global $user;

// if visitor is not logged in
if (!$user->uid) {
  // do something if not logged in
echo \'<div class="proflist_link">If you want to add a professional services listing, please <a href="/user/login">login</a> first.</div>\';
} else {
  // do something else if logged in
echo \'<div class="proflist_link"><a href="/node/add/professionals">Add your organization</a> to the professional services listings.</div>\';
}

?>'),
    t('No Result Found !'),
    t('Search by name'),
    t('complete list of expert'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
  );
  $export['complete_expert'] = $view;

  $view = new view;
  $view->name = 'contribution_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contribution-page-slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'features slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'crm_solution_slideshow' => 'crm_solution_slideshow',
    'auto_created_voc67560' => 0,
    'vocabulary_1' => 0,
    'vocabulary_2' => 0,
  );
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'secondary-page-slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'secondary' => 'secondary',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'crm_solution_slideshow';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$url=$_SERVER[\'REQUEST_URI\'];
$term = explode(\'/\', $url); 
$terms = drupal_get_normal_path($term[2], $path_language = NULL);
$term = explode(\'taxonomy/term/\', $terms);
return $term[1];   

';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'features_slideshow' => 'features_slideshow',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $translatables['contribution_page_slideshow'] = array(
    t('Master'),
    t('features slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('All'),
    t('Block'),
  );
  $export['contribution_page_slideshow'] = $view;

  $view = new view;
  $view->name = 'crm_solution_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'crm_solution_slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'MORE...';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'crm_solution_slideshow' => 'crm_solution_slideshow',
    'blog' => 0,
    'gallery_collections' => 0,
    'tags' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'testyt';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$termname = arg(1);
$terms = drupal_get_normal_path($termname, $path_language = NULL);
$term = explode(\'taxonomy/term/\', $terms);
return $term[1];';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'features_slideshow' => 'features_slideshow',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = '!1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'to get term alise';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node = node_load($row->nid);
if ($node != NULL) {
    $field = $node->field_list_menu;
    $terms_en = $field[\'und\'];
    $path = drupal_lookup_path(\'alias\',"taxonomy/term/".$terms_en[0][tid]);
    print $path;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'secondary-page-slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]<a href=/features/[php] class="slide-read-more">MORE…</a>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'crm-solution-slideshow';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  $handler->display->display_options['path'] = 'feature/%';
  $translatables['crm_solution_slideshow'] = array(
    t('Master'),
    t('<none>'),
    t('MORE...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Custom text'),
    t('testyt'),
    t('Body'),
    t('Slide Image'),
    t('All'),
    t('Block'),
    t('more'),
    t('Nid'),
    t('to get term alise'),
    t('[body]<a href=/features/[php] class="slide-read-more">MORE…</a>'),
    t('crm-solution-slideshow'),
    t('Page'),
  );
  $export['crm_solution_slideshow'] = $view;

  $view = new view;
  $view->name = 'download_tab';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'download_tab';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Downloads';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'MORE DOWNLOADS...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nothing' => 'nothing',
    'body' => 'body',
    'field_release_notes' => 'field_release_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nothing' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_release_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Release Notes */
  $handler->display->display_options['fields']['field_release_notes']['id'] = 'field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['table'] = 'field_data_field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['field'] = 'field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['label'] = '';
  $handler->display->display_options['fields']['field_release_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_release_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_release_notes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_release_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_release_notes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_release_notes']['field_api_classes'] = 0;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'node_weight';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'download' => 'download',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['block_description'] = 'download_tab';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  $handler->display->display_options['path'] = 'go/download';
  $translatables['download_tab'] = array(
    t('Master'),
    t('Downloads'),
    t('MORE DOWNLOADS...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('MORE DOWNLOAD INFO...'),
    t('download_tab'),
    t('Page'),
    t('more'),
  );
  $export['download_tab'] = $view;

  $view = new view;
  $view->name = 'help_options';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'help_options';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Help Options';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'SEE ALL HELP OPTIONS...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_help_image' => 'field_help_image',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_help_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = 0;
  /* Field: Content: Help Icon */
  $handler->display->display_options['fields']['field_help_image']['id'] = 'field_help_image';
  $handler->display->display_options['fields']['field_help_image']['table'] = 'field_data_field_help_image';
  $handler->display->display_options['fields']['field_help_image']['field'] = 'field_help_image';
  $handler->display->display_options['fields']['field_help_image']['label'] = '';
  $handler->display->display_options['fields']['field_help_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_help_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_help_image']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_help_image']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_help_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_help_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_help_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_help_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_help_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_help_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_help_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_help_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_help_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_help_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_help_image']['settings'] = array(
    'image_style' => 'help_icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_help_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['body']['alter']['external'] = 1;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'help_options' => 'help_options',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'help_options';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'help';
  $translatables['help_options'] = array(
    t('Master'),
    t('Help Options'),
    t('SEE ALL HELP OPTIONS...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_link]'),
    t('Block'),
    t('more'),
    t('help_options'),
    t('Page'),
  );
  $export['help_options'] = $view;

  $view = new view;
  $view->name = 'homepage_alert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Alert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Alert';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a class="more-alert" href=[view_node]>more...</a>';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'more...';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="alert-text">[title] [view_node]</div>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage_alert' => 'homepage_alert',
  );
  /* Filter criterion: Content: Active? (field_alert) */
  $handler->display->display_options['filters']['field_alert_value']['id'] = 'field_alert_value';
  $handler->display->display_options['filters']['field_alert_value']['table'] = 'field_data_field_alert';
  $handler->display->display_options['filters']['field_alert_value']['field'] = 'field_alert_value';
  $handler->display->display_options['filters']['field_alert_value']['value'] = array(
    'Yes' => 'Yes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'homepage-alert';
  $translatables['homepage_alert'] = array(
    t('Master'),
    t('Homepage Alert'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a class="more-alert" href=[view_node]>more...</a>'),
    t('more...'),
    t('<div class="alert-text">[title] [view_node]</div>'),
    t('Block'),
    t('homepage-alert'),
  );
  $export['homepage_alert'] = $view;

  $view = new view;
  $view->name = 'secondary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'secondary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'secondary';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_sub_title']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'secondary' => 'secondary',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'secondary-page';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sub_title_tertiary']['id'] = 'field_sub_title_tertiary';
  $handler->display->display_options['fields']['field_sub_title_tertiary']['table'] = 'field_data_field_sub_title_tertiary';
  $handler->display->display_options['fields']['field_sub_title_tertiary']['field'] = 'field_sub_title_tertiary';
  $handler->display->display_options['fields']['field_sub_title_tertiary']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sub_title_tertiary']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tertiary' => 'tertiary',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['block_description'] = 'tertiary-sub title';
  $translatables['secondary'] = array(
    t('Master'),
    t('secondary'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('secondary-page'),
    t('tertiary-sub title'),
  );
  $export['secondary'] = $view;

  $view = new view;
  $view->name = 'secondary_page_body';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'secondary-page-body';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'secondary-page-body';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'secondary' => 'secondary',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tertiary' => 'tertiary',
  );
  $handler->display->display_options['block_description'] = 'tertiary-body-section';
  $translatables['secondary_page_body'] = array(
    t('Master'),
    t('secondary-page-body'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('tertiary-body-section'),
  );
  $export['secondary_page_body'] = $view;

  $view = new view;
  $view->name = 'sub_menu_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'sub-menu-block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'sub-menu-block';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$id = $row->tid;
$termalias = drupal_lookup_path(\'alias\',"taxonomy/term/".$id);
echo $termalias;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'feature/[php]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'crm_solution_slideshow' => 'crm_solution_slideshow',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 0;
  $handler->display->display_options['filters']['machine_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['expose']['reduce'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'sub_menu';
  $translatables['sub_menu_block'] = array(
    t('Master'),
    t('sub-menu-block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('feature/[php]'),
    t('Machine name'),
    t('Block'),
    t('sub_menu'),
  );
  $export['sub_menu_block'] = $view;

  return $export;
}
