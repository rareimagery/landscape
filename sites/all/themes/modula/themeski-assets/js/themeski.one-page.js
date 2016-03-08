(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(window).load(function(){
	$(document).ready(function() {
		var width = window.innerWidth || document.documentElement.clientWidth;

		// fix height img
		function themeski_fix_onepage(){
			if(width > 1024){
				var height_window = $(window).height();
				var width_img_onepage = $(".block-feature-1 .background-img-one-page img").width();
				$(".block-feature-1 .background-img-one-page img").css({"height":height_window,"width": "auto"});
			}
			if(width < 1024){
				var height_menu_onepage = $(".node-type-one-page .top-bar ").outerHeight(true);
				$(".node-type-one-page  .page").css("padding-top",height_menu_onepage + "px");
			}
		}
	    //menu onepage
	   
		themeski_fix_onepage();
	    $(window).resize(function() {
	    	themeski_fix_onepage();
		});

			   
	    if($(".section-one-page").length){
	    	 //var 
	    	var menu_item_link = $(".menu-onepage ul.menu li a" );
		    var menu_item = $(".menu-onepage ul.menu li" );
		    var height_fix_scroll = $(".l-header").outerHeight(true);
		    var region_menu = $('.node-type-one-page .l-header');
		 
	    	//reponsive for menu onepage

			if(width < 1024 ){
				var html_menu_onepage = $(".menu-onepage .menu").html();
				$('.l-header-top .top-bar').append('<ul class="menu ">'+ html_menu_onepage + '<ul>');
				$('.l-header-top .top-bar').addClass('menu-onepage ');
				$('.l-header-top ').addClass('fixed');
				$('.block-menu-onepage').remove();
				menu_item_link = $(".l-header-top .menu-onepage ul.menu li a" );
				menu_item = $(".l-header-top .menu-onepage ul.menu li" );
				region_menu = $('.node-type-one-page .l-header-top');
				height_fix_scroll = $(".l-header-top").outerHeight(true);
				
				menu_item_link.click(function () {
					$('.l-header-top .menu-onepage').removeClass('expanded');
							
				});
				
			}

			//end
		    var top_offset_empty = height_fix_scroll ;
		    var margin_top_admin_menu = parseFloat($('.admin-menu ').css('margin-top'));
			if($(".admin-menu").length) {
				top_offset_empty = top_offset_empty + margin_top_admin_menu;
			}

			//onepage menu process load menu
			var href_url = window.location.href;
			var res_url = href_url.split("#");
			var id_block_url = "#" + res_url[1];
			$('.section-one-page.admin-menu .page').css({'padding-top':+(height_fix_scroll )+'px'});
			menu_item_link.removeClass("active");
			menu_item_link.removeClass("active-1");
			menu_item.each(function(index){
				var href_a_menu = $(this).children().attr('href');
				var res_a_menu = href_a_menu.split("#");
				var id_block_menu = "#" + res_a_menu[1];
				if(id_block_menu == id_block_url){
					$(this).children().addClass("active-1");
				}
			});
			if(id_block_url != "#undefined"){
				var scroll_top_url = $(id_block_url).offset().top;
				top_offset = scroll_top_url - top_offset_empty + 0.5;
				$('html, body').animate({
					scrollTop: top_offset
				}, 900);
			}
			menu_item_link.removeClass("active");
			menu_item_link.removeClass("active-1");
			menu_item.each(function(index){
				var href_a_menu = $(this).children().attr('href');
				var res_a_menu = href_a_menu.split("#");
				var id_block_menu = "#" + res_a_menu[1];
				if(id_block_menu == id_block_url){
					$(this).children().addClass("active-1");
				}
			});
			if(id_block_url == "#undefined"){
				menu_item_link.removeClass("active");
				menu_item_link.removeClass("active-1");
			}
			//onepage menu process click menu
			menu_item_link.click(function () {
				var href_a = $(this).attr('href'); 
				var res = href_a.split("#");
				var id_block = "#" + res[1];
				var scroll_top = $(id_block).offset().top;
				menu_item_link.removeClass("active");
				menu_item_link.removeClass("active-1");
				$(this).addClass("active-1");
				$('html, body').animate({
					scrollTop: scroll_top - top_offset_empty + 0.5
				}, 900);
				
			});
		
			//end
			//Evernt click buttons scroll next
			$(".scroll-next").click(function(){
				var target = $(this).data("target");
				var scroll_top = $("#"+target).offset().top;
				$('html, body').animate({
					scrollTop: scroll_top - top_offset_empty + 0.5
				}, 900);
				return false();
			})



			//scroll onepage
			var arr_item_menu = new Array();
			var arr_item_scroll = new Array();
			menu_item_link.each(function(index){			
				var href_a = $(this).attr('href'); 
				var res = href_a.split("#");
				if(res[1]) {
					arr_item_menu[index] = "#" + res[1];
				}
				else {
					arr_item_menu[index] = "body";
				}
			})
			var arr_i;
			var arr_j;
			var arr_h;
			var arr_item_menu_active;
			
			for (arr_i = 0; arr_i < arr_item_menu.length; ++arr_i) {
				if($(arr_item_menu[arr_i]).length) {
					arr_item_scroll[arr_i] = $(arr_item_menu[arr_i]).offset().top - top_offset_empty;
				}
			}

			$(window).scroll(function(){
				var block_active_scroll;
				var block_active;
				var scroll_top;
				scroll_top = $(window).scrollTop() ;			
				for (arr_j = 0; arr_j < arr_item_scroll.length; ++arr_j) {
					if(scroll_top >= (arr_item_scroll[arr_j] - 1.5)) {
						block_active_scroll = arr_item_scroll[arr_j];
						block_active = arr_item_menu[arr_j];
					}
				}					
			
				menu_item_link.removeClass("active");
				menu_item_link.removeClass("active-1");
				menu_item_link.each(function(index){			
					var href_a = $(this).attr('href'); 
					var res = href_a.split("#");
					if(res[1]) {
						arr_item_menu_active = "#" + res[1];
					}
					else {
						arr_item_menu_active = ".section-features";
					}
					if(arr_item_menu_active == block_active){
						$(this).addClass("active-1");
					}
				})

				if(scroll_top < 50 && !$(".admin-menu").length && !$(".page-node-140,.page-node-136").length ){
					region_menu.css({'top':+(-(height_fix_scroll + 2))+'px'});
				}else{
					region_menu.css({
						'top':'0px',
						'opacity':'1'
					});
				}
				if(scroll_top < 50 && $(".admin-menu").length && !$(".page-node-140,.page-node-136").length){
					region_menu.css({'top':+(-(height_fix_scroll + margin_top_admin_menu + 2 ))+'px'});
				}else{
					region_menu.css({
						'top':+ margin_top_admin_menu +'px',
						'opacity':'1'
					});
				}
			});


	
		}

		
	//end
	});
});
})(jQuery, Drupal, this, this.document);