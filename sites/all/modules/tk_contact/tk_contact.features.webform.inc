<?php
/**
 * @file
 * tk_contact.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function tk_contact_webform_defaults() {
$webforms = array();
  $webforms['contact'] = array(
  'title' => ' We\'d love to hear from you!',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Mauris gravida quam id semper iaculis. In hac habitasse platea dictumst. Phasellus fringilla lorem turpis, at ultrices nunc accumsan eget. Etiam sit amet tempor leo. Donec mattis scelerisque turpis, a volutpat mauris fermentum eu. Nam non interdum nibh, sed scelerisque erat. Duis auctor eleifend vestibulum.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Mauris gravida quam id semper iaculis. In hac habitasse platea dictumst. Phasellus fringilla lorem turpis, at ultrices nunc accumsan eget. Etiam sit amet tempor leo. Donec mattis scelerisque turpis, a volutpat mauris fermentum eu. Nam non interdum nibh, sed scelerisque erat. Duis auctor eleifend vestibulum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => 'Thank you, your submission has been received ',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<none>',
    'status' => 1,
    'block' => 1,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'machine_name' => 'contact',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'block_one_page_contactus__info' => array(
        'form_key' => 'content',
        'name' => 'Content',
        'type' => 'markup',
        'value' => 'Nullam ultrices vulputate neque, vel luctus dolor. Maecenas vitae magna erat. Phasellus consectetur porttitor metus ac lacinia. Morbi ultricies faucibus velit, nec cursus tortor molestie in. Fusce bibendum tincidunt massa. Nunc convallis blandit erat, nec tincidunt sapien bibendum vitae. Aliquam sodales vitae orci id placerat.',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => 'full_html',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 9,
        'machine_name' => 'block_one_page_contactus__info',
        'page_num' => 1,
      ),
      'block_one_page_contactus__your_message' => array(
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 32,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 10,
        'machine_name' => 'block_one_page_contactus__your_message',
        'page_num' => 1,
      ),
      'block_one_page_contactus__email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 32,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 11,
        'machine_name' => 'block_one_page_contactus__email',
        'page_num' => 1,
      ),
      'block_one_page_contactus__subject' => array(
        'form_key' => 'subject',
        'name' => 'Subject',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => 32,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 12,
        'machine_name' => 'block_one_page_contactus__subject',
        'page_num' => 1,
      ),
      'block_one_page_contactus__website' => array(
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'rows' => 5,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 13,
        'machine_name' => 'block_one_page_contactus__website',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'disable_breadcrumb' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'webform_features_author' => '',
  'webform_features_revision_author' => 'admin',
);
return $webforms;
}
