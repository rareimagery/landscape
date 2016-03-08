<?php
  include_once('logics.inc');

  // Background settings
  
  $arrImages = array('none');
  foreach(modula_get_backgrounds() as $bg) {
    $variables = array(
      'path' => $bg->uri,
      'alt' => $bg->name,
      'title' => $bg->name,
      'width' => '25px',
      'height' => '25px',
      'attributes' => array('class' => 'bg-img'),
    );
    $img = theme('image', $variables);
    $arrImages[$base_url.'/'.$bg->uri] = $img; 
  };
  
  $form['tk']['background_setting'] = array(
    '#type' => 'fieldset',
    '#title' => t('Background'),
    '#weight' => 4,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['tk']['background_setting']['background_type'] = array (
    '#type' => 'select',
    '#title' => t('Type'),
    '#options' => array (
      'default' => t('Default'),
      'patterns' => t('Patterns (repeated)'),
      'images' => t('Images (No-repeated)'),
      'none' => t('No Background')
    ),
    '#default_value' => theme_get_setting('background_type'),
  );

  $form['tk']['background_setting']['patterns_container'] = array (
    '#type' => 'container',
    '#states' => array (
      'visible' => array (
        'select[name="background_type"]' => array (
          'value' => 'patterns'
        )
      )
    )
  );
  //upload your Patterns
  $form['tk']['background_setting']['patterns_container']['upload_pattern'] = array(
    '#type' => 'file',
    '#title' => t('Upload a new pattern'),
    '#weight' => 1,
  );
  $form['tk']['background_setting']['patterns_container']['bgs_pattern'] = array(
    '#type' => 'fieldset',
    '#title' => t('Select Background Pattern'),
    '#weight' => 2,
  );

  $default_bgs_type = 'none';
  if (theme_get_setting('bgs_type')) {
    $default_bgs_type = theme_get_setting('bgs_type');
  }
  
  $form['tk']['background_setting']['patterns_container']['bgs_pattern']['bgs_type'] = array(
    '#type' => 'radios',
    '#default_value' => $default_bgs_type,
    '#options' => $arrImages,
    '#weight' => 1,
  );
  //Upload custom Background
  $form['tk']['background_setting']['images_container'] = array (
    '#type' => 'container',
    '#states' => array (
      'visible' => array (
        'select[name="background_type"]' => array (
          'value' => 'images'
        )
      )
    )
  );
  $form['tk']['background_setting']['images_container']['upload_bg'] = array(
    '#type' => 'file',
    '#title' => t('Upload a new background'),
    '#weight' => 1,
  );
  // list of available images
  $arrImages_bg = array();
  $key_df = theme_get_setting('bgs_img_type') ? theme_get_setting('bgs_img_type'): '';

  $flag = FALSE;
  $url_imgs = array();
  foreach(modula_get_backgrounds_bg() as $bg_image_temp) {
    $variables_bg = array(
      'path' => $bg_image_temp->uri,
      'alt' => $bg_image_temp->name,
      'title' => $bg_image_temp->name,
      'width' => '150px',
      'height' => '100px',
      'attributes' => array('class' => 'bg-image'),
    );
    $bg_image = theme('image', $variables_bg);
    $arrImages_bg[$base_url.'/'.$bg_image_temp->uri] = $bg_image; 

    $url_imgs[] = $base_url.'/'.$bg_image_temp->uri;

    if (strcmp($key_df, $base_url.'/'.$bg_image_temp->uri) == 0) $flag = TRUE;
  };

  if (strlen($key_df) == 0 || $flag == FALSE) {
    $key_df = $url_imgs[0];
  }

  $form['tk']['background_setting']['images_container']['bgs_img'] = array(
    '#type' => 'fieldset',
    '#title' => t('Select Background Image'),
    '#weight' => 2,
  );

  $form['tk']['background_setting']['images_container']['bgs_img']['bgs_img_type'] = array(
    '#type' => 'radios',
    '#default_value' => $key_df,
    '#options' => $arrImages_bg,
  );

  $form['#submit'][]   = 'modula_settings_submit';
