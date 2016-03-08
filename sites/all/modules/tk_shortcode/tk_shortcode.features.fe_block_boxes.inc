<?php
/**
 * @file
 * tk_shortcode.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tk_shortcode_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_box';
  $fe_block_boxes->body = '<ul class="small-block-grid-2 large-block-grid-4">
	<li>
		<div class="show-code">
			<div class="box-drupal-themes">
				<h3 class="title-drupal-themes">Brand Development</h3>
				<div class="content">Viverra faucibus hendrerit tortor semper nam platea consectetur sapien faucibus aenean</div>
			</div>
		</div>
	</li>
	<li>
		<div class="show-code">
			<div class="box-document">
				<h3 class="title-document">Package Design</h3>
				<div class="content">Viverra faucibus hendrerit tortor semper nam platea consectetur sapien faucibus aenean</div>
			</div>
		</div>
	</li>
	<li>
		<div class="show-code">
			<div class="box-support">
				<h3 class="title-support">Creative Service</h3>
				<div class="content">Viverra faucibus hendrerit tortor semper nam platea consectetur sapien faucibus aenean</div>
			</div>
		</div>
	</li>
	<li>
		<div class="show-code">
			<div class="box-simplicity-master">
				<h3 class="title-simplicity-master">Interactive Design</h3>
				<div class="content">Viverra faucibus hendrerit tortor semper nam platea consectetur sapien faucibus aenean</div>
			</div>
		</div>
	</li>
</ul>
';

  $export['shortcode_box'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode button';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_button';
  $fe_block_boxes->body = '<div class="row ">
<h4>Size classes</h4>

<div class="show-code"><a class="button small" href="#">Small</a> <a class="button" href="#">Default</a> <a class="button big" href="#">Big</a></div>
</div>

<div class="row ">
<h4>Color classes</h4>

<div class="show-code"><a class="button" href="#">default</a> <a class="button blue" href="#">blue</a> <a class="button lime" href="#">lime</a> <a class="button green" href="#">green</a> <a class="button virid" href="#">virid</a> <a class="button yellow" href="#">yellow</a> <a class="button orange" href="#">orange</a> <a class="button red" href="#">red</a> <a class="button pink" href="#">pink</a> <a class="button brown" href="#">brown</a> <a class="button light-gray" href="#">light gray</a> <a class="button gray" href="#">gray</a></div>
</div>

<div class="row ">
<h4>Style classes</h4>

<div class="show-code"><a class="button" href="#">Default</a> <a class="button rounded" href="#">rounded</a> <a class="button rect" href="#">rect</a> <a class="button flat" href="#">flat</a> <a class="button simple" href="#">simple</a> <a class="button matte" href="#">matte</a> <a class="button shiny" href="#">shiny</a> <a class="button glass" href="#">glass</a></div>
</div>

<div class="row">
<h4>Example</h4>

<div class="show-code"><a class="button small orange flat" href="#">small orange flat</a> <a class="button brown matte rect" href="#">brown matte rect</a> <a class="button big green shiny rounded" href="#">big green shiny rounded</a></div>
</div>
';

  $export['shortcode_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode column';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_column';
  $fe_block_boxes->body = '<div class="columns show-code">
<div class="row large-12">
<p>Full width</p>
</div>

<div class="row ">
<div class="large-6 columns">
<p>1/2 small-full</p>
</div>

<div class="large-6 columns ">
<p>1/2 small-full</p>
</div>
</div>

<div class="row">
<div class="large-4 columns">
<p>1/3 small-full</p>
</div>

<div class="large-4 columns">
<p>1/3 small-full</p>
</div>

<div class="large-4 columns">
<p>1/3 small-full</p>
</div>
</div>

<div class="row">
<div class="large-3 columns">
<p>1/4 small-full</p>
</div>

<div class="large-3 columns">
<p>1/4 small-full</p>
</div>

<div class="large-3 columns">
<p>1/4 small-full</p>
</div>

<div class="large-3 columns">
<p>1/4 small-full</p>
</div>
</div>

<div class="row">
<div class="large-3 columns">
<p>1/4 small-full</p>
</div>

<div class="large-9 columns">
<p>3/4 small-full</p>
</div>
</div>

<div class="row">
<div class="large-9 columns">
<p>3/4 small-full</p>
</div>

<div class="large-3 columns">
<p>1/4 small-full</p>
</div>
</div>
</div>
';

  $export['shortcode_column'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode item accordion 01';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_item_accordion_01';
  $fe_block_boxes->body = '<h3>Blockquotes</h3>
<blockquote>
	<p>Morbi fringilla feugiat tortor suscipit accumsan. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labolore magna aliqua. Ut enim ad minim veniam.</p>
</blockquote>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Facere animi in molestias quo cupiditate illo.Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut</p>
';

  $export['shortcode_item_accordion_01'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode item accordion 02';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_item_accordion_02';
  $fe_block_boxes->body = '<h3>Voluptas aliquid repellat dolorum facere eveniet esse mollitia architecto in rem!</h3>
<p>Lorem ipsum dolor sit amet. Voluptas aliquid repellat dolorum facere eveniet esse mollitia architecto in rem. Praesent molestie nibh sem, in malesuada nisi varius eget</p>
<ol>
	<li>Lorem ipsum consectetur</li>
	<li>adipisicing consectetur adipisicing</li>
	<li>dolor sit amet consectetur</li>
</ol>
<p>Phasellus gravida quis tellus quis tincidunt! Donec porttitor interdum mauris et posuere. Donec ac mi ullamcorper, egestas lectus sed, ultricies justo.</p>
';

  $export['shortcode_item_accordion_02'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode item tab 01';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_item_tab_01';
  $fe_block_boxes->body = '<div class="large-3 left"><img alt="" height="207" src="https://lh6.googleusercontent.com/-UZFaGB9YAZg/UMg5CEahaXI/AAAAAAAAAEw/jYMe47QUvXU/s426/gorsel.jpg" width="207" /></div>
<div class="large-9 columns">
	<p>Integer sit amet ipsum eu lacus viverra vehicula id sit amet lacus. Maecenas sed purus velit. Ut fringilla, metus in pulvinar lacinia, erat ipsum feugiat lacus, vel tempor orci odio sed libero.</p>
	<ol>
		<li>Maecenas sed purus velit</li>
		<li><a href="#">Proin quis ligula</a></li>
		<li><a href="#">Curabitur nec libero et tellus ultrici</a></li>
		<li>Ed purus velit</li>
	</ol>
	<p>Nam ligula sem, commodo sit amet vestibulum nec, consectetur ac augue. <a href="#">Maecenas blandit aliquet nisl</a>, sed convallis sapien ultricies a.Nam ligula sem, commodo sit amet vestibulum nec, consectetur ac augue.</p>
</div>
';

  $export['shortcode_item_tab_01'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode item tab 02';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_item_tab_02';
  $fe_block_boxes->body = '<p>Nullam vehicula ligula id massa viverra, vel posuere diam porta. Nullam consequat ipsum et interdum malesuada. <em>Pellentesque pellentesque tempor tellus eget hendrerit. Morbi id aliquam ligula.</em> <strong>Class aptent taciti sociosqu ad litora torquent per conubia nostra.</strong></p>
<ul>
	<li>Suspendisse vehicul</li>
	<li>Aliquam vel rutrum est
		<ul>
			<li>Cras consequat sem</li>
			<li>Cras consequat sem</li>
		</ul>
	</li>
	<li>Cras consequat sem</li>
</ul>
<p>Velit eu feugiat blandit, odio sapien sollicitudin risus, et faucibus leo est a felis. Vivamus scelerisque iaculis lobortis. Sed egestas lobortis tincidunt. Aliquam vel rutrum est. Nam in tincidunt lectus, vitae volutpat nibh. Morbi vitae felis sed velit tincidunt tempus.</p>
';

  $export['shortcode_item_tab_02'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode list';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_list';
  $fe_block_boxes->body = '<ul class="large-block-grid-4">
	<li>
		<div class="show-code">
			<ul class="list list-arrow">
				<li>Item 1</li>
				<li>Item 2</li>
				<li>Item 3</li>
				<li>Item 4</li>
			</ul>
		</div>
	</li>
	<li>
		<div class="show-code">
			<ul class="list list-icon-check">
				<li>Lorem ipsum dolor amet.</li>
				<li>Maecenas ac metus augue.</li>
				<li>Duis vitae est mi.</li>
				<li>Duis vitae est mi.</li>
			</ul>
		</div>
	</li>
	<li>
		<div class="show-code">
			<ul class="list list-square">
				<li>Item 1</li>
				<li>Item 2</li>
				<li>Item 3</li>
				<li>Item 4</li>
			</ul>
		</div>
	</li>
	<li>
		<div class="show-code">
			<ol class="list list-number">
				<li>Item 1</li>
				<li>Item 2</li>
				<li>Item 3</li>
				<li>Item 4</li>
			</ol>
		</div>
	</li>
</ul>
';

  $export['shortcode_list'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode price table';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_price_table';
  $fe_block_boxes->body = '<div class="show-code">
<div class="price-table">
<div class="price_item large-3 medium-6 column">
<div class="price_item_wrapper">
<div class="price_item_title_cost">
<h2>basic</h2>

<h2>$20 /mo</h2>
</div>

<div class="price_item_text">Tempus pretium auctor</div>

<div class="price_item_text">Cum lorem sociis</div>

<div class="price_item_text">500Mb eget natoque</div>

<div class="price_item_text">3% enatibus et magnis</div>

<div class="price_item_btn"><a class="price_button btn_large btn_type1" href="#">Get It Now!</a></div>
</div>
</div>

<div class="price_item most_popular large-3 medium-6 column">
<div class="price_item_wrapper">
<div class="price_item_title_cost">
<h2>professional</h2>

<h2>$50 /mo</h2>
</div>

<div class="price_item_text">Tempus pretium auctor</div>

<div class="price_item_text">Lorem ipsum sociis</div>

<div class="price_item_text">1Gb eget natoque</div>

<div class="price_item_text">2% enatibus et magnis</div>

<div class="price_item_btn"><a class="price_button btn_large btn_type1" href="#">Get It Now!</a></div>
</div>
</div>

<div class="price_item  large-3 medium-6 column">
<div class="price_item_wrapper">
<div class="price_item_title_cost">
<h2>business</h2>

<h2>$80 /mo</h2>
</div>

<div class="price_item_text">Tempus pretium auctor</div>

<div class="price_item_text not">Eget mas lorem sociis (not)</div>

<div class="price_item_text">3Gb eget natoque</div>

<div class="price_item_text">1% enatibus et magnis</div>

<div class="price_item_btn"><a class="price_button btn_large btn_type1" href="#">Get It Now!</a></div>
</div>
</div>

<div class="price_item  large-3 medium-6 column">
<div class="price_item_wrapper">
<div class="price_item_title_cost">
<h2>unlimited</h2>

<h1>$100 /mo</h1>
</div>

<div class="price_item_text">Tempus pretium auctor</div>

<div class="price_item_text">Dolor vivamus sociis</div>

<div class="price_item_text">5Gb eget natoque</div>

<div class="price_item_text">0% enatibus et magnis</div>

<div class="price_item_btn"><a class="price_button btn_large btn_type1" href="#">Get It Now!</a></div>
</div>
</div>
</div>
</div>
';

  $export['shortcode_price_table'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shortcode tooltip';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shortcode_tooltip';
  $fe_block_boxes->body = '<p>Praesent tristique auctor ante at rutrum <span class="show-code"><span class="tooltip tooltip-left" title="Example Tooltip left">tip left</span></span> Phasellus dictum porta <span class="show-code"><span class="tooltip tooltip-top" title="Example Tooltip Top">tip top</span></span>.Quisque condimentum odio viverra, bibendum urna vestibulum, elementum enim. <span class="show-code"><span class="tooltip tooltip-bottom" title="Example Tooltip Bottom">tip bottom</span></span>, Quisque condimentum odio viverra <span class="show-code"><span class="tooltip tooltip-right" title="Example Tooltip Right">tip right</span></span> Fusce facilisis condimentum felis at tincidunt. Morbi pretium metus a quam sagittis, in mattis ligula tincidunt? Quisque condimentum odio viverra, bibendum urna vestibulum, elementum enim. Phasellus dictum porta magna et vulputate?</p>';

  $export['shortcode_tooltip'] = $fe_block_boxes;

  return $export;
}
