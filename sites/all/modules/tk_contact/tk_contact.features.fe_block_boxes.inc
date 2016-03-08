<?php
/**
 * @file
 * tk_contact.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tk_contact_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'This is block contact info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_contact_info';
  $fe_block_boxes->body = '<p>
	12345 North Main Street, New York, NY 555555</p>

<ul class="themeski-list list-icon">
	<li>
		<i class="fa  fa-phone">fa-phone</i>Phone: 888.5557.89</li>
	<li>
		<i class="fa fa-fax">fa-fax</i>Fax: 111.123.654</li>
	<li>
		<i class="fa fa-envelope">fa-envelope</i>Email: <a href="mailto:support@themeski.com">support@themeski.com</a></li>
	<li>
		<i class="fa fa-link">fa-link</i>Web: <a href="http://www.themeski.com">Themeski.com</a></li>
</ul>
';

  $export['block_contact_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Display a map on page contact';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_map';
  $fe_block_boxes->body = '<div class="gmap"><iframe frameborder="0" height="400" marginheight="0" marginwidth="0" scrolling="no" src="http://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=Berlin,+Germany&amp;aq=0&amp;oq=ber&amp;sll=37.0625,-95.677068&amp;sspn=53.345014,135.263672&amp;ie=UTF8&amp;hq=&amp;hnear=Berlin,+Germany&amp;t=m&amp;ll=52.51831,13.436966&amp;spn=0.052229,0.323067&amp;z=12&amp;output=embed" width="100%"></iframe></div>
';

  $export['block_map'] = $fe_block_boxes;

  return $export;
}
