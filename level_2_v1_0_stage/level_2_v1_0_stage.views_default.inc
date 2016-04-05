<?php
/**
 * @file
 * level_2_v1_0_stage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function level_2_v1_0_stage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_banner_scroll';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'image banner scroll';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'life_times' => 'life_times',
    'about_this_site' => 0,
    'our_technology' => 0,
    'in_his_own_words' => 0,
    'behind_the_scenes' => 0,
    'resouces' => 0,
    'level_two_nodequeue' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle">[title]</div><div class="sliderimg">[field_section_page_image]</div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => 'content',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary_options']['items_per_page'] = '25';
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
    'section_page' => 'section_page',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_outbound_link']['type'] = 'text_plain';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['empty'] = '[field_section_page_image]';
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary_options']['items_per_page'] = '25';
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
    'section_page' => 'section_page',
  );
  $handler->display->display_options['pane_category']['name'] = 'section pages';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_section_page_sections_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Sections (field_section_page_sections)',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'banner - addressee';

  /* Display: Section pages banner scroll */
  $handler = $view->new_display('block', 'Section pages banner scroll', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'about_this_site' => 'about_this_site',
    'our_technology' => 'our_technology',
    'in_his_own_words' => 'in_his_own_words',
    'behind_the_scenes' => 'behind_the_scenes',
    'life_times' => 'life_times',
    'resouces' => 'resouces',
    'level_two_nodequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary_options']['items_per_page'] = '25';
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - section pages';

  /* Display: About Site */
  $handler = $view->new_display('block', 'About Site', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'about_this_site' => 'about_this_site',
    'our_technology' => 0,
    'in_his_own_words' => 0,
    'behind_the_scenes' => 0,
    'life_times' => 0,
    'resouces' => 0,
    'level_two_nodequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - About this site';

  /* Display: In His Own Words */
  $handler = $view->new_display('block', 'In His Own Words', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'in_his_own_words' => 'in_his_own_words',
    'about_this_site' => 0,
    'our_technology' => 0,
    'behind_the_scenes' => 0,
    'life_times' => 0,
    'resouces' => 0,
    'level_two_nodequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - In His Own Words';

  /* Display: Spectral Imaging */
  $handler = $view->new_display('block', 'Spectral Imaging', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - Spectral Imaging';

  /* Display: Behind the Scenes */
  $handler = $view->new_display('block', 'Behind the Scenes', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'behind_the_scenes' => 'behind_the_scenes',
    'about_this_site' => 0,
    'our_technology' => 0,
    'in_his_own_words' => 0,
    'life_times' => 0,
    'resouces' => 0,
    'level_two_nodequeue' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - Behind the Scenes';

  /* Display: LIfe and Times */
  $handler = $view->new_display('block', 'LIfe and Times', 'block_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - Life and Times';

  /* Display: Resources */
  $handler = $view->new_display('block', 'Resources', 'block_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = '[path]';
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['alter']['text'] = '<em>[field_pre_title]</em><br>';
  $handler->display->display_options['fields']['field_pre_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_section_page_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Carousel image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_pre_title][title]</a></div><div class="sliderimg"><a href="[field_outbound_link]" target="[field_open_new_tab]">[field_carousel_image]</a></div>
</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => '',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['filters']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_section_page_sections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_page_sections_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['block_description'] = 'banner - Resources';
  $export['image_banner_scroll'] = $view;

  $view = new view();
  $view->name = 'l';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'level two images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'about_this_site' => 0,
    'in_his_words' => 0,
    'our_technology' => 0,
    'behind_the_scenes' => 0,
    'life_times' => 0,
    'resources' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '375x350',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="project [field_level_2_intro_node]">
 <a class="[field_level_2_photocredit]" href="node/[nid]">
     [field_section_page_image] 
     <div class="hover">
         <div class="info">
         <h3">[title]</h3>
         <p>[field_level_2_teaser]</p>
         <div class="lev2-photocredit">[field_level_2_photocredit]</div>
         </div>
    </div>
 </a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Level 2 Intro node (field_level_2_intro_node) */
  $handler->display->display_options['sorts']['field_level_2_intro_node_value']['id'] = 'field_level_2_intro_node_value';
  $handler->display->display_options['sorts']['field_level_2_intro_node_value']['table'] = 'field_data_field_level_2_intro_node';
  $handler->display->display_options['sorts']['field_level_2_intro_node_value']['field'] = 'field_level_2_intro_node_value';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'site_section' => 'site_section',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
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
    'section_page' => 'section_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Level 2 Intro node */
  $handler->display->display_options['fields']['field_level_2_intro_node']['id'] = 'field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['table'] = 'field_data_field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['field'] = 'field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_intro_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_intro_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Level 2 Teaser */
  $handler->display->display_options['fields']['field_level_2_teaser']['id'] = 'field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['table'] = 'field_data_field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['field'] = 'field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Photo credit */
  $handler->display->display_options['fields']['field_level_2_photocredit']['id'] = 'field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['table'] = 'field_data_field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['field'] = 'field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_photocredit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['alter']['text'] = '[field_level_2_photocredit]';
  $handler->display->display_options['fields']['field_level_2_photocredit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="project [field_level_2_intro_node]">
 <a href="/[name]/[title]" class="">
     [field_section_page_image] 
     <div class="hover">
         <div class="info">
         <h3">[title]</h3>
         <p>[field_level_2_teaser]</p>
         <div class="lev2-photocredit">[field_level_2_photocredit]</div>
         </div>
    </div>
 </a>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'site_section' => 'site_section',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'leveltwo';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Turn off hover */
  $handler->display->display_options['fields']['field_turn_off_hover']['id'] = 'field_turn_off_hover';
  $handler->display->display_options['fields']['field_turn_off_hover']['table'] = 'field_data_field_turn_off_hover';
  $handler->display->display_options['fields']['field_turn_off_hover']['field'] = 'field_turn_off_hover';
  $handler->display->display_options['fields']['field_turn_off_hover']['label'] = '';
  $handler->display->display_options['fields']['field_turn_off_hover']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_turn_off_hover']['element_label_colon'] = FALSE;
  /* Field: Content: Pre-title */
  $handler->display->display_options['fields']['field_pre_title']['id'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['table'] = 'field_data_field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['field'] = 'field_pre_title';
  $handler->display->display_options['fields']['field_pre_title']['label'] = '';
  $handler->display->display_options['fields']['field_pre_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pre_title']['empty_zero'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Open in new tab */
  $handler->display->display_options['fields']['field_open_new_tab']['id'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['table'] = 'field_data_field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['field'] = 'field_open_new_tab';
  $handler->display->display_options['fields']['field_open_new_tab']['label'] = '';
  $handler->display->display_options['fields']['field_open_new_tab']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_open_new_tab']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_new_tab']['empty'] = '_self';
  $handler->display->display_options['fields']['field_open_new_tab']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_open_new_tab']['empty_zero'] = TRUE;
  /* Field: Content: Outbound link */
  $handler->display->display_options['fields']['field_outbound_link']['id'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['table'] = 'field_data_field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['field'] = 'field_outbound_link';
  $handler->display->display_options['fields']['field_outbound_link']['label'] = '';
  $handler->display->display_options['fields']['field_outbound_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_outbound_link']['alter']['text'] = ' <a href="[field_outbound_link]" target="[field_open_new_tab]">';
  $handler->display->display_options['fields']['field_outbound_link']['alter']['target'] = ' [field_open_new_tab]';
  $handler->display->display_options['fields']['field_outbound_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outbound_link']['empty'] = ' <a href="[path]">';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Level 2 Intro node */
  $handler->display->display_options['fields']['field_level_2_intro_node']['id'] = 'field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['table'] = 'field_data_field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['field'] = 'field_level_2_intro_node';
  $handler->display->display_options['fields']['field_level_2_intro_node']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_intro_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_intro_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '4-3_390-293',
    'image_link' => '',
  );
  /* Field: Content: Level 2 Teaser */
  $handler->display->display_options['fields']['field_level_2_teaser']['id'] = 'field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['table'] = 'field_data_field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['field'] = 'field_level_2_teaser';
  $handler->display->display_options['fields']['field_level_2_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Photo credit */
  $handler->display->display_options['fields']['field_level_2_photocredit']['id'] = 'field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['table'] = 'field_data_field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['field'] = 'field_level_2_photocredit';
  $handler->display->display_options['fields']['field_level_2_photocredit']['label'] = '';
  $handler->display->display_options['fields']['field_level_2_photocredit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['alter']['text'] = '[field_level_2_photocredit]';
  $handler->display->display_options['fields']['field_level_2_photocredit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_level_2_photocredit']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="project [field_level_2_intro_node] ">
[field_outbound_link]
     [field_section_page_image] 
     <div class="hover [field_turn_off_hover]">
         <div class="info">
         <em>[field_pre_title]</em>
         <h3">[title]</h3>
         <p>[field_level_2_teaser]</p>
         <div class="lev2-photocredit">[field_level_2_photocredit]</div>
         </div>
    </div>
 </a>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'section block';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'page' => 'page',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title] </h3>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'page' => 'page',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'ctools_context_1' => 0,
    'ctools_context_2' => 0,
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '375x350',
    'image_link' => 'content',
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 1,
    ),
  );

  /* Display: Context 2 */
  $handler = $view->new_display('ctools_context', 'Context 2', 'ctools_context_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] 
[body]';
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
    'page' => 'page',
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_vocabulary.name',
      'context_optional' => 1,
    ),
  );
  $export['l'] = $view;

  $view = new view();
  $view->name = 'private_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Private Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Private Files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_private_files' => 'field_private_files',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_private_files' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Private Files */
  $handler->display->display_options['fields']['field_private_files']['id'] = 'field_private_files';
  $handler->display->display_options['fields']['field_private_files']['table'] = 'field_data_field_private_files';
  $handler->display->display_options['fields']['field_private_files']['field'] = 'field_private_files';
  $handler->display->display_options['fields']['field_private_files']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_private_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_private_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_private_files']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_private_files']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_private_files']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'file_uploads' => 'file_uploads',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'private-files';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['private_files'] = $view;

  $view = new view();
  $view->name = 'public_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Public Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Public Files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_public_files' => 'field_public_files',
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
    'field_public_files' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Public Files */
  $handler->display->display_options['fields']['field_public_files']['id'] = 'field_public_files';
  $handler->display->display_options['fields']['field_public_files']['table'] = 'field_data_field_public_files';
  $handler->display->display_options['fields']['field_public_files']['field'] = 'field_public_files';
  $handler->display->display_options['fields']['field_public_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_public_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_public_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_public_files']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_public_files']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_public_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_public_files']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'file_uploads' => 'file_uploads',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'public-files';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['public_files'] = $view;

  return $export;
}
