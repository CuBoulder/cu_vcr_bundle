<?php
/**
 * @file
 * vcr_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vcr_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ocg_person_content_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OCG Person Content Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Filter by';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_person_title' => 'title',
    'field_unit' => 'field_unit',
    'field_person_email' => 'field_person_email',
    'field_person_phone' => 'field_person_email',
    'field_person_last_name' => 'field_person_last_name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_person_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Main unit (field_unit) */
  $handler->display->display_options['relationships']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['relationships']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['relationships']['field_unit_tid']['field'] = 'field_unit_tid';
  /* Relationship: Content: OCG Category (field_ocg_category) */
  $handler->display->display_options['relationships']['field_ocg_category_tid']['id'] = 'field_ocg_category_tid';
  $handler->display->display_options['relationships']['field_ocg_category_tid']['table'] = 'field_data_field_ocg_category';
  $handler->display->display_options['relationships']['field_ocg_category_tid']['field'] = 'field_ocg_category_tid';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['empty'] = ' ';
  $handler->display->display_options['fields']['field_person_email']['hide_alter_empty'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['label'] = '';
  $handler->display->display_options['fields']['field_person_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_phone']['alter']['text'] = '<span class="phone">[field_person_phone]</span>';
  $handler->display->display_options['fields']['field_person_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_person_last_name']['id'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['field'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Contact';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'full-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_title']['alter']['text'] = '<span class="job-title">[field_person_title]</span>
<span class=\'person-email\'>[field_person_email]</span>
<span class=\'person-phone\'>[field_person_phone]</span>';
  $handler->display->display_options['fields']['field_person_title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['delta_offset'] = '0';
  /* Field: Content: OCG Category */
  $handler->display->display_options['fields']['field_ocg_category']['id'] = 'field_ocg_category';
  $handler->display->display_options['fields']['field_ocg_category']['table'] = 'field_data_field_ocg_category';
  $handler->display->display_options['fields']['field_ocg_category']['field'] = 'field_ocg_category';
  $handler->display->display_options['fields']['field_ocg_category']['label'] = 'Award Lifecycle';
  $handler->display->display_options['fields']['field_ocg_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ocg_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ocg_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ocg_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ocg_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ocg_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ocg_category']['multi_type'] = 'ul';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_person_department']['id'] = 'field_person_department';
  $handler->display->display_options['fields']['field_person_department']['table'] = 'field_data_field_person_department';
  $handler->display->display_options['fields']['field_person_department']['field'] = 'field_person_department';
  $handler->display->display_options['fields']['field_person_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_department']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_person_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_department']['multi_type'] = 'ul';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Last Name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Main unit (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
  );
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'vcr_unit';
  $handler->display->display_options['filters']['field_unit_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: OCG Category (field_ocg_category) */
  $handler->display->display_options['filters']['field_ocg_category_tid']['id'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['table'] = 'field_data_field_ocg_category';
  $handler->display->display_options['filters']['field_ocg_category_tid']['field'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['operator_id'] = 'field_ocg_category_tid_op';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['operator'] = 'field_ocg_category_tid_op';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['identifier'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_ocg_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ocg_category_tid']['vocabulary'] = 'award_lifecycle';
  /* Filter criterion: Content: Department (field_person_department) */
  $handler->display->display_options['filters']['field_person_department_tid']['id'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['table'] = 'field_data_field_person_department';
  $handler->display->display_options['filters']['field_person_department_tid']['field'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_person_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['operator_id'] = 'field_person_department_tid_op';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['label'] = 'Search for Department';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['operator'] = 'field_person_department_tid_op';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['identifier'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_person_department_tid']['vocabulary'] = 'departments';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Main unit (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'vcr_unit';
  $handler->display->display_options['filters']['field_unit_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: OCG Category (field_ocg_category) */
  $handler->display->display_options['filters']['field_ocg_category_tid']['id'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['table'] = 'field_data_field_ocg_category';
  $handler->display->display_options['filters']['field_ocg_category_tid']['field'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['operator_id'] = 'field_ocg_category_tid_op';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['operator'] = 'field_ocg_category_tid_op';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['identifier'] = 'field_ocg_category_tid';
  $handler->display->display_options['filters']['field_ocg_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_ocg_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ocg_category_tid']['vocabulary'] = 'award_lifecycle';
  /* Filter criterion: Content: Department (field_person_department) */
  $handler->display->display_options['filters']['field_person_department_tid']['id'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['table'] = 'field_data_field_person_department';
  $handler->display->display_options['filters']['field_person_department_tid']['field'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['value'] = '';
  $handler->display->display_options['filters']['field_person_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['operator_id'] = 'field_person_department_tid_op';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['label'] = 'Search for Department';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['operator'] = 'field_person_department_tid_op';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['identifier'] = 'field_person_department_tid';
  $handler->display->display_options['filters']['field_person_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_person_department_tid']['vocabulary'] = 'departments';
  $handler->display->display_options['path'] = 'ocg/about-us/contact-us';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact Us';
  $handler->display->display_options['menu']['description'] = 'OCG Contact Page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'people/department/%';
  $export['ocg_person_content_type'] = $view;

  $view = new view();
  $view->name = 'person_content_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person Content Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Filter by';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_person_title' => 'title',
    'field_unit' => 'field_unit',
    'field_person_email' => 'field_person_email',
    'field_person_phone' => 'field_person_email',
    'field_person_last_name' => 'field_person_last_name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_person_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_person_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'General Information: 2055 Regent Drive, Boulder, Colorado 80309·0026. 303·492-7401';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Content: Main unit (field_unit) */
  $handler->display->display_options['relationships']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['relationships']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['relationships']['field_unit_tid']['field'] = 'field_unit_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'full-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_title']['alter']['text'] = '<span class="job-title">[field_person_title]</span>';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['delta_offset'] = '0';
  /* Field: Content: Main unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unit']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['empty'] = ' ';
  $handler->display->display_options['fields']['field_person_email']['hide_alter_empty'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_phone']['alter']['text'] = '<span class="phone">[field_person_phone]</span>';
  $handler->display->display_options['fields']['field_person_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_person_last_name']['id'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['field'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Last Name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Main unit (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['value'] = '';
  $handler->display->display_options['filters']['field_unit_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'vcr_unit';
  $handler->display->display_options['filters']['field_unit_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'contact-us';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact Us';
  $handler->display->display_options['menu']['description'] = 'VCR Contact Page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'secondary-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'people/department/%';
  $export['person_content_type'] = $view;

  return $export;
}
