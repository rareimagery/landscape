
/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(window).load(function(){
	$(document).ready(function() {
		// Add javascript placeHolder =================================================
		$('#search-block-form .form-text').placeHolder("Search...");
		$('.group-options .menu-options .form-item .form-text').placeHolder("width...");
		$('.block-newsletter-2 .form-subscribe .form-text').placeHolder("Your Email...");

		// topbar menu js
		$(".toggle-topbar ").click( function(){
			$(this).parents(".top-bar").find(" > ul.menu").slideToggle();
			$(".block-user-login ").removeClass("active");
		});

		function themeski_custom(){
			/**
			 * Fix js resize for all Views slider, Views jcarousel
			 */
			 var height_item = 0;
			 $(".view-testimonial .views-slideshow-cycle-main-frame-row-item").each(function(index){
			 	var height_items = $(this).outerHeight(true);
			 	if(height_items > height_item){
			 		height_item = height_items;
			 	}
			 });
			 $(".view-testimonial .views-slideshow-cycle-main-frame").css("height", height_item);
			 $(".view-testimonial .views-slideshow-cycle-main-frame-row").css("height", height_item);


			/*Custom for scrollbar (note: it only working with element visible) */
			$(".block-shopping-cart .view-commerce-cart-block .view-content .views-table tbody").mCustomScrollbar({
			   theme:"dark",
			   scrollButtons:{
			    enable:true,
			   }
			});
			// js jcarousel 
			$('.block-slide-portfolio .portfolio-list').jcarousel({
			   auto: 3,
			   visible: 3,
			   scroll: 1,
			   wrap: 'both',
			   animation: 'slow',
			  });
			
			/**
			 * jQuery Hide/Show Block Shopping Cart
			 */
			$('.view-commerce-cart-block .line-item-quantity-label').text('Shoping bag');
			if ($('.block-shopping-cart .cart-contents .line-item-quantity').text() != '') {
				$('.block-shopping-cart .view-commerce-cart-block .view-content').hide();//Set Default hidden Cart
			} else {
				var appen_element = '<div class="line-item-quantity"><span class="line-item-quantity-raw">0</span> <span class="line-item-quantity-label">Shoping bag</span></div>'
				$('.block-shopping-cart .block-inner .cart-empty-block').before(appen_element);
				$('.block-shopping-cart .block-inner .cart-empty-block').hide();
			}
			/**
			 * Click Item Quanlity
			 */
			$('.block-shopping-cart .block-inner .block-title').click(function(){
				$(".top-bar > .menu").hide();
				if ($('.block-shopping-cart .view-commerce-cart-block .view-content').is(':hidden')) {
					$('.block-shopping-cart .view-commerce-cart-block .view-content').show();
				} else {
					$('.block-shopping-cart .view-commerce-cart-block .view-content').hide();
				}
			});
			$('.block-shopping-cart .block-inner .view-header').click(function(){
				
				if ($('.block-shopping-cart .view-commerce-cart-block .view-content').is(':hidden')) {
					$('.block-shopping-cart .view-commerce-cart-block .view-content').show();
				} else {
					$('.block-shopping-cart .view-commerce-cart-block .view-content').hide();
				}
			});

			/**
			 * Items Quanlity equal 0
			 */
			$('.block-shopping-cart .block-inner ').click(function(){
				$("#toboggan-login").hide();
				$(".top-bar > .menu").hide();
				if ($('.block-shopping-cart .block-inner .cart-empty-block').is(':hidden')) {
					$('.block-shopping-cart .block-inner .cart-empty-block').show();
				} else {
					$('.block-shopping-cart .block-inner .cart-empty-block').hide();
				}

	            $(".block-social").removeClass('active');
	            $(".block-user-login").removeClass('active');
	            $(".gpmenu").removeClass('active');
	            $(".block-search").removeClass('active');
			});
			$(".block-user-login .toboggan-login-link-container .toboggan-login-link").click(function(){
				$('.block-shopping-cart .block-inner .cart-empty-block').hide();
				$('.block-shopping-cart .view-commerce-cart-block .view-content').hide();
				$(".top-bar > .menu").hide();
			});


			// Fillter Landing page
			$(".block-list-themes .list-text a").click(function(){
				$(".block-list-themes .list-text a").removeClass("active");
				$(this).addClass("active");
				var $container = $('.list-image');
				if($(this).hasClass("business")){
					$container.isotope({ filter: '.business' });
				}
				if($(this).hasClass("shop")){
					$container.isotope({ filter: '.shop' });
				}
				if($(this).hasClass("publishing")){
					$container.isotope({ filter: '.publishing' });
				}
				if($(this).hasClass("all")){
					$container.isotope({ filter: '*' });
				}
			});

			$('#da-thumbs > li ').each( function() { $(this).hoverdir(); });


			// menu one page
			var height_menu_onepage = $("#admin-menu").outerHeight(true);
			$(".page-node-140,.page-node-136",".l-header").css("top",height_menu_onepage);
			$( "#main-menu ul.menu li a" ).wrapInner( "<span></span>" );
			$( ".menu-onepage ul.menu li a" ).wrapInner( "<span></span>" );

			// Menu magazine
			jQuery('.block-menu-menu-stacked-menu .menu').spasticNav();

			// Add javascript Back To Top =============================================================

			//Check to see if the window is top if not then display button
			$(window).scroll(function(){
				if ($(this).scrollTop() > 100) {
					$('#bttop').fadeIn();
				} else {
					$('#bttop').fadeOut();
				}
			});
			
			//Click event to scroll to top
			$('#bttop').click(function(){
				$('html, body').animate({scrollTop : 0},800);
				return false;
			});


			// Add javascript Auto Grid ===============================================================
		    $(".tkjs--auto-grid").tk_autogrid();

		   
		    // Add javascript Equaheight =============================================================
		    $('.page-node-94 #menu-icon').show();
		    $(".no-sidebars .main").css("min-height","inherit");
		    $(".page-node-74 .main ").css("min-height","inherit");
			$(".page-node-70 .main ").css("min-height","inherit");
			$(".block-service-2 .group-content ul li .people-content-wrapper").equalHeight();


			// Add javascript Menu Icon ==============================================================
			
			$(".page-node-137 .page").addClass("icon-menu");
			$(".page-node-137 .l-header .row").css("display","none");
			$(".page-node-137 .top-bar .toggle-topbar").css("display","block");
			$(".page-node-137 .l-header .row").removeClass("hide-for-small");
			$(".page-node-137 .l-header-top .contain-to-grid").removeClass("show-for-small");

			// js Remove styl in mdslider
			// $(".md-objects .md-object").removeAttr("style");
			// $(".md-objects ").removeAttr("style");


			// Add javascript Load More ==============================================================
			$(".style-timeline .pager .pager-next  a").text("Load More");
			$(".style-timeline .pager .pager-previous").hide();
			$(".style-timeline .pager .pager-next  a").click(function(){
				$(this).parents(".style-timeline").find(" > .view-content").addClass("active");
			});

			// learn more landing page
			if($(".block-cta").length ){
				var offset_top_cta = $(".block-cta").offset().top;
				$(".block-md-slider-3 .md-object.md-layer-9-0-7 a").click(function(){
					$('html, body').animate({
						scrollTop: offset_top_cta
					}, 900);
					return(false);
				});
			}
			
			// custom 
				var $img_author = $(".field-name-ds-block-author-publish .view-content .field-name-field-author-avatar img");
				if($img_author.length != 0){
					$img_author.parents(".view-content").find(".group-content-right").addClass("with_image");
				}

			$(".view-magazine-category .magazine-post--list .magazine-post--item").equalHeight();
			$(".block-cta-home-softweare .cta__button").hover(
				function(){
					$(this).addClass("animalButton");
				},function(){
					isthis =$(this);
				 	isthis.removeClass("animalButton");
				}
			);
		}

	    // Variable for responsive js
	    var $small_1 = 479;
	    var $small = 640;
	    var $medium = 1025;
	    var $mobile = 480;
	    var $tablet = 768;
	    // js copy code
		
	    // Convert Quicktabs to Accordion on mobile
		function tkresponsive(){
			var width = window.innerWidth || document.documentElement.clientWidth;

			 // Add javascript Effect ==================================================================	    
			// overide js quicktab
			$('.view-shortcode .vertical-tabs > section').addClass('active');
				// add js for services
				$(".services-small-icon > [class*='services-small-icon']").each(function (index){
					$(this).find('.title').equalHeight();
					$(this).find('.title').Height();
				});
			$('.view-shortcode .vertical-tabs > section').removeClass('active');
			$('.view-shortcode .vertical-tabs > section:first-child').addClass('active');
			
			// Add equal height for Content , sidebar for devices has width >= 1024px . Ex:
			if(width > $medium){
				if($(".no-sidebars").length == 0) {
					$(".l-main").children(".row").children(".columns").equalHeight();
					$(".l-footer-columns").children(".row").children(".columns").equalHeight();
				}				
				$(".page-blog .l-main  > .row").equalHeight();
				// block client front page
				$('.testimonial--list').jcarousel({
					auto: 3,
					visible: 5,
					scroll: 1,
					wrap: 'both',
					animation: 'slow',
				});

				$('.view-portfolio-list-1 .portfolio-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});

				$('.block-jcarousel-images .image-list').jcarousel({
				   auto: 3,
				   visible: 4,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
				$('.portfolio-related-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});

				//Add animate into scroll block class flow struc:  themeski-scroll-nameanimate ==================================================
			   // See more nameanimate at: http://daneden.github.io/animate.css/
			    $("[class*='themeski-scroll']").addClass("animated");
				function animated_contents() {
					$(".animated:appeared").each(function (i) {
				    	var $classef = $(this).attr('class').split(/\s+/);
						var $effect = "";
				    	$.each( $classef, function(index, item){
						    if (item.indexOf("themeski-scroll")!= -1) {
						    	$effect = item.split("-")[2];
						    }
						});
						var $this    = $(this),
							animated = $effect;

						setTimeout(function () {
							$this.addClass(animated);
						}, 200 * i);
					});
				}
				animated_contents();
				$(window).scroll(function () {
					animated_contents();
				});


			}
			else if (width > $tablet) {
				if($(".no-sidebars").length == 0) {
					$(".l-main").children(".row").children(".columns").css("min-height","inherit");
					$(".l-footer-columns").children(".row").children(".columns").css("min-height","inherit");			
				}

				$(".l-footer-columns .footer-item .block" ).equalHeight() ;
				$(".block-off-selected-line ul.line-wrapper li.line-item").equalHeight();

				// block client front page
				$('.testimonial--list').jcarousel({
					auto: 3,
					visible: 4,
					scroll: 1,
					wrap: 'both',
					animation: 'slow',
				});

				$('.block-jcarousel-images .image-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
				$('.portfolio-related-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
				$('.view-portfolio-list-1 .portfolio-list').jcarousel({
				   auto: 4,
				   visible: 4,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});


			}
			// Add equal height for Content , sidebar for devices has width < 1024px >= 640.
			else if(width > $small){
				if($(".no-sidebars").length == 0) {
					$(".l-main").children(".row").children(".columns").css("min-height","inherit");
					$(".l-footer-columns").children(".row").children(".columns").css("min-height","inherit");				
				}

				$(".l-footer-columns .footer-item .block" ).equalHeight() ;
				//$(".l-footer-columns .footer-item" ).equalHeight() ;
				$(".block-off-selected-line ul.line-wrapper li.line-item").equalHeight();
				// block client front page
				$('.testimonial--list').jcarousel({
					auto: 3,
					visible: 4,
					scroll: 1,
					wrap: 'both',
					animation: 'slow',
				});

				$('.view-portfolio-list-1 .portfolio-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});

				$('.block-jcarousel-images .image-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
				$('.portfolio-related-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});

				$('.portfolio-related-list').jcarousel({
				   auto: 3,
				   visible: 3,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
			}

			// Add equal height for Content , sidebar for devices has width < 640.
			else {
				$(".l-main").children(".row").children(".columns").css("min-height","inherit");
				// block client front page
				$('.testimonial--list').jcarousel({
					auto: 2,
					visible: 2,
					scroll: 1,
					wrap: 'both',
					animation: 'slow',
				});
				$('.view-portfolio-list-1 .portfolio-list').jcarousel({
				   auto: 2,
				   visible: 2,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});

				$('.block-jcarousel-images .image-list').jcarousel({
				   auto: 2,
				   visible: 2,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
				$('.portfolio-related-list').jcarousel({
				   auto: 2,
				   visible: 2,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
			}

			
			if (width <= $small & width >= 480) {
				$('.testimonial--list').jcarousel({
					auto: 2,
					visible: 3,
					scroll: 1,
					wrap: 'both',
					animation: 'slow',
				});
			}
			if (width >= 360) {
				$(".block-view-more-category .magazine-post--list .magazine-post--item").equalHeight();
			}
			
			if (width <= $medium) {///js active menu and search for responsive
				if(!$(".sidebar > .block-search").length){
					$("#search-block-form").before('<div id="search-icon">Search</div>');
					$("#search-icon").click(function(){
						$(this).parents(".block-search").toggleClass("active");
							$(".top-bar > .menu").hide();
							$(".block-social").removeClass('active');
							$(".block-user-login").removeClass('active');
					});
				}

				$(".block-social .block-inner").before('<div id="social-icon">Search</div>');
				$("#social-icon").click(function(){
						$(this).parent(".block-social").toggleClass("active");
						$(".top-bar.expanded > .menu").hide();
						$(".block-search").removeClass('active');
						$(".block-user-login").removeClass('active');
				});

				$(".block-user-login .block-inner").before('<div id="login-icon">Login</div>');
				$("#login-icon").click(function(){
						$(this).parent(".block-user-login").toggleClass("active");
						$(".top-bar > .menu").hide();
						$(".block-search").removeClass('active');
						$(".block-social").removeClass('active');
						$(".cart-empty-block").hide();
				});

				$(".menu-icon").click( function(){
						$(".block-search").removeClass('active');
						$(".block-social").removeClass('active');
						$(".user-login-block").hide();
						$(".cart-empty-block").hide();
				});

				$("#tiny-menu").click( function(){
						$(".block-search").removeClass('active');
						$(".block-social").removeClass('active');
						$(".block-user-login").removeClass('active');
				});
				
			}
			if(width > 640 && width <= 1024){
				var left_image_last = parseInt($(".md-layer-9-0-4").css("left"));
				var width_image_last = $(".md-layer-9-0-4 img").width();
				var width_button_outer = $(".md-layer-9-0-11 a").outerWidth();
				var left_button_big = left_image_last + width_image_last - width_button_outer;
				//console.log("left image " + left_image_last + " width image " + width_image_last + " left_button_big " + left_button_big + "sd" + width_button_outer);
				$(".md-layer-9-0-11").css("left", left_button_big + "px");
			}

			if(!$('no-sidebars').length ) {
				$(".l-main").children(".row").children(".columns").css("min-height","inherit");
			}
			// page blog-2
			if(width >= 480 && width < 768){
				$('.fix-order-blog-post-3').tk_fix_order(2);
				$('.fix-order-blog-post-2').tk_fix_order(2);
				
			}
			if(width >= 768 &&  width < 1023){
				$('.fix-order-blog-post-2').tk_fix_order(2);
			}
			if(width >= 1024){
				$('.fix-order-blog-post-2').tk_fix_order(3);
			}
			// page blog-4
			if(width >= 480){
				$('.fix-order-blog-post-4').tk_fix_order(2);
				
				if(width > 1024){
					$(".l-main").children(".row").children(".columns").css("min-height","inherit");
				}
			}
			if(width < 480){
				$('.portfolio-related-list').jcarousel({
				   auto: 1,
				   visible: 1,
				   scroll: 1,
				   wrap: 'both',
				   animation: 'slow',
				});
			}	
			if(width < 640){
				// filter shoes page
				$(".page-shoes .block-facetapi").equalHeight();
			}
			// override min height
			$(".page-blog-timeline .l-main").children(".row").children(".columns").css("min-height","inherit");

			$(window).scroll(function(){
		    	if(width > 640){
					//parallax for onepage  'effect-parallax-block'
					$('.section-one-page .page .effect-parallax-block').each(function(index){
					var offset_parallax = $(this).offset().top;
						var Pos = -(($(window).scrollTop() - offset_parallax) / 5);
						var coords = '50% ' + Pos+"px";
						$(this).css({'background-position':coords});
						//$(this).css({backgroundPosition: '50% 10px'});
						//console.log(coords);
					});
				}
			});	
		}		
		function themeski_fix_footer(){
			// Add javascript Fix Footer Bottom =======================================================
			var height_page = $(".page").outerHeight(true);
			var height_footer = $(".l-footer").outerHeight(true);
			var height_window = $(window).height();
			$(".page").css("padding-bottom",height_footer);
			if(height_window > height_page){
				$(".page").css("position","inherit");			
			}
	    }	
		//Call function responsive()
		themeski_custom();
		tkresponsive();
		themeski_fix_footer();
	    $(window).resize(function() {
	    	themeski_custom();
			tkresponsive();
			themeski_fix_footer();
		});

		$( ".isotop-filter ul li a.active" ).trigger('click');
		
	});

	
});
})(jQuery, Drupal, this, this.document);
