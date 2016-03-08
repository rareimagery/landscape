<?php
/**
 * @file
 * tk_testimonial.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_testimonial_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_infomation|node|testimonial|teaser';
  $field_group->group_name = 'group_author_infomation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author infomation',
    'weight' => '0',
    'children' => array(
      0 => 'field_testimonial_quote',
      1 => 'group_author_line',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Author infomation',
      'instance_settings' => array(
        'classes' => 'group-author-infomation field-group-div large-10 medium-9 columns author-infomation',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author_infomation|node|testimonial|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_infomation|node|testimonial|teaser_2';
  $field_group->group_name = 'group_author_infomation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'teaser_2';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Author infomation',
    'weight' => '1',
    'children' => array(
      0 => 'field_testimonial_quote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Author infomation',
      'instance_settings' => array(
        'classes' => 'group-author-infomation field-group-div quote-body-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author_infomation|node|testimonial|teaser_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_line|node|testimonial|teaser';
  $field_group->group_name = 'group_author_line';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_author_infomation';
  $field_group->data = array(
    'label' => 'Group author line',
    'weight' => '4',
    'children' => array(
      0 => 'field_author_description',
      1 => 'field_author_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group author line',
      'instance_settings' => array(
        'classes' => 'group-author-line field-group-html-element author-line',
        'element' => 'cite',
        'attributes' => '',
      ),
    ),
  );
  $export['group_author_line|node|testimonial|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_line|node|testimonial|teaser_2';
  $field_group->group_name = 'group_author_line';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'teaser_2';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Group author line',
    'weight' => '3',
    'children' => array(
      0 => 'field_author_description',
      1 => 'field_author_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group author line',
      'instance_settings' => array(
        'classes' => 'group-author-line field-group-html-element author-line',
        'element' => 'cite',
        'attributes' => '',
      ),
    ),
  );
  $export['group_author_line|node|testimonial|teaser_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|testimonial|teaser_2';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonial';
  $field_group->mode = 'teaser_2';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group-wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_author_image',
      1 => 'group_author_infomation',
      2 => 'group_author_line',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group-wrapper',
      'instance_settings' => array(
        'classes' => 'group-wrapper field-group-div themeski-testimonial testimonial-border-body testimonial-color-darken-body testimonial-shadow-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|node|testimonial|teaser_2'] = $field_group;

  return $export;
}
