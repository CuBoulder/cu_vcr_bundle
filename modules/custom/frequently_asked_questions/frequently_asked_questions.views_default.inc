<?php
/**
 * @file
 * frequently_asked_questions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frequently_asked_questions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faq_accordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ Accordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Questions and Answers (field_question_answer) */
  $handler->display->display_options['relationships']['field_question_answer_value']['id'] = 'field_question_answer_value';
  $handler->display->display_options['relationships']['field_question_answer_value']['table'] = 'field_data_field_question_answer';
  $handler->display->display_options['relationships']['field_question_answer_value']['field'] = 'field_question_answer_value';
  $handler->display->display_options['relationships']['field_question_answer_value']['delta'] = '-1';
  /* Field: Field collection item: Question */
  $handler->display->display_options['fields']['field_faq_question']['id'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['table'] = 'field_data_field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['field'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_question']['label'] = '';
  $handler->display->display_options['fields']['field_faq_question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_question']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_answer']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'frequently_asked_questions' => 'frequently_asked_questions',
  );

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'frequently_asked_questions',
  );
  $export['faq_accordion'] = $view;

  $view = new view();
  $view->name = 'faq_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Questions and Answers (field_question_answer) */
  $handler->display->display_options['relationships']['field_question_answer_value']['id'] = 'field_question_answer_value';
  $handler->display->display_options['relationships']['field_question_answer_value']['table'] = 'field_data_field_question_answer';
  $handler->display->display_options['relationships']['field_question_answer_value']['field'] = 'field_question_answer_value';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'faqs' => 'faqs',
    'single_page' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Question */
  $handler->display->display_options['fields']['field_faq_question']['id'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['table'] = 'field_data_field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['field'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_question']['label'] = '';
  $handler->display->display_options['fields']['field_faq_question']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_faq_question']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'frequently_asked_questions' => 'frequently_asked_questions',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'faq';
  $export['faq_page'] = $view;

  $view = new view();
  $view->name = 'faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Questions and Answers (field_question_answer) */
  $handler->display->display_options['relationships']['field_question_answer_value']['id'] = 'field_question_answer_value';
  $handler->display->display_options['relationships']['field_question_answer_value']['table'] = 'field_data_field_question_answer';
  $handler->display->display_options['relationships']['field_question_answer_value']['field'] = 'field_question_answer_value';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Field collection item: Question */
  $handler->display->display_options['fields']['field_faq_question']['id'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['table'] = 'field_data_field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['field'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_question']['label'] = '';
  $handler->display->display_options['fields']['field_faq_question']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_faq_question']['alter']['path'] = '#item-[counter]';
  $handler->display->display_options['fields']['field_faq_question']['element_type'] = '0';
  $handler->display->display_options['fields']['field_faq_question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_question']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Field collection item: Question */
  $handler->display->display_options['fields']['field_faq_question']['id'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['table'] = 'field_data_field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['field'] = 'field_faq_question';
  $handler->display->display_options['fields']['field_faq_question']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_question']['label'] = '';
  $handler->display->display_options['fields']['field_faq_question']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faq_question']['alter']['text'] = '<h2 id="[counter]">[field_faq_question]</h2>';
  $handler->display->display_options['fields']['field_faq_question']['alter']['path'] = '#item-[item_id] ';
  $handler->display->display_options['fields']['field_faq_question']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['relationship'] = 'field_question_answer_value';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'frequently_asked_questions',
  );
  $export['faqs'] = $view;

  return $export;
}
