<?php print($output['main']); ?>

<div class="footer-content">
	<?php if ($site_info): ?>
		<div class="logo-footer"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $site_info; ?>" alt="<?php print t('Home'); ?>" /></a></div>
	<?php endif; ?>
	
	<?php if ($output['footer']): ?>
		<?php print $output['footer'] ;?>
	<?php endif; ?>
</div>