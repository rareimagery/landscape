<?php
/**
 * @file
 * tk_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tk_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'This is block copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_copyright';
  $fe_block_boxes->body = '<div class="copyright">
<div class="large-8 left">© 2014 Modula <a href="http://www.themeski.com"> Drupal Theme</a></div>

<div class="right">Developed by <a href="http://www.themeski.com">"http://www.themeski.com</a></div>
</div>
';

  $export['block_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Fan Page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_facebook_like';
  $fe_block_boxes->body = '<div class="facebook-content">
  <p><iframe allowtransparency="true" frameborder="0" scrolling="no" src="//www.facebook.com/plugins/likebox.php?href=https%3A%2F%2Fwww.facebook.com%2Fthemeski&amp;width=292&amp;height=258&amp;colorscheme=light&amp;show_faces=true&amp;header=false&amp;stream=false&amp;show_border=false" style="border:none; overflow:hidden; width:330px; height:240px;background:#fff;"></iframe></p>
</div>';

  $export['block_facebook_like'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'This is block useful link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_useful_link';
  $fe_block_boxes->body = '<ul class="themeski-list list-icon list-same-icon list-icon-in-a" data-icon="fa-caret-right">
	<li><a href="#">Support Portal</a></li>
	<li><a href="#">OnLine User Manual</a></li>
	<li><a href="#">Plugins compatibility</a></li>
	<li><a href="#">Header layouts &amp; styles</a></li>
	<li><a href="#">Page title settings</a></li>
	<li><a href="#">Fancy header settings</a></li>
</ul>
';

  $export['block_useful_link'] = $fe_block_boxes;

  return $export;
}
