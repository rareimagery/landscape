(function ($, Drupal, window, document, undefined) {
// Place your code here.
	$(document).ready(function() {
		$(".section-same-icon").each(function(index){  
			var class_fortawesome= $(this).data('icon');
			//$(this).find('> section > .title a i').addClass('fa '+class_fortawesome);
			$(this).find('> section > .title a').prepend('<i class="fa '+class_fortawesome+'">'+class_fortawesome+'</i>');
		});
	});
})(jQuery, Drupal, this, this.document);