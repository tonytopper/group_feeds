<?php

/**
 * Implementation of hook_views_default_views().
 */
function group_feeds_views_default_views() {
  $views = array();

  // Exported view: group_feeds_for_panels
  $view = new view;
  $view->name = 'group_feeds_for_panels';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'feeds_data_organic_groups_blog_importer';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'url' => array(
      'label' => 'Url',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 1,
      'id' => 'url',
      'table' => 'feeds_data_organic_groups_blog_importer',
      'field' => 'url',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => '[url]',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'feeds_data_organic_groups_blog_importer',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'feeds_data_organic_groups_blog_importer',
      'field' => 'timestamp',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'timestamp' => array(
      'order' => 'DESC',
      'id' => 'timestamp',
      'table' => 'feeds_data_organic_groups_blog_importer',
      'field' => 'timestamp',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('arguments', array(
    'parentog_groups' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'parentog_groups',
      'table' => 'feeds_data_organic_groups_blog_importer',
      'field' => 'parentog_groups',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        8 => 0,
        4 => 0,
        7 => 0,
        11 => 0,
        10 => 0,
        9 => 0,
        12 => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        40 => 0,
        34 => 0,
        37 => 0,
        39 => 0,
        36 => 0,
        1 => 0,
        35 => 0,
        41 => 0,
        43 => 0,
        45 => 0,
        48 => 0,
        47 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_image_size' => '_original',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'contact_point' => 0,
        'organization' => 0,
        'organizations_to_programs' => 0,
        'program' => 0,
        'scholarships' => 0,
        'school' => 0,
        'websites' => 0,
        'file' => 0,
        'story' => 0,
        'administrative_offices' => 0,
        'feed_fast' => 0,
        'off_campus_housing' => 0,
        'image' => 0,
        'open_positions' => 0,
        'recommended_academic_plan' => 0,
        'event' => 0,
        'attachment_links' => 0,
        'committees' => 0,
        'courses' => 0,
        'currents' => 0,
        'event_group' => 0,
        'feed' => 0,
        'field_of_study' => 0,
        'internship' => 0,
        'page' => 0,
        'people' => 0,
        'peoples_title' => 0,
        'place' => 0,
        'professors_bookshelf' => 0,
        'sign' => 0,
        'student_organizations' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        40 => 0,
        34 => 0,
        37 => 0,
        39 => 0,
        36 => 0,
        1 => 0,
        35 => 0,
        41 => 0,
        43 => 0,
        45 => 0,
        48 => 0,
        47 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
        'story' => 'story',
        250 => '250',
        960 => '960',
        '750h' => '750h',
        '1024x600' => '1024x600',
      ),
      'validate_argument_is_member' => '0',
      'validate_argument_group_node_type' => array(
        'program' => 0,
        'school' => 0,
        'administrative_offices' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 5);
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler = $view->new_display('panel_pane', 'Group Feeds for an Organic Group', 'panel_pane_1');
  $handler->override_option('pane_title', 'Group Feeds for an Organic Group');
  $handler->override_option('pane_description', 'View Display to show imported feeds from an Organic Group');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 'title_override',
    'exposed_form' => 0,
    'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array(
    'parentog_groups' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic Groups blog importer: Parentog groups',
    ),
  ));
  $handler->override_option('link_to_view', '1');
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
