(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(document).ready(function() {
	//$('.label-inside-contact-form .form-text').placeHolder("Search...");
	$('.label-inside-contact-form .form-item').each(function(index){
		var text_label = $(this).find('label').text();
		$(this).find(".form-text,.form-textarea").placeHolder(text_label);
	});
});
})(jQuery, Drupal, this, this.document);