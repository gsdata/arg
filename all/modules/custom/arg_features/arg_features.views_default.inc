<?php
/**
 * @file
 * arg_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function arg_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aplicatii_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'aplicatii';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aplicatii';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Sesiune (referinta_sesiune) */
  $handler->display->display_options['arguments']['referinta_sesiune_value']['id'] = 'referinta_sesiune_value';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['table'] = 'field_data_referinta_sesiune';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['field'] = 'referinta_sesiune_value';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['default_argument_options']['code'] = '$variables = arg(1);
return $variables;';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['referinta_sesiune_value']['limit'] = '0';
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
    'arg_aplicatie' => 'arg_aplicatie',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['aplicatii_view'] = $view;

  $view = new view();
  $view->name = 'burse_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'burse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Burse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Facultate (facultate) */
  $handler->display->display_options['arguments']['facultate_value']['id'] = 'facultate_value';
  $handler->display->display_options['arguments']['facultate_value']['table'] = 'field_data_facultate';
  $handler->display->display_options['arguments']['facultate_value']['field'] = 'facultate_value';
  $handler->display->display_options['arguments']['facultate_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['facultate_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['facultate_value']['default_argument_options']['code'] = '$variables = arg(1);
return $variables;';
  $handler->display->display_options['arguments']['facultate_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['facultate_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['facultate_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['facultate_value']['limit'] = '0';
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
    'arg_bursa' => 'arg_bursa',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['burse_view'] = $view;

  $view = new view();
  $view->name = 'facultati';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'facultati';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Universitate (universitate_ref) */
  $handler->display->display_options['arguments']['universitate_ref_value']['id'] = 'universitate_ref_value';
  $handler->display->display_options['arguments']['universitate_ref_value']['table'] = 'field_data_universitate_ref';
  $handler->display->display_options['arguments']['universitate_ref_value']['field'] = 'universitate_ref_value';
  $handler->display->display_options['arguments']['universitate_ref_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['universitate_ref_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['universitate_ref_value']['default_argument_options']['code'] = '$variables = arg(1);
return $variables;';
  $handler->display->display_options['arguments']['universitate_ref_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['universitate_ref_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['universitate_ref_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['universitate_ref_value']['limit'] = '0';
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
    'arg_facultate' => 'arg_facultate',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['facultati'] = $view;

  $view = new view();
  $view->name = 'sesiuni_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sesiuni';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sesiuni';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Bursa (bursa) */
  $handler->display->display_options['arguments']['bursa_value']['id'] = 'bursa_value';
  $handler->display->display_options['arguments']['bursa_value']['table'] = 'field_data_bursa';
  $handler->display->display_options['arguments']['bursa_value']['field'] = 'bursa_value';
  $handler->display->display_options['arguments']['bursa_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bursa_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['bursa_value']['default_argument_options']['code'] = '$variables = arg(1);
return $variables;';
  $handler->display->display_options['arguments']['bursa_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bursa_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bursa_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['bursa_value']['limit'] = '0';
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
    'arg_sesiune' => 'arg_sesiune',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['sesiuni_view'] = $view;

  return $export;
}
