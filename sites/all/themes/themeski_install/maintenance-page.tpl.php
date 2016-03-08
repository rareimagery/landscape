<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>">

  <?php print $page_top; ?>

  <div id="branding">
    <div class="container">
      <?php if ($logo): ?>
        <a href="http://www.themeski.com" class="logo"><img id="logo" src="<?php print $logo ?>" alt="<?php print $site_name ?>" /></a>
      <?php endif; ?>
      <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
    </div>
  </div>

  <div id="page">

    <?php if ($sidebar_first): ?>
      <div id="sidebar-first" class="sidebar">
        <?php print $sidebar_first ?>
        <div class="ct_support">
          <a target="_blank" href="http://themeski.com/professional-drupal-support" class="button big">Get support</a>
        </div>
      </div>
    <?php endif; ?>

    <div id="content" class="clearfix">
      <?php if ($messages): ?>
        <div id="console"><?php print $messages; ?></div>
      <?php endif; ?>
      <?php if ($help): ?>
        <div id="help">
          <?php print $help; ?>
        </div>
      <?php endif; ?>
      <?php print $content; ?>
    </div>

  </div>

  <?php print $page_bottom; ?>
  <div id="footer" class="footer_copyright">  
    <div class="container">
      <span class="copyright_text">A Product of</span>
      <a href="http://www.themeski.com"><img src="profiles/themeski/themes/themeski_install/images/themeski-small-black.png" class="copyright_logo" title="Themeski drupal theme"/></a>
    </div>
  </div>
  </body>
</html>
