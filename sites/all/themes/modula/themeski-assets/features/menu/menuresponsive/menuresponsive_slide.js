(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(window).load(function(){
	$(document).ready(function() {
		function menu_responsive(){
			//Show & Hide #menu-icon
		    // Variable for responsive js
		    var $small = 568;
		    var $medium = 768;
		    var $lagre = 1023;
			var $main_menu = $('#menu-bar > .menu');
			var width = window.innerWidth || document.documentElement.clientWidth;
			if (width <= $lagre) {				
				$("body").mobile_menu({
					menu: ['#menu-bar > .menu'],
		      		menu_width: 200,
		      		prepend_button_to: '#menu-bar'
				});
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