<?php
/**
 * @file
 * map_digital_heritage.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function map_digital_heritage_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin|node|digital_heritage|form';
  $field_group->group_name = 'group_dublin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '2. Standard Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_description',
      1 => 'field_language',
      2 => 'field_source',
      3 => 'field_identifier',
      4 => 'field_format',
      5 => 'field_rights',
      6 => 'field_date',
      7 => 'field_relation',
      8 => 'field_creator',
      9 => 'field_contributor',
      10 => 'field_publisher',
      11 => 'field_subject',
      12 => 'field_coverage',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2. Standard Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dublin|node|digital_heritage|form'] = $field_group;

  return $export;
}
