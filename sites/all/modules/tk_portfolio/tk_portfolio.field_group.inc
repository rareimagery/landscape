<?php
/**
 * @file
 * tk_portfolio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_portfolio_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|portfolio|full';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group description',
    'weight' => '4',
    'children' => array(
      0 => 'field_portfolio_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group description',
      'instance_settings' => array(
        'classes' => 'group-description field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_description|node|portfolio|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_link|node|portfolio|short';
  $field_group->group_name = 'group_image_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'short';
  $field_group->parent_name = 'group_image';
  $field_group->data = array(
    'label' => 'Group image link',
    'weight' => '3',
    'children' => array(
      0 => 'ds_portfolio_popup_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group image link',
      'instance_settings' => array(
        'classes' => 'group-image__link field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_link|node|portfolio|short'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_link|node|portfolio|teaser';
  $field_group->group_name = 'group_image_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_left';
  $field_group->data = array(
    'label' => 'Group image link',
    'weight' => '1',
    'children' => array(
      0 => 'ds_portfolio_popup_image',
      1 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group image link',
      'instance_settings' => array(
        'classes' => 'group-image__link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_link|node|portfolio|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|2_columns';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = '2_columns';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div group-hover-move',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|2_columns'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|3_columns';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = '3_columns';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div group-hover-move',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|3_columns'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|4_columns';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = '4_columns';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div group-hover-move',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|4_columns'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|masonry';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'masonry';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|masonry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|related';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'related';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|related'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|short';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'short';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|short'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|teaser_6';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser_6';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|teaser_6'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|portfolio|timeline';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'timeline';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group image',
    'weight' => '0',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'title',
      2 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|portfolio|timeline'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|portfolio|teaser';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group left',
    'weight' => '3',
    'children' => array(
      0 => 'field_portfolio_image',
      1 => 'group_image_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group left',
      'instance_settings' => array(
        'classes' => 'group-left field-group-div group-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|portfolio|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|portfolio|teaser';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group right',
    'weight' => '6',
    'children' => array(
      0 => 'field_portfolio_body',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|portfolio|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|portfolio|full';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Submitted',
    'weight' => '2',
    'children' => array(
      0 => 'field_portfolio_category',
      1 => 'author',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Submitted',
      'instance_settings' => array(
        'classes' => 'meta group-submitted field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_submitted|node|portfolio|full'] = $field_group;

  return $export;
}
