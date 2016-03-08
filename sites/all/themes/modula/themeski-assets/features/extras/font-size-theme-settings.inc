<?php
//Font size button
  $form['tk']['extras'] = array(
    '#type' => 'fieldset',
    '#title' => t('Extras'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#weight'  => 5,
  );

  $form['tk']['extras']['font_size_buttons'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add Font Size Buttons'),
    '#default_value' => theme_get_setting('font_size_buttons')
  );