<?php
/**
 * @file
 * tk_ecommerce.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_ecommerce_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|product_display|full';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Right',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_product',
      2 => 'product:commerce_price',
      3 => 'sharethis',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div large-5 medium-5 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|product_display|full'] = $field_group;

  return $export;
}
