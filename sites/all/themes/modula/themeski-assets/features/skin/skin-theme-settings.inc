<?php
// Skin settings
  $form['tk']['skins'] = array(
    '#type' => 'fieldset',
    '#title' => t('Skin options'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['tk']['skins']['skins_type'] = array(
  '#type' => 'radios',
  '#title' => t('Please select a skin'),
  '#default_value' => (theme_get_setting('skins_type')?theme_get_setting('skins_type'):'default'),
  '#options' => array(
      'default' => t('Default'),
      'amber' => t('Amber'),
      'cobalt' => t('Cobalt'),
      'crimson' => t('Crimson'),
      'cyan' => t('Cyan'),
      'emerald' => t('Emerald'),
      'green' => t('Green'),
      'indigo' => t('Indigo'),
      'lime' => t('Lime'),
      'magenta' => t('Magenta'),
      'orange' => t('Orange'),
      'red' => t('Red'),
      'steel' => t('Steel'),
      'teal' => t('Teal'),
      'violet' => t('Violet'),
      'yellow' => t('Yellow')
    ),
  );