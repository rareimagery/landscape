<?php
//Layout options


  $form['tk']['layout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layouts'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#weight'  => 3,
  );
  $form['tk']['layout']['wide_type'] = array (
  '#type' => 'radios',
  '#title' => t('Please select a type'),
  '#default_value' => (theme_get_setting('wide_type')?theme_get_setting('wide_type'):'layout-wide'),
  '#options' => array(
      'layout-wide' => t('Wide'),
      'layout-box' => t('Boxed')
    ),
  );

  $form['tk']['layout']['l_two_sides'] = array (
    '#type' => 'fieldset',
    '#title' => t('Two sides width'),
    '#attributes' => array('class' => array('l-two-sides')),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['tk']['layout']['l_two_sides']['layout_type'] = array(
    '#type' => 'select',
    '#title' => t('Choose a style for layout'),
    '#attributes' => array('class' => array('tk_layout')),
    '#options' => array(
      'side-main-side' => t('Sidebar - Content - Sidebar'),
      'sides-left' => t('Sidebar - Sidebar - Content'),
      'sides-right' => t('Content - Sidebar - Sidebar')
    ),
    '#default_value' => theme_get_setting('layout_type')?theme_get_setting('layout_type'):'side-main-side',
  );
  /* Side Main Side */
  $form['tk']['layout']['l_two_sides']['s_m_s'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('s-m-s')),
    '#states' => array(
      'visible' => array('select[name="layout_type"]' => array('value' => 'side-main-side')),
    ),
  );

  $form['tk']['layout']['l_two_sides']['s_m_s']['sms_left'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('sms_left')?theme_get_setting('sms_left'):3,
  );

  $form['tk']['layout']['l_two_sides']['s_m_s']['sms_main'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('sms_main')?theme_get_setting('sms_main'):5,
  );

  $form['tk']['layout']['l_two_sides']['s_m_s']['sms_right'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('sms_right')?theme_get_setting('sms_right'):4,
  );
  /* Side Side Main */
  $form['tk']['layout']['l_two_sides']['s_s_m'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('s-s-m')),
    '#states' => array(
      'visible' => array('select[name="layout_type"]' => array('value' => 'sides-left')),
    ),
  );

  $form['tk']['layout']['l_two_sides']['s_s_m']['ssm_left'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('ssm_left')?theme_get_setting('ssm_left'):3,
  );

  $form['tk']['layout']['l_two_sides']['s_s_m']['ssm_main'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('ssm_main')?theme_get_setting('ssm_main'):5,
  );

  $form['tk']['layout']['l_two_sides']['s_s_m']['ssm_right'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('ssm_right')?theme_get_setting('ssm_right'):4,
  );

  /* Main Side Side */
  $form['tk']['layout']['l_two_sides']['m_s_s'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('m-s-s')),
    '#states' => array(
      'visible' => array('select[name="layout_type"]' => array('value' => 'sides-right')),
    ),
  );

  $form['tk']['layout']['l_two_sides']['m_s_s']['mss_left'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('mss_left')?theme_get_setting('mss_left'):3,
  );

  $form['tk']['layout']['l_two_sides']['m_s_s']['mss_main'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('mss_main')?theme_get_setting('mss_main'):5,
  );

  $form['tk']['layout']['l_two_sides']['m_s_s']['mss_right'] = array (
    '#type' => 'hidden',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('mss_right')?theme_get_setting('mss_right'):4,
  );


  $form['tk']['layout']['l_one_side'] = array (
    '#type' => 'fieldset',
    '#title' => t('One side width'),
    '#attributes' => array('class' => array('l-one-side')),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $form['tk']['layout']['l_one_side']['w_one_side'] = array (
    '#type' => 'hidden',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#default_value' => theme_get_setting('w_one_side')?theme_get_setting('w_one_side'):4,
  );
  