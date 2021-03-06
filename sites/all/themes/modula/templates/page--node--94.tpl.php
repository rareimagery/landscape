<!--.page -->
<div role="document" class="page">

  <?php if (!empty($page['header_top']) || $alt_secondary_menu || $top_bar): ?>
    <!--/.header-top -->
    <section class="l-header-top l-themeski l-wrapper">
    <?php if ($top_bar): ?>
      <!--.top-bar -->
      <?php if ($top_bar_classes): ?>
      <div class="<?php print $top_bar_classes; ?>">
      <?php endif; ?>
        
      <?php if ($top_bar_classes): ?>
      </div>
      <?php endif; ?>
      <!--/.top-bar -->
    <?php endif; ?>
      <?php if (!empty($top_bar_classes) || !empty($page['header_top'])): ?>
      <div class="row">
      <?php if ($alt_secondary_menu): ?>
        <nav id="secondary-menu" class="navigation" role="navigation">
          <?php print $alt_secondary_menu; ?>
        </nav> <!-- /#secondary-menu -->
      <?php endif; ?>
       <?php if (!empty($page['header_top'])): ?>
        <div class="large-12 columns">
          <?php print render($page['header_top']); ?>
        </div>
      <?php endif ?>
      </div>
    <?php endif ?>
    </section>
    <!--/.l-header-top -->
  <?php endif; ?>

  <!--.l-header region -->
  <header role="banner" class="l-header">

    <!-- Title, slogan and menu -->
    <section class="row hide-in-small">
      <div class="branding">
        <?php if ($linked_logo): print $linked_logo; endif; ?>

        <?php if ($site_name): ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <h2 title="<?php print $site_slogan; ?>" class="site-slogan "><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      </div> <!-- End Branding -->
    </section>
    <!-- End title, slogan and menu -->

    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region l-themeski l-wrapper">
        <div class="row">
          <div class="large-12 columns">
            <?php print render($page['header']); ?>
          </div>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured'])): ?>
    <!--/.featured -->
    <section class="l-themeski l-featured l-wrapper">
          <?php print render($page['featured']); ?>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--/.l-messages -->
    <section class="l-themeski l-messages row">
      <div class="large-12 columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--/.l-help -->
    <section class="l-themeski l-help row">
      <div class="large-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <?php if (!empty($page['top_panel'])): ?>
    <!--/.top-panel -->
    <section class="l-themeski l-top-panel l-wrapper">
      <div class="row">
        <div class="large-12 columns">
          <?php print render($page['top_panel']); ?>
        </div>  
      </div>
    </section>
    <!--/.l-top-panel -->
  <?php endif; ?>

  <main role="main" class="l-main l-themeski l-wrapper">
    <div class="row">
      <div class="<?php print $main_grid; ?> main columns">
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlight panel callout">
            <?php print render($page['highlighted']); ?>
          </div>
        <?php endif; ?>

        <a id="main-content"></a>

        
        <?php if ($resize_text): print $resize_text; endif; ?>

		<?php print render($title_suffix); ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>

      </div>
    <!--/.main region -->

   

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>

  
    </div>
  </main>
  <!--/.main-->
 <?php if (!empty($page['one_page'])): ?>
    <!--/.one-page -->
    <section class="l-one-page l-themeski l-wrapper">      
      <?php print render($page['one_page']); ?>    
    </section>
    <!--/.l-one-page -->
  <?php endif; ?>


  <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych l-themeski l-wrapper">
      <div class="row">
        <div class="triptych-first large-6 columns">
          <?php print render($page['triptych_first']); ?>
        </div>
        <div class="triptych-middle large-3 medium-6 columns">
          <?php print render($page['triptych_middle']); ?>
        </div>
        <div class="triptych-last large-3 medium-6 columns">
          <?php print render($page['triptych_last']); ?>
        </div>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>


  <section class="l-footer-top-columns l-themeski l-wrapper">
    <div class="row">
      <?php if (!empty($page['footer-top'])): ?>
       <div class="footer-top large-12 columns">
          <?php print render($page['footer-top']); ?>
        </div>
       <?php endif; ?>

    </div>
  </section>
  <!--/.footer-columns-->

  <!--.l-footer-->
  <footer class="l-footer panel l-themeski l-wrapper" role="contentinfo">
    <div class="row">
      <?php if (!empty($page['footer'])): ?>
        <div class="footer large-12 columns">
          <?php print render($page['footer']); ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>
  <!--/.footer-->

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->
