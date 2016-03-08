<?php
/**
 * @file
 * tk_ecommerce.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tk_ecommerce_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'sharethis' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '0',
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'ft' => array(),
      ),
    ),
  );
  $export['node|product_display|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|short';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'short';
  $ds_fieldsetting->settings = array(
    'ds_image_product' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product_display|short'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|product_display|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tk_ecommerce_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'share_this';
  $ds_field->label = 'Share This';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'product_display|full';
  $ds_field->properties = array(
    'block' => 'sharethis|sharethis_block',
    'block_render' => '3',
  );
  $export['share_this'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tk_ecommerce_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|node_teaser';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'node_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title',
        2 => 'commerce_price',
        3 => 'field_product_image',
        4 => 'status',
        5 => 'field_size',
        6 => 'field_color',
        7 => 'field_discount',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_product_image' => 'ds_content',
      'status' => 'ds_content',
      'field_size' => 'ds_content',
      'field_color' => 'ds_content',
      'field_discount' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|node_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left',
        1 => 'title',
        2 => 'product:field_product_image',
        3 => 'product:commerce_price',
        4 => 'group_right',
        5 => 'field_product',
        6 => 'sharethis',
        7 => 'body',
      ),
    ),
    'fields' => array(
      'group_left' => 'ds_content',
      'title' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'group_right' => 'ds_content',
      'field_product' => 'ds_content',
      'sharethis' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => 'Product',
  );
  $export['node|product_display|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|short';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'short';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_discount_image',
        1 => 'product:field_discount',
        2 => 'product:field_product_image',
        3 => 'ds_image_product',
        4 => 'node_link',
        5 => 'title',
        6 => 'product:commerce_price',
      ),
    ),
    'fields' => array(
      'group_discount_image' => 'ds_content',
      'product:field_discount' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'ds_image_product' => 'ds_content',
      'node_link' => 'ds_content',
      'title' => 'ds_content',
      'product:commerce_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product_display|short'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'product:field_discount',
        2 => 'product:field_product_image',
        3 => 'product:commerce_price',
        4 => 'field_product',
        5 => 'product:field_color',
        6 => 'product:field_size',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'product:field_discount' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_product' => 'ds_content',
      'product:field_color' => 'ds_content',
      'product:field_size' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product_display|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function tk_ecommerce_ds_view_modes_info() {
  $export = array();

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
