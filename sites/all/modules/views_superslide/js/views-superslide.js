Drupal.behaviors.views_superslide = {
  attach: function(context) {
    if(Drupal.settings.views_superslide){
      (function ($) {
        $.each(Drupal.settings.views_superslide, function(id) {
          var effect = this.effect;
			    var autoPlay = this.autoPlay;
			    var vis = this.vis;
			    var autoPage = this.autoPage;
			    var trigger = this.trigger;
			    var viewname = this.viewname;
			    var display =this.display;

			    var selector = '#superslide-'+viewname+'-'+display;

			    $(selector+" .bd li").first().before( $(selector+" .bd li").last() );
					$(selector).hover(function(){
						 $(this).find(".arrow").stop(true,true).fadeIn(300) 
						 },function(){ 
						 	$(this).find(".arrow").fadeOut(300) });				
						 $(selector).slide(
						 	{ titCell:".hd ul", mainCell:".bd ul", effect:effect,autoPlay:autoPlay, vis:vis,autoPage:autoPage, trigger:trigger}
						);

        });
      })(jQuery);
    }
  }
};
