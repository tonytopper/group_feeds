<?php

/**
 * Implementation of hook_data_default().
 */
function group_feeds_data_default() {
  $export = array();

  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Organic Groups blog importer';
  $data_table->name = 'feeds_data_organic_groups_blog_importer';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'description' => array(
        'type' => 'text',
        'not null' => FALSE,
      ),
      'url' => array(
        'type' => 'text',
        'not null' => FALSE,
      ),
      'guid' => array(
        'type' => 'text',
        'not null' => FALSE,
      ),
      'parentog_groups' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'timestamp' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'name' => 'feeds_data_organic_groups_blog_importer',
    'indexes' => array(
      'feed_nid' => array(
        0 => 'feed_nid',
      ),
      'id' => array(
        0 => 'id',
      ),
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = '';
  $export['feeds_data_organic_groups_blog_importer'] = $data_table;

  return $export;
}
