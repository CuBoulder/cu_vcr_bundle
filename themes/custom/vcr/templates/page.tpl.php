<?php

/**
 * @file
 * VCR's theme implementation to display a single Drupal page.
 *
 * Regions:
 * - $page['field_right_sidebar']: Describe here
 * - $page['field_override_right_sidebar]: Describe here
 * - $page['field_call_action']: Describe here
 * - $page['field_inner_content']: Describe here
 * - $page['field_header']: Describe here
 * - $page['field_footer']: Describe here
 */

?>

<div id="page-wrapper">
  <div id="page" class="clearfix">
    <div id="header-wrapper">
      <div id="site-header" class="clearfix container-12">
        <div id="branding" class="grid-8">
          <?php if (drupal_is_front_page()) : ?>
          <h1><a href="<?php print $front_page; ?>"><?php print $site_name; ?></a></h1>
          <?php else : ?>
          <div id="logo">
            <a href="<?php print $front_page; ?>"><?php print $site_name; ?></a>
          </div>
          <?php endif; ?>
        </div><!-- /#branding -->
        <div id="search" class="grid-4 clearfix">
          <?php if (!empty($page['search_box'])) : ?>
          <?php print render($page['search_box']); ?>
          <?php endif; ?>
        </div><!-- /#search -->
      </div><!-- /#site-header -->
    </div><!-- /#header-wrapper -->

    <?php if ($secondary_menu_links) : ?>
    <div id="secondary-menu-wrapper" class="clearfix">
      <div id="secondary-navigation" class="container-12 clearfix">
   <?php print render($page['secondary-navigation']); ?>
      </div>
    </div><!-- /#secondary-menu-wrapper -->
    <?php endif; ?>

    <?php if ($main_menu_links) : ?>
    <div id="main-menu-wrapper" class="clearfix">
      <div id="navigation" class="container-12 clearfix">
   <?php print render($page['navigation']); ?>
      </div>
    </div><!-- /#main-menu-wrapper -->
    <?php else : ?>
    <div id="no-main-menu"></div>
    <?php endif; ?>
    <?php if (!empty($page['section_title'])) : ?>
          <div id="section-title"><?php print render($page['section_title']); ?></div>
    <?php endif; ?>

<?php

// DETERMINE # OF COLUMNS TO SHOW AND ADD CSS CLASS.
if ((!empty($page['sidebar_first'])) && (!empty($page['sidebar_second']))) {
  $content_class = "column-3";
}
elseif ((!empty($page['sidebar_first'])) && (empty($page['sidebar_second']))) {
  $content_class = "column-2-left";
}
elseif ((empty($page['sidebar_first'])) && (!empty($page['sidebar_second']))) {
  $content_class = "column-2-right";
}
else {
  $content_class = "column-1";
}

?>

    <div id="main-wrapper" class="<?php print $content_class; ?>">
      <div id="main" class="clearfix container-12">
        <?php if (!empty($page['slider'])) : ?>
        <div id="slider-wrapper">
          <div id="slider" class="container-12 clearfix">
            <div class="grid-12">
              <?php print render($page['slider']); ?>
            </div>
          </div>
        </div>
        <?php endif; ?>

        <?php if (!empty($tabs['#primary']) || !empty($tabs['#secondary'])) : ?>
        <div class="tabs container-12">
          <?php print render($tabs); ?>
        </div><!-- /.tabs -->
        <?php endif; ?>

        <?php print $messages; ?>
        <?php print render($page['help']); ?>

<?php

// DETERMINE PULL CLASS FOR SIDEBAR_FIRST
if (!empty($page['sidebar_second'])) {
  $pull_class = "pull-6";
}
else {
  $pull_class = "pull-9";
}

if (!empty($page['sidebar_first'])) {
  $push_class = "push-3";
}
else {
  $push_class = "";
}

?>

        <div id="content" class="clearfix  <?php print ns('grid-12', $page['sidebar_first'], 3, $page['sidebar_second'], 3); ?> <?php print $push_class; ?>">
          <div id="main-content" class="region clearfix">

            <?php if (!$is_front) : ?>
            <?php print $breadcrumb; ?>
            <?php print render($title_prefix); ?>
            <?php if ($title) : ?>
            <h1 class="title" id="page-title"><?php print $title; ?></h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php endif; ?>

            <?php print render($page['pre_content']); ?>
            <?php print render($page['content']); ?>

            <?php if(!empty($page['post_content'])) : ?>
            <div id="post-content-wrapper" class="clearfix">
              <?php print render($page['post_content']); ?>
            </div>
            <?php endif; ?>
          </div><!-- /#main-content -->
        </div><!-- /#content -->

        <?php if(!empty($page['sidebar_first'])) : ?>
        <div id="sidebar-first" class="grid-3 sidebar <?php print $pull_class; ?>">
          <div class="sidebar-wrapper">
            <?php print render($page['sidebar_first']); ?>
          </div>
        </div>
        <?php endif; ?>

        <?php if(!empty($page['sidebar_second'])) : ?>
        <div id="sidebar-second" class="grid-3 sidebar">
          <div class="sidebar-wrapper">
            <?php print render($page['sidebar_second']); ?>
          </div>
        </div>
        <?php endif; ?>

        <div class="clear"></div>

        <?php if(!empty($page['after_content'])) : ?>
        <div id="after-content" class="container-12 clearfix">
          <?php print render($page['after_content']); ?>
        </div>
        <?php endif; ?>

      </div><!-- /#main -->

      <div class="clear"></div>
    </div><!-- /#main_wrapper -->

    <?php if(!empty($page['footer'])) : ?>
    <div id="footer-wrapper">
      <div id="footer" class="container-12 clearfix">
        <?php print render($page['footer']); ?>
        <div class="clear"></div>
      </div>
    </div>
    <?php endif; ?>

    <?php if(!empty($page['footer_menus'])) : ?>
    <div id="footer-menus-wrapper">
      <div id="footer-menus" class="container-12 clearfix">
        <?php print render($page['footer_menus']); ?>
        <div class="clear"></div>
      </div>
    </div>
    <?php endif; ?>

    <div id="site-info-wrapper" class="clearfix">
      <div class="container-12 clearfix">

        <?php if (!empty($page['site_info'])) : ?>
        <div id="site-info" class="grid-8">
          <?php print render($page['site_info']); ?>
        </div>
        <?php endif; ?>

        <div id="cu-info" class="<?php print ns('grid-12', $page['site_info'], 8); ?>">
          <?php print render($page['site_info_two']); ?>
          <a href="http://www.colorado.edu"><strong>University of Colorado Boulder</strong></a><br />
          &copy; Regents of the University of Colorado<br />
          <a href="http://www.colorado.edu/about/privacy-statement">Privacy</a> &bull; <a href="http://www.colorado.edu/about/legal-trademarks">Legal &amp; Trademarks</a>
        </div>
      </div>
    </div>
  </div> <!-- /#page -->
</div> <!-- /#page-wrapper -->
