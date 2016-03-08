<?php
/**
 * @file
 * tk_ecommerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_ecommerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tk_ecommerce_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Shoes'),
      'base' => 'node_content',
      'description' => t('Products for shoes shop'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
