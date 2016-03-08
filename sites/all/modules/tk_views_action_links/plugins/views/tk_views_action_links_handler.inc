<?php
// This file must be at tk_views_actions_link/views directory.

/**
 * @file
 * Definition of tk_views_actions_link_handler.
 */

/**
 * class handler of field
 */
class tk_views_action_links_handler extends views_handler_area {

  /**
   * Default options form.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['destination'] = array('default' => '');
    $options['content_type'] = array('default' => '');
    $options['vocabulary'] = array('default' => '');

    return $options;
  }

  /**
   * Creates the form item for the options added.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['destination'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use destination'),
      '#default_value' => $this->options['destination'],
      '#description' => t('Add destination to action links'),
    );

    $content_types = node_type_get_types();
    $types = array();
    foreach ($content_types as $code => $type) {
      $types[$code] = $type->name;
    }

    if (!empty($types)) {
      $form['content_type'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Content type'),
        '#options' => $types,
        '#default_value' => $this->options['content_type'],
        '#description' => t('Actions add new content of Content type select.'),
      );
    }

    $vocabularies = taxonomy_get_vocabularies();
    $vocas = array();
    foreach ($vocabularies as $vocabulary) {
      $vocas[$vocabulary->vid] = $vocabulary->name;
    }

    if (!empty($vocas)) {
      $form['vocabulary'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Vocabulary'),
        '#options' => $vocas,
        '#default_value' => $this->options['vocabulary'],
        '#description' => t('Actions add new content of Vocabulary select.'),
      );
    }
      
  }

  /**
   * Renders the field handler.
   */
  function render($empty = FALSE) {
    $types = empty($this->options['content_type']) ? array() : $this->options['content_type'];
    $vocas = empty($this->options['vocabulary']) ? array() : $this->options['vocabulary'];
    $destination = empty($this->options['destination']) ? 0 : $this->options['destination'];
    
    if ($destination) {
      $destination = drupal_get_destination();
    }else {
      $destination = array();
    }

    $actions = array();
    foreach ($types as $code => $value) {
      if ($value && user_access("create $value content")) {
        $type = node_type_load($value);
        $type_name = $type->name;
        $actions[] = l(t("Add new $type_name"), "node/add/".strtr($code, array('_' => '-')), array('query' => $destination));
      }      
    }

    foreach ($vocas as $vid => $value) {
      if ($value && user_access("administer taxonomy")) {
        $voca = taxonomy_vocabulary_load($vid);
        $name = $voca->name;
        $machine_name = $voca->machine_name;
        $actions[] = l(t("Update $name"), "admin/structure/taxonomy/$machine_name", array('query' => $destination));
      }
    }

    return theme('item_list', array(
        'items' => $actions,
        'title' => '',
        'type' => 'ul',
        'attributes' => array(
          'class' => array('action-links'),
        ),
      )
    );
  }
}