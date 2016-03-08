(function ($, Drupal) {

  Drupal.behaviors.modula = {
    attach: function(context, settings) {
      // Get your Yeti started.
      var width = window.innerWidth || document.documentElement.clientWidth;
      var $small = 640;
	    var $medium = 1024;
      if(width > $medium){ 
				if($(".no-sidebars").length == 0) {
      		$(".l-main").children(".row").children(".columns").equalHeight();
		    }
		  }
		  else {
				$(".l-main").children(".row").children(".columns").css("min-height","inherit");
			}
      if (window.stButtons){
 		   stButtons.locateElements();
      }

      $('.fix-order-blog-post-4').tk_fix_order(2);
    }
  };

})(jQuery, Drupal);
