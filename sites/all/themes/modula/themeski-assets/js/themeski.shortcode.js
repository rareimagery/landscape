(function ($, Drupal, window, document, undefined) {
// Place your code here.
  $(window).load(function(){
    $(document).ready(function() {
   	//process copy in the pages shortcode
	$(".copy-example-code ").after('<a class="themeski-copy-button"><span>copy code</span></a>');
	$(".themeski-copy-button").zclip({ 
		path: "http://dev-modula.gotpantheon.com/sites/all/themes/modula/themeski-assets/js/ZeroClipboard.swf",
		copy: function(){
			return $(this).prev().val(); 
		},
		afterCopy: function () {
       		alert(' Copied shortcode to clipboard');
    	}
		
	}); 
	//end
	//process hede and show advance option in the pages shortcode
	if($(".group-shortcode-advanced-option > .shortcode-body").length || 
	   $(".group-shortcode-advanced-option > .shortcode-markup").length ||
	   $(".group-shortcode-advanced-option > .field-collection-container > .shortcode-object *").length ||
	   $(".group-shortcode-advanced-option > .field-collection-container > .shortcode-classification *").length 
		){
		$('.group-shortcode-advanced-option').before('<div class="themeski-advance"><a class="themeski-advance-click"><span class="text-show">Show Advanced Options</span><span class="text-hide">Hide Advanced Options</span></a><div>');
	}
	$('.group-shortcode-advanced-option').css('display','none');
	var width = window.innerWidth || document.documentElement.clientWidth;
	if(width >= 1024){
		$(".l-main").children(".row").children(".columns").css({'min-height':'inherit'});
		$(".l-main").children(".row").children(".columns").equalHeight();
	}
	$(".themeski-advance-click").click(function(){
		$(".group-shortcode-advanced-option").toggleClass("active");
		$(".themeski-advance").toggleClass("active");
	});
	//end
	/*function tk_shortcode_responsive(){
		var width = window.innerWidth || document.documentElement.clientWidth;
		if(width >= 1024){
			
		}
	}
	tk_shortcode_responsive();
	$(window).resize(function() {
		tk_shortcode_responsive();

	});*/
   });
  });
})(jQuery, Drupal, this, this.document);