<?php
/**
 * @file
 * tk_core.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function tk_core_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'related';
  $ds_view_mode->label = 'Related';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['related'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'short';
  $ds_view_mode->label = 'Short';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['short'] = $ds_view_mode;

  return $export;
}
