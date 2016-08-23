<?php
/**
 * @file
 * vcr_compliance_requirements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vcr_compliance_requirements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_compliance_requirements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Compliance Requirements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Compliance Requirements';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_compliance_research_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_compliace_more_info' => 'field_compliace_more_info',
    'field_compliance_mechanism' => 'field_compliance_mechanism',
    'field_compliance_requirement' => 'field_compliance_requirement',
    'field_compliance_research_type' => 'field_compliance_research_type',
    'field_compliance_timing' => 'field_compliance_timing',
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
    'field_compliace_more_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_compliance_mechanism' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_compliance_requirement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_compliance_research_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_compliance_timing' => array(
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Use the checkboxes below to filter the research compliance requirements based on the type of research.';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Content: Research Type (field_compliance_research_type) */
  $handler->display->display_options['relationships']['field_compliance_research_type_tid']['id'] = 'field_compliance_research_type_tid';
  $handler->display->display_options['relationships']['field_compliance_research_type_tid']['table'] = 'field_data_field_compliance_research_type';
  $handler->display->display_options['relationships']['field_compliance_research_type_tid']['field'] = 'field_compliance_research_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Research Type */
  $handler->display->display_options['fields']['field_compliance_research_type']['id'] = 'field_compliance_research_type';
  $handler->display->display_options['fields']['field_compliance_research_type']['table'] = 'field_data_field_compliance_research_type';
  $handler->display->display_options['fields']['field_compliance_research_type']['field'] = 'field_compliance_research_type';
  $handler->display->display_options['fields']['field_compliance_research_type']['label'] = '';
  $handler->display->display_options['fields']['field_compliance_research_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_compliance_research_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_research_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_research_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_research_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_research_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_compliance_research_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_compliance_research_type']['field_api_classes'] = TRUE;
  /* Field: Content: Requirement */
  $handler->display->display_options['fields']['field_compliance_requirement']['id'] = 'field_compliance_requirement';
  $handler->display->display_options['fields']['field_compliance_requirement']['table'] = 'field_data_field_compliance_requirement';
  $handler->display->display_options['fields']['field_compliance_requirement']['field'] = 'field_compliance_requirement';
  $handler->display->display_options['fields']['field_compliance_requirement']['element_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_requirement']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_requirement']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_requirement']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_requirement']['field_api_classes'] = TRUE;
  /* Field: Content: Timing */
  $handler->display->display_options['fields']['field_compliance_timing']['id'] = 'field_compliance_timing';
  $handler->display->display_options['fields']['field_compliance_timing']['table'] = 'field_data_field_compliance_timing';
  $handler->display->display_options['fields']['field_compliance_timing']['field'] = 'field_compliance_timing';
  $handler->display->display_options['fields']['field_compliance_timing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_timing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_timing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_timing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_timing']['field_api_classes'] = TRUE;
  /* Field: Content: Mechanism */
  $handler->display->display_options['fields']['field_compliance_mechanism']['id'] = 'field_compliance_mechanism';
  $handler->display->display_options['fields']['field_compliance_mechanism']['table'] = 'field_data_field_compliance_mechanism';
  $handler->display->display_options['fields']['field_compliance_mechanism']['field'] = 'field_compliance_mechanism';
  $handler->display->display_options['fields']['field_compliance_mechanism']['element_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_mechanism']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_mechanism']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_compliance_mechanism']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_compliance_mechanism']['field_api_classes'] = TRUE;
  /* Field: Content: Contact/More Information */
  $handler->display->display_options['fields']['field_compliace_more_info']['id'] = 'field_compliace_more_info';
  $handler->display->display_options['fields']['field_compliace_more_info']['table'] = 'field_data_field_compliace_more_info';
  $handler->display->display_options['fields']['field_compliace_more_info']['field'] = 'field_compliace_more_info';
  $handler->display->display_options['fields']['field_compliace_more_info']['element_type'] = '0';
  $handler->display->display_options['fields']['field_compliace_more_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compliace_more_info']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_compliace_more_info']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_compliace_more_info']['field_api_classes'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_compliance_research_type_tid';
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
    'compliance_requirement' => 'compliance_requirement',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'compliance_research_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'compliance-requirements';
  $export['research_compliance_requirements'] = $view;

  return $export;
}
