/**
*  Js Function by themeskiteam
 */

(function($) {
  //Add placeholder to text field
	$.fn.placeHolder = function(var1){
		$(this).attr('placeholder',Drupal.t(var1));
		$(this).parents(".form-item").find("label").hide();
	};
  	// Add makup to creat effect 3D for item menu when hover | Demo: http://dev-umbilics.gotpantheon.com/
	$.fn.gp_menu_makup = function(){
		$(this).each(function(index) {
			$(this).html($(this).text() + '<span aria-hidden="true" class="three-d-box"><span class="front-menu">'+$(this).text()+'</span><span class="back-menu">'+$(this).text()+'</span></span>');
		})
	};
	/* Auto grid & responsive */
  	$.fn.tk_autogrid = function(small_grid, medium_grid, large_grid){
  		$(this).each(function(index){
		    var num_large_grid = $(this).children("li").length;
	    	if( num_large_grid != 0) {
	  			var num_small_grid = 1;
	  			var num_medium_grid = 2;
	  			if(small_grid) {
	  				num_small_grid = small_grid;
	  				num_medium_grid = small_grid;
	  			}
	  			if(medium_grid) {
	  				num_medium_grid = medium_grid;
	  			}
	  			if(large_grid) {
	  				num_large_grid = large_grid;
	  			}
		    	var class_grid = "small-block-grid-"+num_small_grid+ " " + "medium-block-grid-"+num_medium_grid+ " " + "large-block-grid-" + num_large_grid;
	    		$(this).addClass(class_grid);
	    	}	
  		})
  	};

  	/* Cloud Animation (using in Quintic*/
	$.fn.tk_cloud = function () {
		$(this).animate( {"left": "+=20px"}, 3000, "linear", $.fn.tk_cloud )
		$(this).animate( {"left": "-=20px"}, 3000, "linear", $.fn.tk_cloud );
	}

	/* Add Animate when scrool*/
	/*Them class co san de tao hieu ung khi scroll den 
		Get class at here: http://daneden.github.io/animate.css/
		or: http://www.justinaguilar.com/animations/index.html
	*/
	$.fn.tk_scroll_animate = function(animate) {
		var $effect = $(this);

		var height = window.innerHeight || document.documentElement.clientHeight;
		$effect.each(function(index){
			var thisTop = $(this).offset().top;
			var thisHeight = $(this).height()/3;
			if(thisTop+thisHeight > height){
				$effect.css("opacity","0");
			}
		})
		$(window).scroll(function(){
			$effect.each(function(index){
				var topOfWindow = $(window).scrollTop();
				var topOffset = $(window).height();
				var thisTop = $(this).offset().top;
				var thisHeight = $(this).height()/3;
				if(thisTop+thisHeight < topOfWindow+topOffset) {
		            $(this).delay(index*200).queue(function(){
						$(this).css("opacity","1");
						$(this).addClass(animate);
		            });
				}
			})
		})
	}

	/* Basic Parallax */
	$.fn.tk_parallax = function(item) {
		$(this).each(function(index){
			$(window).scroll(function(){
				var Pos = -(($(window).scrollTop() - $(this).offset().top) / $(this).data('speed'));
				var coords = '50% ' + Pos+"px";
				$(this).css({backgroundPosition: coords});
			})
			if(item) {
				item = item;
			}
			else {
				item = ".tk-para-item";
			}
			$(this).find(item).each(function(index){
				$(window).scroll(function(){
					var item_speed = $(this).data("speed");
					if(item_speed != 1) {
						var PosItem = -(($(window).scrollTop() - $bgobj.offset().top) * item_speed);
						$item.css({ "margin-top": posItem + "px" });
					}
				})
			})
		})
	}
  	/* Menu-responsive Select */
  	$.fn.tk_res_menu_select = function(options){
  		// Default settings
	    var settings = $.extend({
	      'menu_position' : 'left', // String: Set position of menu in responsive "left"/"right"
	      'logo_width' : '33%', // String: Specify text for "header" and show header instead of the active item
	      'label'  : '' // String: sets the <label> text for the <select> (if not set, no label will be added)
	    }, options);
  	};

  	/// 
  	$.fn.tk_fix_order = function(count) {
  		$(this).css({ 
  			'position':'relative',
  			'width':'100%'
  		});
  		var width_item = parseFloat(100/count);
  		$(this).children().css({ 
  			'width':+ width_item +'%',
  			'position':'absolute',
  		});
  		var all_item = $(this).children().length;
		var arr_height_count = new Array();
		for ( var i = 1; i <= count; i++ ) {
			arr_height_count[i] = 0;
		}
		$(this).children().each(function(index){ 
  			var index_item = $(this).index() + 1;
  			var n = parseInt(index_item/count);
  			if(index_item%count == 0){
  				n = n - 1 ;
  			}
  			for ( var i = 1; i <= count; i++ ) {
  				if((count*n) + i == index_item){
  					$(this).css({ 
			  			'left':+ ((i - 1)*width_item )+'%',
			  			'top': + arr_height_count[i]  + 'px'
			  		});
			  		arr_height_count[i] = arr_height_count[i] + $(this).outerHeight(true);
  				}
  			}
  		});
  		var max_arr = 0;
  		for ( var i = 1; i <= count; i++ ) {
  			if(arr_height_count[i] > max_arr){
  				max_arr = arr_height_count[i];
  			}
  		}
  		$(this).css({ 
  			'height': + max_arr + 'px'
  		});

  	}
  
  	////

})(jQuery);

	/* Lighten and Dacken Color */ //See more: http://css-tricks.com/snippets/javascript/lighten-darken-color/
function LightenDarkenColor(col, amt) {

    var usePound = false;
  
    if (col[0] == "#") {
        col = col.slice(1);
        usePound = true;
    }
 
    var num = parseInt(col,16);
 
    var r = (num >> 16) + amt;
 
    if (r > 255) r = 255;
    else if  (r < 0) r = 0;
 
    var b = ((num >> 8) & 0x00FF) + amt;
 
    if (b > 255) b = 255;
    else if  (b < 0) b = 0;
 
    var g = (num & 0x0000FF) + amt;
 
    if (g > 255) g = 255;
    else if (g < 0) g = 0;
 
    return (usePound?"#":"") + (g | (b << 8) | (r << 16)).toString(16);
  
}

//The magic code to add show/hide custom event triggers
(function ($) {
  $.each(['show', 'hide'], function (i, ev) {
    var el = $.fn[ev];
    $.fn[ev] = function () {
      this.trigger(ev);
      return el.apply(this, arguments);
    };
  });
})(jQuery);


(function ($) {
	Drupal.behaviors.viewsInfiniteScroll = {
	    attach: function (context, settings) {
	      $(function(){
	        var $container = $('div.autopager div.view-content');
	        $container.imagesLoaded( function(){
	          $container.infinitescroll({
	            navSelector  : '.autopager .pager',    // selector for the paged navigation
	            nextSelector : '.autopager .pager-next a',  // selector for the NEXT link (to page 2)
	            itemSelector : '.autopager .view-content',
	            behavior: 'twitter',     // selector for all items you'll retrieve
	            loading: {
	              finishedMsg: 'No more pages to load.',
	              img: Drupal.settings.basePath + 'sites/all/themes/modula/themeski-assets/images/loading2.gif'
	              //img: Drupal.settings.basePath + 'profiles/themeski/themes/modula/themeski-assets/images/loading2.gif'
	            }
	        })
	    })

	      	$(window).unbind('.infscr');
		    // hook up the manual click guy.
		    $('.pager-next a').click(function(){
		      $(document).trigger('retrieve.infscr');
		      return false;
		    });
		    // remove the paginator when we're done.
		    $(document).ajaxError(function(e,xhr,opt){
		      if (xhr.status == 404) $('.pager-next a').remove();
		    });
	  });
	  }
	};
})(jQuery);