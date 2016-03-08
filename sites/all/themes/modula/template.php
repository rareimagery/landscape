<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function modula_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}

/**
 * Implements template_preprocess_node
 *
 */
//function modula_preprocess_node(&$variables) {
//}

/**
 * Implements hook_preprocess_block()
 */
//function modula_preprocess_block(&$variables) {
//  // Add wrapping div with global class to all block content sections.
//  $variables['content_attributes_array']['class'][] = 'block-content';
//
//  // Convenience variable for classes based on block ID
//  $block_id = $variables['block']->module . '-' . $variables['block']->delta;
//
//  // Add classes based on a specific block
//  switch ($block_id) {
//    // System Navigation block
//    case 'system-navigation':
//      // Custom class for entire block
//      $variables['classes_array'][] = 'system-nav';
//      // Custom class for block title
//      $variables['title_attributes_array']['class'][] = 'system-nav-title';
//      // Wrapping div with custom class for block content
//      $variables['content_attributes_array']['class'] = 'system-nav-content';
//      break;
//
//    // User Login block
//    case 'user-login':
//      // Hide title
//      $variables['title_attributes_array']['class'][] = 'element-invisible';
//      break;
//
//    // Example of adding Foundation classes
//    case 'block-foo': // Target the block ID
//      // Set grid column or mobile classes or anything else you want.
//      $variables['classes_array'][] = 'six columns';
//      break;
//  }
//
//  // Add template suggestions for blocks from specific modules.
//  switch($variables['elements']['#block']->module) {
//    case 'menu':
//      $variables['theme_hook_suggestions'][] = 'block__nav';
//    break;
//  }
//}

//function modula_preprocess_views_view(&$variables) {
//}

/**
 * Implements template_preprocess_panels_pane().
 *
 */
//function modula_preprocess_panels_pane(&$variables) {
//}

/**
 * Implements template_preprocess_views_views_fields().
 *
 */
//function modula_preprocess_views_view_fields(&$variables) {
//}

/**
 * Implements theme_form_element_label()
 * Use foundation tooltips
 */
//function modula_form_element_label($variables) {
//  if (!empty($variables['element']['#title'])) {
//    $variables['element']['#title'] = '<span class="secondary label">' . $variables['element']['#title'] . '</span>';
//  }
//  if (!empty($variables['element']['#description'])) {
//    $variables['element']['#description'] = ' <span data-tooltip="top" class="has-tip tip-top" data-width="250" title="' . $variables['element']['#description'] . '">' . t('More information?') . '</span>';
//  }
//  return theme_form_element_label($variables);
//}

/*/**
 * Implements hook_preprocess_button().
 */
function modula_preprocess_button(&$variables) {
  $variables['element']['#attributes']['class'][] = 'button';
  if (isset($variables['element']['#parents'][0]) && $variables['element']['#parents'][0] == 'submit') {
    $variables['element']['#attributes']['class'] = array_diff($variables['element']['#attributes']['class'], array('secondary'));
  }
}

/**
 * Implements hook_form_alter()
 * Example of using foundation sexy buttons
 */
//function modula_form_alter(&$form, &$form_state, $form_id) {
//  // Sexy submit buttons
//  if (!empty($form['actions']) && !empty($form['actions']['submit'])) {
//    $classes = (is_array($form['actions']['submit']['#attributes']['class']))
//      ? $form['actions']['submit']['#attributes']['class']
//      : array();
//    $classes = array_merge($classes, array('secondary', 'button', 'radius'));
//    $form['actions']['submit']['#attributes']['class'] = $classes;
//  }
//}

/**
 * Implements hook_form_FORM_ID_alter()
 * Example of using foundation sexy buttons on comment form
 */
//function modula_form_comment_form_alter(&$form, &$form_state) {
//  // Sexy preview buttons
//  $classes = (is_array($form['actions']['preview']['#attributes']['class']))
//    ? $form['actions']['preview']['#attributes']['class']
//    : array();
//  $classes = array_merge($classes, array('secondary', 'button', 'radius'));
//  $form['actions']['preview']['#attributes']['class'] = $classes;
//}


/**
 * Implements template_preprocess_panels_pane().
 */
// function zurb_foundation_preprocess_panels_pane(&$variables) {
// }

/**
* Implements template_preprocess_views_views_fields().
*/
/* Delete me to enable
function THEMENAME_preprocess_views_view_fields(&$variables) {
 if ($variables['view']->name == 'nodequeue_1') {

   // Check if we have both an image and a summary
   if (isset($variables['fields']['field_image'])) {

     // If a combined field has been created, unset it and just show image
     if (isset($variables['fields']['nothing'])) {
       unset($variables['fields']['nothing']);
     }

   } elseif (isset($variables['fields']['title'])) {
     unset ($variables['fields']['title']);
   }

   // Always unset the separate summary if set
   if (isset($variables['fields']['field_summary'])) {
     unset($variables['fields']['field_summary']);
   }
 }
}

// */

/**
 * Implements hook_css_alter().
 */
//function modula_css_alter(&$css) {
//  // Always remove base theme CSS.
//  $theme_path = drupal_get_path('theme', 'zurb_foundation');
//
//  foreach($css as $path => $values) {
//    if(strpos($path, $theme_path) === 0) {
//      unset($css[$path]);
//    }
//  }
//}

/**
 * Implements hook_js_alter().
 */
//function modula_js_alter(&$js) {
//  // Always remove base theme JS.
//  $theme_path = drupal_get_path('theme', 'zurb_foundation');
//
//  foreach($js as $path => $values) {
//    if(strpos($path, $theme_path) === 0) {
//      unset($js[$path]);
//    }
//  }
//}

/**
 * Returns HTML for a button form element.
 */
function modula_button($variables) {
  $element = $variables['element'];
  $label = check_plain($element['#value']);
  element_set_attributes($element, array('id', 'name', 'value', 'type'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ">\n";
}

function modula_preprocess_html(&$variables, $hook) {
  global $theme_key;
  $current_theme_path = drupal_get_path('theme', 'modula');
  drupal_add_css($current_theme_path . '/themeski-assets/features/font/fonts.settings.css', 'file');
  drupal_add_css($current_theme_path . '/css/custom.css', array('group' => CSS_THEME, 'weight' => 999));

  /* BEGIN SKIN SETTING */
  // Load skin to apply for theme
  $skin = theme_get_setting('skins_type')?theme_get_setting('skins_type'):'default';
   if(isset($_COOKIE['skin'])) {$skin = $_COOKIE['skin']?$_COOKIE['skin']:$skin;}
  drupal_add_css($current_theme_path . '/css/skins/'.$skin.'/'.$skin.'.css', array('group' => CSS_THEME,  'weight' => 99));
  

  //Load background Images
 if(theme_get_setting('background_type')) {
    switch (theme_get_setting('background_type')) {
      case "patterns":
        drupal_add_css('body{background-image: url("'.theme_get_setting('bgs_type').'") !important}', array('group'=>CSS_THEME, 'type' => 'inline'));
        drupal_add_css('#page{background-color: #fff}', array('group'=>CSS_THEME, 'type' => 'inline'));
        break;
      case "images":
        $background_link = str_replace("bg/thumb", "bg/full", theme_get_setting('bgs_img_type'));
        drupal_add_css('body{background-image: url("'.$background_link.'") !important; background-attachment:fixed  !important; background-size:100% auto !important}', array('group'=>CSS_THEME, 'type' => 'inline'));
        break;
      case "none":
        drupal_add_css('body{background: none repeat scroll 0 0 transparent !important}', array('group'=>CSS_THEME, 'type' => 'inline'));
        break;
    }
  }
  
  /* LAYOUT*/

  $variables['wide_type'] = theme_get_setting('wide_type');
  $boxed = "wide";
  $_COOKIE['load_boxed'] = "";
  if(isset($_COOKIE['load_boxed'])) {
    $boxed = $_COOKIE['load_boxed'];
  }
  if(($variables['wide_type']=="layout-box") || ($_COOKIE['load_boxed'] == "boxed") || (theme_get_setting('background_type') == "patterns") || theme_get_setting('background_type')== "images"){
    $variables['classes_array'][] = 'boxed';
  }
  if($_COOKIE['load_boxed'] == "wide" ){
    unset($_COOKIE['load_bg_patterns']);
    drupal_add_js(
    'jQuery(document).ready(function () { 
        jQuery("body").removeClass("boxed");
      });', 
     array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
  }

  // $variables['wide_type'] = theme_get_setting('wide_type');
  // $boxed = "wide";
  // if(isset($_COOKIE['layout'])) {
  //   $boxed = $_COOKIE['layout'];
  // }
  // if(($variables['wide_type']=="layout-box") || ($_COOKIE['layout'] == "boxed") || (theme_get_setting('background_type') == "patterns") || theme_get_setting('background_type')== "images"){
  //   $variables['classes_array'][] = 'boxed';
  // }
  // if($_COOKIE['layout'] == "wide" ){
  //   unset($_COOKIE['load_bg_patterns']);
  //   drupal_add_js(
  //   'jQuery(document).ready(function () { 
  //       jQuery("body").removeClass("boxed");
  //     });', 
  //    array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
    
  // }


  $variables['layout_chosen'] = theme_get_setting('layout_type');
  if($variables['layout_chosen']=="side-main-side"){
    if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'side-main-side';
    }
    elseif (!empty($variables['page']['sidebar_first'])) {
      $variables['classes_array'][] = 'side-first-left';
    }
    elseif (!empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'side-second-right';
    }
  }
  else if($variables['layout_chosen']=="sides-right"){
    if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'sides-right';
    }
    elseif (!empty($variables['page']['sidebar_first'])) {
      $variables['classes_array'][] = 'side-first-right';
    }
    elseif (!empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'side-second-right';
    }
  }
  else {
    if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'sides-left';
    }
    elseif (!empty($variables['page']['sidebar_first'])) {
      $variables['classes_array'][] = 'side-first-left';
    }
    elseif (!empty($variables['page']['sidebar_second'])) {
      $variables['classes_array'][] = 'side-second-left';
    }
  }

}
/**
 * Implements template_preprocess_page
 *
 * Add convenience variables and template suggestions.
 */
function modula_preprocess_page(&$variables) {
  // $top_bar_classes = array();
  // $top_bar_classes[] = 'contain-to-grid';
  // $top_bar_options[] = 'is_hover:false';
  // $top_bar_options[] = 'custom_back_text:false';
  // $top_bar_options[] = 'scrolltop:false';

  // $variables['top_bar_options'] = ' data-options="' . implode('; ', $top_bar_options) . '"';
  
  /* ADD JQUERY UI INTO TFRAME */
  drupal_add_library('system', 'ui.droppable');
  drupal_add_library('system', 'ui.draggable');
  // jQuery ui slider for layout in themesettings
  drupal_add_library('system', 'ui.slider');

  $variables['full_node'] = isset($variables['node'])?$variables['node']:'';

  $current_theme_path = drupal_get_path('theme', 'modula');

  /* LAYOUT*/
  
  // Convenience variables
  if (!empty($variables['page']['sidebar_first'])){
    $left = $variables['page']['sidebar_first'];
  }

  if (!empty($variables['page']['sidebar_second'])) {
    $right = $variables['page']['sidebar_second'];
  }

  $variables['layout_chosen'] = theme_get_setting('layout_type');
  $variables['w-one-side'] = theme_get_setting('w_one_side');
  $variables['w-one-side-main'] = 12 - $variables['w-one-side'];
  if($variables['layout_chosen']=="side-main-side"){

    if (!empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.theme_get_setting('sms_main').' large-push-'.theme_get_setting('sms_left');
      $variables['sidebar_first_grid'] = 'large-'.theme_get_setting('sms_left').' large-pull-'.theme_get_setting('sms_main').'  medium-6';
      $variables['sidebar_sec_grid'] = 'large-'.theme_get_setting('sms_right').'  medium-6';
    } elseif (empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'];
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = 'large-'.$variables['w-one-side'];
    } elseif (!empty($left) && empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'].' large-push-'.$variables['w-one-side'];
      $variables['sidebar_first_grid'] = 'large-'.$variables['w-one-side'].' large-pull-'.$variables['w-one-side-main'];
      $variables['sidebar_sec_grid'] = '';
    } else {
      $variables['main_grid'] = 'large-12';
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = '';
    }
  }
  else if($variables['layout_chosen']=="sides-left"){
    $variables['push_main'] = 12 - theme_get_setting('ssm_main');
    if (!empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.theme_get_setting('ssm_main').' large-push-'.$variables['push_main'];
      $variables['sidebar_first_grid'] = 'large-'.theme_get_setting('ssm_left').' large-pull-'.theme_get_setting('ssm_main').'  medium-6';
      $variables['sidebar_sec_grid'] = 'large-'.theme_get_setting('ssm_right').' large-pull-'.theme_get_setting('ssm_main').'  medium-6';    
    } elseif (empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'].' large-push-'.$variables['w-one-side'];
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = 'large-'.$variables['w-one-side'].' large-pull-'.$variables['w-one-side-main'];
    } elseif (!empty($left) && empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'].' large-push-'.$variables['w-one-side'];
      $variables['sidebar_first_grid'] = 'large-'.$variables['w-one-side'].' large-pull-'.$variables['w-one-side-main'];
      $variables['sidebar_sec_grid'] = '';
    } else {
      $variables['main_grid'] = 'large-12';
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = '';
    }
  }

  else {
    if (!empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.theme_get_setting('mss_main');
      $variables['sidebar_first_grid'] = 'large-'.theme_get_setting('mss_left').'  medium-6';
      $variables['sidebar_sec_grid'] = 'large-'.theme_get_setting('mss_right').'  medium-6';
    } elseif (empty($left) && !empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'];
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = 'large-'.$variables['w-one-side'];
    } elseif (!empty($left) && empty($right)) {
      $variables['main_grid'] = 'large-'.$variables['w-one-side-main'];
      $variables['sidebar_first_grid'] = 'large-'.$variables['w-one-side'];
      $variables['sidebar_sec_grid'] = '';
    } else {
      $variables['main_grid'] = 'large-12';
      $variables['sidebar_first_grid'] = '';
      $variables['sidebar_sec_grid'] = '';
    }
  }

  /* Main Menu */
  $variables['gpmenu'] = '';

  // Menus for alternative header.
  $variables['alt_main_menu'] = '';
    
  if (!empty($variables['main_menu'])) {
    $menu_type = theme_get_setting('menu_type');
    $variables['menu_type'] = $menu_type ;
    $menu_columns = theme_get_setting('menu_columns');
    $menu_option_general = theme_get_setting('menu_option_general');
    $menu_stacked = theme_get_setting('menu_stacked');

    $menu_items = menu_tree_all_data('main-menu', null, 1);
    
    
    $variables['resize_text']   = (theme_get_setting('menu_option_general') != 0) ? TRUE : FALSE;
    if($menu_option_general){
       drupal_add_js(
      'jQuery(document).ready(function () { 
        var height_heade = jQuery(".l-header").outerHeight(true);
        var height_heade_top = jQuery(".l-header-top").outerHeight(true);
        var topPos = jQuery(".l-header").offset().top;
        var padding = height_heade + height_heade_top ;
        var top_fixed = topPos + height_heade;
        jQuery(".l-header").addClass("sticky");
        jQuery( window ).scroll(function() {
         var wScroll = jQuery(window).scrollTop();
         if( topPos < wScroll ){
          jQuery(".l-header").addClass("fixed");
          jQuery(".page .contain-to-grid").addClass("sticky fixed");
          jQuery(".l-featured ").css("padding-top",padding);
         }
         else  {     
          jQuery(".l-header").removeClass("fixed");
          jQuery(".page .contain-to-grid").removeClass("sticky fixed");
          jQuery( ".l-featured " ).removeAttr("style");
         }
        });

       });', 
       array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
    }

    if (!in_array($menu_type, array(1, 2 , 3 , 4 , 5 , 6 , 7 , 8 ))) {
      $menu_type = 1;
    }

    switch ($menu_type){
      case 1:
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/jquery.hoverIntent.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/easing.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/superfish.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/supposition.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/invoke-superfish.js');
        
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css'); 
        $main_menu_tree = menu_tree_output(menu_tree_all_data(theme_get_setting('menu_element')));
        // Add the rendered output to the $mainmenu variable
        $variables['alt_main_menu'] = render($main_menu_tree);

        // Get the entire main menu tree
        $main_menu_tree = menu_tree_output(menu_tree_all_data(theme_get_setting('menu_element')));

        // Add the rendered output to the $mainmenu variable
        $variables['alt_main_menu'] = render($main_menu_tree);
      break;

      case 2:
        $variables['alt_main_menu'] = theme('links__system_main_menu', array(
          'links' => $variables['main_menu'],
          'attributes' => array(
            'id' => 'main-menu-links',
            'class' => array('links', 'inline-list', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Main menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        ));
      break;

      case 3:
        

      break;

      case 4:
        drupal_add_js(
        'jQuery(document).ready(function () {   
         jQuery(".page").addClass("stacked");
          });', 
         array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/jquery.hoverIntent.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/easing.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/superfish.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/supposition.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/invoke-superfish.js');
        
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/stacked-menu/stacked-menu.css');
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css'); 
        //drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css');  
        $main_menu_tree = menu_tree_output(menu_tree_all_data(theme_get_setting('menu_element')));
        // Add the rendered output to the $mainmenu variable
        $variables['alt_main_menu'] = render($main_menu_tree);

        switch ($menu_stacked) {
          case 1:
            drupal_add_js(
            'jQuery(document).ready(function () { 
             jQuery(".l-header .branding").css("float","left");
              });', 
             array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
          break;
          case 2:
            drupal_add_js(
            'jQuery(document).ready(function () { 
             jQuery(".l-header .branding").css({"float":"none","text-align":"center","width":"100%"});
              });', 
             array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
          break;
          case 3:
            drupal_add_js(
            'jQuery(document).ready(function () { 
             jQuery(".l-header .branding").css("float","right");
              });', 
             array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
          break;
        }
      break;
      case 5:
        drupal_add_js(
        'jQuery(document).ready(function () { 
         jQuery(".page").addClass("icon-menu");
         jQuery(".l-header .row").css("display","none");
         jQuery(".top-bar .toggle-topbar").css("display","block");
         jQuery(".l-header .row").removeClass("hide-for-small");
         jQuery(".l-header-top .contain-to-grid").removeClass("show-for-small");
          });', 
        array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));

        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/icon-menu/icon-menu.js');
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/icon-menu/icon-menu.css');
        
        //drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css');  
        $main_menu_tree = menu_tree_output(menu_tree_all_data(theme_get_setting('menu_element')));
        // Add the rendered output to the $mainmenu variable
        $variables['alt_main_menu'] = render($main_menu_tree);
      break;

      case 6:
        drupal_add_js(
        'jQuery(document).ready(function () { 
         jQuery(".page").addClass("menu-top-bar");
         jQuery(".l-header").addClass("sticky fixed");
         var height_heade = jQuery(".l-header").outerHeight(true);
         jQuery(".page").css("padding-top",height_heade);
          });', 
         array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
        //drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css');  
        $main_menu_tree = menu_tree_output(menu_tree_all_data(theme_get_setting('menu_element')));
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/jquery.hoverIntent.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/easing.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/superfish.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/supposition.js');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/superfishdropdown/invoke-superfish.js');
        
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/mega-menu/mega-menu.css'); 
        // Add the rendered output to the $mainmenu variable
        $variables['alt_main_menu'] = render($main_menu_tree);
      break;
    }
  }

  $menu_responsive_type = theme_get_setting('menu_resp_type');
  $variables['menu_responsive_type'] = $menu_responsive_type;
  $menu_type = theme_get_setting('menu_type');
  if ( $menu_type == 5 ) {
      drupal_add_css($current_theme_path . '/themeski-assets/features/menu/menuresponsive/menu-responsive-click.css');
      drupal_add_js($current_theme_path . '/themeski-assets/features/menu/menuresponsive/menu-responsive-click.js');   
  }
  else {   
    if (!in_array($menu_responsive_type, array(1, 2, 3))) {
      $menu_responsive_type = 1;
    }
    switch ($menu_responsive_type) {
      case 2:
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/menuresponsive/tinynav.min.js');  
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/menuresponsive/menuresponsive_select.js');  
        break;
      case 3:
        drupal_add_css($current_theme_path . '/themeski-assets/features/menu/menuresponsive/menu-responsive-click.css');
        drupal_add_js($current_theme_path . '/themeski-assets/features/menu/menuresponsive/menu-responsive-click.js');  
        break;
    }
  }

  $variables['resize_text']   = (theme_get_setting('font_size_buttons') != 0) ? TRUE : FALSE;
  if(theme_get_setting('font_size_buttons')){
    drupal_add_js($current_theme_path . '/themeski-assets/features/extras/jquery.cookie.js');
    drupal_add_js($current_theme_path . '/themeski-assets/features/extras/jquery.jfontsize-1.0.js');
    $variables['resize_text'] = '<div class="font-resize"><span id="jfontsize-default" class="jfontsize-button">A</span><span id="jfontsize-plus" class="jfontsize-button">A+</span></div>';
  }


  // Ensure modal reveal behavior if modal messages are enabled.
  if(theme_get_setting('zurb_foundation_messages_modal')) {
    drupal_add_js(drupal_get_path('theme', 'zurb_foundation') . '/js/behavior/reveal.js');
  }

  //Custom demo add css inline for each term in blog_category
  $v_blog_category = taxonomy_vocabulary_machine_name_load('blog_category');
  if(!empty($v_blog_category)){
    $terms = taxonomy_get_tree($v_blog_category->vid);
    if (!empty($terms)) {
      foreach ($terms as $key => $term_info) {
        $term = taxonomy_term_load($term_info->tid);
        if(isset($term->field_color_term) && !empty($term->field_color_term)){
          $color_term = $term->field_color_term['und'][0]['rgb'];
          drupal_add_css('body .color-term-'.$term->tid.'{ background-color: '.$color_term.'}',array('type' => 'inline'));
        }
      }  
    } 
  }

  if (isset($variables['node'])) {
    if ($variables['node']->type == 'one_page' && ($variables['node']->nid != '137') && ($variables['node']->nid != '141')) {
      $variables['alt_main_menu'] = '';
    }
  }
}

/**
 * Implementation of hook_menu_link_alter(). For Drupal 6
 */
function modula_preprocess_menu_tree(&$item, $menu) {

}

/**
 * Implements theme_links() targeting the main menu specifically.
 * Formats links for Top Bar http://foundation.zurb.com/docs/components/top-bar.html
 */
function modula_links__topbar_main_menu($variables) {
  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu')));
  $output = _modula_links($links);
  $variables['attributes']['class'][] = 'left';

  return '<ul' . drupal_attributes($variables['attributes']) . '>' . $output . '</ul>';
}

/**
 * Helper function to output a Drupal menu as a Foundation Top Bar.
 *
 * @param array
 *   An array of menu links.
 *
 * @return string
 *   A rendered list of links, with no <ul> or <ol> wrapper.
 */
function _modula_links($links) {
  $output = '';

  foreach (element_children($links) as $key) {
    $output .= _modula_render_link($links[$key]);
  }

  return $output;
}

/**
 * Helper function to recursively render sub-menus.
 *
 * @param array
 *   An array of menu links.
 *
 * @return string
 *   A rendered list of links, with no <ul> or <ol> wrapper.
 */
function _modula_render_link($link) {
  $output = '';
  $menu_type = theme_get_setting('menu_type');

  $flag = ($menu_type != 2) ? TRUE : FALSE;

  // This is a duplicate link that won't get the dropdown class and will only
  // show up in small-screen.
  $small_link = $link;

  if (!empty($link['#below']) && $flag) {
    $link['#attributes']['class'][] = 'has-dropdown';
  }

  // Render top level and make sure we have an actual link.
  if (!empty($link['#href'])) {
    $rendered_link = NULL;

    // Foundation offers some of the same functionality as Special Menu Items;
    // ie: Dividers and Labels in the top bar. So let's make sure that we
    // render them the Foundation way.
    if (module_exists('special_menu_items')) {
      if ($link['#href'] === '<nolink>') {
        $rendered_link = '<label>' . $link['#title'] . '</label>';
      }
      else if ($link['#href'] === '<separator>') {
        $link['#attributes']['class'][] = 'divider';
        $rendered_link = '';
      }
    }

    if (!isset($rendered_link)) {
      $rendered_link = theme('zurb_foundation_menu_link', array('link' => $link));
    }

    // Test for localization options and apply them if they exist.
    if (isset($link['#localized_options']['attributes']) && is_array($link['#localized_options']['attributes'])) {
      $link['#attributes'] = array_merge_recursive($link['#attributes'], $link['#localized_options']['attributes']);
    }
    $output .= '<li' . drupal_attributes($link['#attributes']) . '>' . $rendered_link;

    if (!empty($link['#below']) && $flag) {
      // Add repeated link under the dropdown for small-screen.
      $small_link['#attributes']['class'][] = 'show-for-small';
      $sub_menu = '<li' . drupal_attributes($small_link['#attributes']) . '>' . l($link['#title'], $link['#href'], $link['#localized_options']);

      // Build sub nav recursively.
      foreach ($link['#below'] as $sub_link) {
        if (!empty($sub_link['#href'])) {
          $sub_menu .= _modula_render_link($sub_link);
        }
      }

      $output .= '<ul class="dropdown">' . $sub_menu . '</ul>';
    }

    $output .=  '</li>';
  }

  return $output;
}

/**
 * Implements theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function modula_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $breadcrumbs = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $breadcrumbs .= '<ul class="breadcrumbs">';

    foreach ($breadcrumb as $key => $value) {
      $breadcrumbs .= '<li>' . $value . '</li>';
    }

    $title = strip_tags(drupal_get_title());
    $title = preg_replace('/<[^>]*>/', '', $title);

    if (strlen($title) > 55) {
      $title = substr($title, 0, 50) . '...';
    }

    $breadcrumbs .= '<li class="current">' . $title. '</li>';
    $breadcrumbs .= '</ul>';

    return $breadcrumbs;
  }
}

function modula_preprocess_comment(&$variables, $hook) {
  $comment = $variables['comment'];
  $variables['submitted'] = t('<span class="field author">!username</span><span class="field date-month">'.format_date($comment->created,'custom','M d Y').'</span><span class="field time-hour">'.format_date($comment->created,'custom','h:i a').'</span>', array('!username' => $variables['author']));
  if (variable_get('comment_subject_field_' . $variables['node']->type, 1) == 0) {
    $variables['title'] = '';
  }
}

function modula_preprocess_comment_wrapper(&$variables, $hook) {
  if($variables['node']->comment_count) {
  $variables['total_comments_in_node']= $variables['node']->comment_count;
  }
  else {
  $variables['total_comments_in_node'] = 0;
  }
}

/**
* theme_menu_link()
*/
function modula_menu_link(array $variables) {
  $mlid = $variables['element']['#original_link']['mlid'];
  $is_attr = theme_get_setting('item_'.$mlid) ? theme_get_setting('item_'.$mlid) : 0;
  if ($is_attr){
    //$variables['element']['#localized_options']['attributes']['class'][] = 'mega-menu';
    $variables['element']['#attributes']['class'][] = 'tk-multi-dropdown-menu';
    $position = theme_get_setting('position_'.$mlid) ? theme_get_setting('position_'.$mlid) : 1;
    $columns = theme_get_setting('columns_'.$mlid) ? theme_get_setting('columns_'.$mlid) : 1;
    $width = theme_get_setting('width_'.$mlid) ? theme_get_setting('width_'.$mlid) : '';

    switch ($position) {
      case 1:
        $variables['element']['#attributes']['class'][] = 'tk-multi-dropdown-menu_left';
        break;
      case 2:
          $variables['element']['#attributes']['class'][] = 'tk-multi-dropdown-menu_center';
        break;
      case 3:
        $variables['element']['#attributes']['class'][] = 'tk-multi-dropdown-menu_right';
        break;
    }

    $variables['element']['#attributes']['class'][] = 'columns-' . $columns;
    if ($width) {
      $variables['element']['#attributes']['child_with'][] = $width;
       drupal_add_js(
      'jQuery(document).ready(function () { 
        jQuery("#main-menu >ul >li").each(function() {  
            var width_ul = jQuery(this).attr( "child_with" );  
            jQuery( this ).find("> ul").css({"width":  width_ul });
        });
        });', 
       array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));
    }
    // choose columns
    drupal_add_js(
    'jQuery(document).ready(function () { 
      jQuery("#main-menu >ul >li").each(function() { 
        //var width_ul1 = jQuery(this).attr( "child_with" ); 
        var width_ul = jQuery(this).find("> ul").width();
        var width_haft = parseInt(width_ul) ; 
        var width_item = jQuery(this).width();

        if(jQuery( this ).hasClass("tk-multi-dropdown-menu_center")){
          jQuery( this ).find("> ul").css({"left":"50%","margin-left": - width_ul/2 + "px" });
        } 

        if(jQuery( this ).hasClass("tk-multi-dropdown-menu_left")){
          jQuery( this ).find("> ul").css({"left":"0","right":"inherit"});
        }   
        
        if(jQuery( this ).hasClass("tk-multi-dropdown-menu_right")){
          jQuery( this ).find("> ul").css({"right":"0","left":"inherit"});
        } 
        

        if(jQuery( this ).hasClass("columns-1")){
          jQuery( this ).find("> ul").addClass("large-block-grid-1");
        }
        if(jQuery( this ).hasClass("columns-2")){
          jQuery( this ).find("> ul").addClass("large-block-grid-2");
        }
        if(jQuery( this ).hasClass("columns-3")){
          jQuery( this ).find("> ul").addClass("large-block-grid-3");
        }
        if(jQuery( this ).hasClass("columns-4")){
          jQuery( this ).find("> ul").addClass("large-block-grid-4");
        }
        if(jQuery( this ).hasClass("columns-5")){
          jQuery( this ).find("> ul").addClass("large-block-grid-5");
        }
        if(jQuery( this ).hasClass("columns-6")){
          jQuery( this ).find("> ul").addClass("large-block-grid-6");
        }
        if(jQuery( this ).hasClass("columns-7")){
          jQuery( this ).find("> ul").addClass("large-block-grid-7");
        }
        if(jQuery( this ).hasClass("columns-8")){
          jQuery( this ).find("> ul").addClass("large-block-grid-8");
        }
        if(jQuery( this ).hasClass("columns-9")){
          jQuery( this ).find("> ul").addClass("large-block-grid-9");
        }
        if(jQuery( this ).hasClass("columns-10")){
          jQuery( this ).find("> ul").addClass("large-block-grid-10");
        }
        if(jQuery( this ).hasClass("columns-11")){
          jQuery( this ).find("> ul").addClass("large-block-grid-11");
        }
        if(jQuery( this ).hasClass("columns-12")){
          jQuery( this ).find("> ul").addClass("large-block-grid-12");
        }  
      });
      });', 
     array('type' => 'inline', 'scope' => 'footer', 'weight' => 5));

    
  }

  return theme_menu_link($variables);
}