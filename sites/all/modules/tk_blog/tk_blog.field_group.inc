<?php
/**
 * @file
 * tk_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|blog_post|masonry';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'masonry';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
      3 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Content',
      'instance_settings' => array(
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|blog_post|masonry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|blog_post|short';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'short';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group content',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group content',
      'instance_settings' => array(
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|blog_post|short'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|blog_post|teaser5';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser5';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_blog',
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
  $export['group_image|node|blog_post|teaser5'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|blog_post|teaser3';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser3';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group links',
    'weight' => '3',
    'children' => array(
      0 => 'node_link',
      1 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group links',
      'instance_settings' => array(
        'classes' => 'group-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_links|node|blog_post|teaser3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|blog_post|slide';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'slide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Right',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
      3 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Right',
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
  $export['group_right|node|blog_post|slide'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|blog_post|teaser';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Right',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
      3 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|blog_post|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|blog_post|teaser4';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser4';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Right',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
      3 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Right',
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
  $export['group_right|node|blog_post|teaser4'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|blog_post|teaser_2';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser_2';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Right',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'ds_color_term',
      2 => 'title',
      3 => 'node_link',
      4 => 'group_submitted',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Right',
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
  $export['group_right|node|blog_post|teaser_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|full';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '1',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|masonry';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'masonry';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '3',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|masonry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|slide';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'slide';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '3',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|slide'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|teaser';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '3',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|teaser3';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser3';
  $field_group->parent_name = 'group_links';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '4',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|teaser3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|teaser4';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser4';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '6',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|teaser4'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|teaser5';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser5';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '2',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'author',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|teaser5'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|teaser_2';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser_2';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '3',
    'children' => array(
      0 => 'field_author_ref',
      1 => 'ds_link_list_content',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|teaser_2'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitted|node|blog_post|timeline';
  $field_group->group_name = 'group_submitted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'timeline';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group submitted',
    'weight' => '2',
    'children' => array(
      0 => 'field_blog_category',
      1 => 'field_author_ref',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group submitted',
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
  $export['group_submitted|node|blog_post|timeline'] = $field_group;

  return $export;
}
