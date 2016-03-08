(function ($, Drupal, window, document, undefined) {
// Place your code here.
  $(window).load(function(){
    $(document).ready(function() {
      //Menu Responsive
      /* prepend menu icon */
      //$('li.expanded > a').before('<span class="head"></span>');
      // $(".toggle-topbar ").click( function(){
      //   $(this).parents(".top-bar").find(" > ul.menu").slideToggle();
      // });
      $(".head").click( function(){
        if($(this).hasClass('click')) {
          $(this).removeClass('click');
        }
        else {
          $(".head").removeClass('click');
          $(this).parents('li').children('.head').addClass('click');
          $(this).parents('li').children('.head').slideToggle();
        }
      });

      $(".branding, .header-bottom-wrapper, .breadcrumb-wrapper, #columns").click(function(){
        $(".head").removeClass('click');
      });          

      $('#menu-icon').show();
      $('.head').show();
    });
  });
})(jQuery, Drupal, this, this.document);