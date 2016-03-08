(function ($, Drupal, window, document, undefined) {
// Place your code here.
	$(document).ready(function() {
		$(".list-same-icon ").each(function(index){  
			var class_fortawesome= $(this).data('icon');
			$(this).find(' > li ').each(function(index){
				if ($(this).find(' > a ').length) {
					$(this).find(' > a ').prepend('<i class="fa '+class_fortawesome+'">'+class_fortawesome+'</i>');
				}
				else {
					$(this).prepend('<i class="fa '+class_fortawesome+'">'+class_fortawesome+'</i>');
				}
			});
			
		});
		/*var number_list = $('.list-number-1a .aaa').index();
				alert(number_list);*/
		$(".list-number").each(function(index){  
			$(this).find(' > li ').each(function(index){
				var number_list = $(this).index() + 1;
				$(this).prepend('<i>'+number_list+'</i>');
			});
			
		});
	});
})(jQuery, Drupal, this, this.document);