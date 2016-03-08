<?php
/**
 * @file
 * tk_call_to_action.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function tk_call_to_action_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|call_to_action|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'call_to_action';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cta_slogan',
        1 => 'field_cta_link',
      ),
    ),
    'fields' => array(
      'field_cta_slogan' => 'ds_content',
      'field_cta_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|call_to_action|default'] = $ds_layout;

  return $export;
}
