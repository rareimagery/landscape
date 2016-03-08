(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(window).load(function(){
	$(document).ready(function() {
		function menu_responsive(){
			//Show & Hide #menu-icon
		    // Variable for responsive js
		    var $small = 640;
		    var $medium = 641;
		    var $large = 1024;
			var $main_menu = $('.menu-icon > .menu');
			var width = window.innerWidth || document.documentElement.clientWidth;
			if (width <= $large) {
				//menu responsive
				if( $('.menu-responsive').length == 0 ) {
					$main_menu.addClass('menu-responsive').tinyNav({
				        active: 'selected',
				        'header' : '≡ Menu'
				    });
					$main_menu.hide();
				}
			}
			else {
				// reset menu responsive
				$main_menu.show();
				$("#tiny-menu").hide();
				$main_menu.removeClass('menu-responsive');
				//-------------------------------------------
			}
		}
		//Call function responsive()
		menu_responsive();
	    $(window).resize(function() {
			menu_responsive();
		});
	});
});
})(jQuery, Drupal, this, this.document);