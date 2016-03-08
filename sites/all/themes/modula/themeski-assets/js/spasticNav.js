

(function(jQuery) {

	jQuery.fn.spasticNav = function(options) {
	
		options = jQuery.extend({
			overlap : 20,
			speed : 300,
			reset : 500,
			//color : '#fff'
			//easing : 'easeOutExpo'
		}, options);
	
		return this.each(function() {
		
		 	var nav_menu = jQuery(this),
		 		currentPageItem = jQuery('li.first', nav_menu),
		 		blob,
		 		reset;
		 		
		 	jQuery('<li class="blob"></li>').css({
		 		width : currentPageItem.outerWidth(),
		 		left : currentPageItem.position().left,
		 		backgroundColor : options.color
		 	}).appendTo(this);
		 	
		 	blob = jQuery('.blob', nav_menu);
		 	
			jQuery('li:not(.blob)', nav_menu).hover(function() {
				// mouse over
				clearTimeout(reset);
				blob.animate(
					{
						left : jQuery(this).position().left,
						width : jQuery(this).width()
					},
					{
						duration : options.speed,
						easing : options.easing,
						queue : false
					}
				);
			}, function() {

				// mouse out	
				reset = setTimeout(function() {
					blob.animate({
						width : currentPageItem.outerWidth(),
						left : currentPageItem.position().left
					}, options.speed)
				}, options.reset);
	
			});
		
		}); // end each
	
	};

})(jQuery);