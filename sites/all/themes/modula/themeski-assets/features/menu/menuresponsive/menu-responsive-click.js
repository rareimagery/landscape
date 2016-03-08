(function ($, Drupal, window, document, undefined) {
// Place your code here.
  $(window).load(function(){
    $(document).ready(function() {
      //Menu Responsive
      /* prepend menu icon */
      $('li.expanded > a').before('<span class="head"></span>');
      $(".head").click( function(){
        if($(this).hasClass('click')) {
          $(this).removeClass('click');
        }
        else {
          $(".head").removeClass('click');
          $(this).parents('li').children('.head').addClass('click');
        }
      });

      function tk_menu_responsive(){
        var width = window.innerWidth || document.documentElement.clientWidth;

        if(width >= 1025){      
          $('#menu-icon').hide();
          $('.head').hide();
          $('.icon-menu .head').show();
          $('.page-node-94 #menu-icon').show();
          $('.page-node-137 #menu-icon').show();
          $('.page-node-137 .head').show();

        }
        if(width < 1024){
          $(".branding, .header-bottom-wrapper, .breadcrumb-wrapper, #columns").click(function(){
            $(".head").removeClass('click');
          });          
          $('#menu-icon').show();
          $('.head').show();
        }
      }

      //Call function responsive()
      tk_menu_responsive();
      $(window).resize(function() {
        tk_menu_responsive();
      });
    });
  });
})(jQuery, Drupal, this, this.document);