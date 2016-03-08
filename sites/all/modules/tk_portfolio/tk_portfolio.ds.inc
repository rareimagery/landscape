<?php
/**
 * @file
 * tk_portfolio.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tk_portfolio_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|portfolio|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'portfolio';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
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
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'by ',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'field-item field-name-author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'field-item field-name-post-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_portfolio_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'field-item field-name-field-portfolio-category ',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|portfolio|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|portfolio|short';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'portfolio';
  $ds_fieldsetting->view_mode = 'short';
  $ds_fieldsetting->settings = array(
    'ds_portfolio_popup_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'exclude node title settings' => '0',
        'max_length' => '35',
        'word_boundary' => 1,
        'ellipsis' => 0,
      ),
    ),
    'field_portfolio_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|portfolio|short'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|portfolio|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'portfolio';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'ds_portfolio_popup_image' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'node-title',
        'exclude node title settings' => '0',
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'link-readmore',
      ),
    ),
  );
  $export['node|portfolio|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tk_portfolio_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_portfolio_popup_image';
  $ds_field->label = 'Ds portfolio popup image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'portfolio|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if(!empty($entity->field_portfolio_image[\'und\'])){
  print \'<div class="link-mantify">\';
  foreach($entity->field_portfolio_image[\'und\'] as $key => $value){
    $entity_title = entity_label(\'node\', $entity);
    $image = $value;
    if (!empty($image[\'title\'])) {
        $caption = $image[\'title\'];
    }
    elseif (!empty($image[\'alt\'])) {
        $caption = $image[\'alt\'];
    }
    elseif (!empty($entity_title)) {
        $caption = $entity_title;
    }
    else {
          $caption = \'\';
    }
    $path = file_create_url($value[\'uri\']);
  	$options = array(
  		\'attributes\'=>array(\'class\' => array(\'colorbox\'),\'rel\' => \'Group-\'.$entity->nid,\'title\' => $caption)        
  	);
    if($key == 0){
    	
  		print l(\'Pop-up\',$path,$options);
  	}else {
  		print l(\'\',$path,$options);
  	}
  }
  print \'</div>\';
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['ds_portfolio_popup_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tk_portfolio_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'author',
        3 => 'group_submitted',
        4 => 'field_portfolio_image',
        5 => 'field_portfolio_category',
        6 => 'field_portfolio_description',
        7 => 'group_description',
        8 => 'field_portfolio_body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'group_submitted' => 'ds_content',
      'field_portfolio_image' => 'ds_content',
      'field_portfolio_category' => 'ds_content',
      'field_portfolio_description' => 'ds_content',
      'group_description' => 'ds_content',
      'field_portfolio_body' => 'ds_content',
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
    'page_option_title' => 'Portfolio',
  );
  $export['node|portfolio|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|short';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'short';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_image',
        1 => 'ds_portfolio_popup_image',
        2 => 'title',
        3 => 'field_portfolio_image',
        4 => 'group_image_link',
      ),
    ),
    'fields' => array(
      'group_image' => 'ds_content',
      'ds_portfolio_popup_image' => 'ds_content',
      'title' => 'ds_content',
      'field_portfolio_image' => 'ds_content',
      'group_image_link' => 'ds_content',
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
  $export['node|portfolio|short'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|portfolio|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'portfolio';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_portfolio_image',
        2 => 'field_portfolio_body',
        3 => 'group_image_link',
        4 => 'node_link',
        5 => 'ds_portfolio_popup_image',
        6 => 'group_left',
        7 => 'group_right',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_portfolio_image' => 'ds_content',
      'field_portfolio_body' => 'ds_content',
      'group_image_link' => 'ds_content',
      'node_link' => 'ds_content',
      'ds_portfolio_popup_image' => 'ds_content',
      'group_left' => 'ds_content',
      'group_right' => 'ds_content',
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
  $export['node|portfolio|teaser'] = $ds_layout;

  return $export;
}
