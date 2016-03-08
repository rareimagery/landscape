
(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(window).load(function(){
	$(document).ready(function() {
		if($("#system-theme-settings").length) {
		/* Themesetting layout  */
		/* Side-main-side*/
		$(".s-m-s").append("<div class='l-col-wrapper l-s-m-s'><div id='sms-slider-range'></div><div class='l-side-left-col'></div><div class='l-main-col'></div><div class='l-side-right-col'></div></div>");
		var d_p1_sms = parseInt($('input[name=sms_left]').val());
		var d_p2_sms = d_p1_sms + parseInt($('input[name=sms_main]').val());
		console.log(d_p1_sms+" va "+d_p2_sms);
		$( "#sms-slider-range" ).slider({
			range: true,
			min: 0,
			max: 12,
			values: [ d_p1_sms, d_p2_sms ],
			slide: function( event, ui ) {
				var col_left = ui.values[ 0 ];
				var col_right = 12 - ui.values[ 1 ];
				var col_main = ui.values[ 1 ] - col_left;
				$( ".l-s-m-s .l-side-left-col" ).text( "Left: " + col_left).css("width",col_left/0.12 + "%");
				$('input[name=sms_left]').val(col_left);

				$( ".l-s-m-s .l-main-col" ).text( "Main: " + col_main ).css("width",col_main/0.12 + "%");
				$('input[name=sms_main]').val(col_main);

				$( ".l-s-m-s .l-side-right-col" ).text( "Right: " + col_right ).css("width",col_right/0.12 + "%");
				$('input[name=sms_right]').val(col_right);
			}
		});
		var main = $( "#sms-slider-range" ).slider( "values", 1 ) - $( "#sms-slider-range" ).slider( "values", 0 );
		var right = 12 - $( "#sms-slider-range" ).slider( "values", 1 );
		$( ".l-s-m-s .l-side-left-col" ).text( "Left: " + $( "#sms-slider-range" ).slider( "values", 0 )).css("width",$( "#sms-slider-range" ).slider( "values", 0 )/0.12 + "%");;
		$( ".l-s-m-s .l-main-col" ).text( "Main: " + main).css("width",main/0.12 + "%");;
		$( ".l-s-m-s .l-side-right-col" ).text( "Right: " + right).css("width",right/0.12 + "%");;
		/* Side-side-main*/
		$(".s-s-m").append("<div class='l-col-wrapper l-s-s-m'><div id='ssm-slider-range'></div><div class='l-side-left-col'></div><div class='l-side-right-col'></div><div class='l-main-col'></div></div>");
		var d_p1_ssm = parseInt($('input[name=ssm_left]').val());
		var d_p2_ssm = d_p1_ssm + parseInt($('input[name=ssm_right]').val());
		$( "#ssm-slider-range" ).slider({
			range: true,
			min: 0,
			max: 12,
			values: [ d_p1_ssm, d_p2_ssm ],
			slide: function( event, ui ) {
				var col_left = ui.values[ 0 ];
				var col_right = ui.values[ 1 ] - col_left;
				var col_main = 12 - ui.values[ 1 ];
				$( ".l-s-s-m .l-side-left-col" ).text( "Left: " + col_left).css("width",col_left/0.12 + "%");
				$('input[name=ssm_left]').val(col_left);

				$( ".l-s-s-m .l-main-col" ).text( "Main: " + col_main ).css("width",col_main/0.12 + "%");
				$('input[name=ssm_main]').val(col_main);

				$( ".l-s-s-m .l-side-right-col" ).text( "Right: " + col_right ).css("width",col_right/0.12 + "%");
				$('input[name=ssm_right]').val(col_right);
			}
		});
		var right = $( "#ssm-slider-range" ).slider( "values", 1 ) - $( "#ssm-slider-range" ).slider( "values", 0 );
		var main = 12 - $( "#ssm-slider-range" ).slider( "values", 1 );
		$( ".l-s-s-m .l-side-left-col" ).text( "Left: " + $( "#ssm-slider-range" ).slider( "values", 0 )).css("width",$( "#ssm-slider-range" ).slider( "values", 0 )/0.12 + "%");;
		$( ".l-s-s-m .l-main-col" ).text( "Main: " + main).css("width",main/0.12 + "%");;
		$( ".l-s-s-m .l-side-right-col" ).text( "Right: " + right).css("width",right/0.12 + "%");;

		/* Main-side-side */
		$(".m-s-s").append("<div class='l-col-wrapper l-m-s-s'><div id='mss-slider-range'></div><div class='l-main-col'></div><div class='l-side-left-col'></div><div class='l-side-right-col'></div></div>");
		var d_p1_mss = parseInt($('input[name=mss_main]').val());
		var d_p2_mss = d_p1_mss + parseInt($('input[name=mss_left]').val());
		$( "#mss-slider-range" ).slider({
			range: true,
			min: 0,
			max: 12,
			values: [ d_p1_mss, d_p2_mss ],
			slide: function( event, ui ) {
				var col_main = ui.values[ 0 ];
				var col_left= ui.values[ 1 ] - col_main;
				var col_right = 12 - ui.values[ 1 ];
				$( ".l-m-s-s .l-side-left-col" ).text( "Left: " + col_left).css("width",col_left/0.12 + "%");
				$('input[name=mss_left]').val(col_left);

				$( ".l-m-s-s .l-main-col" ).text( "Main: " + col_main ).css("width",col_main/0.12 + "%");
				$('input[name=mss_main]').val(col_main);

				$( ".l-m-s-s .l-side-right-col" ).text( "Right: " + col_right ).css("width",col_right/0.12 + "%");
				$('input[name=mss_right]').val(col_right);
			}
		});
		var left  = $( "#mss-slider-range" ).slider( "values", 1 ) - $( "#mss-slider-range" ).slider( "values", 0 );
		var right = 12 - $( "#mss-slider-range" ).slider( "values", 1 );
		$( ".l-m-s-s .l-side-left-col" ).text( "Left: " + left ).css("width",left/0.12 + "%");
		$( ".l-m-s-s .l-main-col" ).text( "Main: " + $( "#mss-slider-range" ).slider( "values", 0 )).css("width",$( "#mss-slider-range" ).slider( "values", 0 )/0.12 + "%");
		$( ".l-m-s-s .l-side-right-col" ).text( "Right: " + right).css("width",right/0.12 + "%");



		/* One side bar width */
		$(".l-one-side .fieldset-wrapper").append("<div class='l-col-wrapper l-m-s'><div id='one-slider-range'></div><div class='l-side-left-col'></div><div class='l-main-col'></div></div>");
		var d_p1_one = parseInt($('input[name=w_one_side]').val());
		$( "#one-slider-range" ).slider({
			range: "min",
			min: 0,
			max: 12,
			value: d_p1_one,
			slide: function( event, ui ) {
				var col_left= ui.value;
				var col_main = 12 - col_left;
				$( ".l-one-side .l-side-left-col" ).text( "Left: " + col_left).css("width",col_left/0.12 + "%");
				$('input[name=w_one_side]').val(col_left);

				$( ".l-one-side .l-main-col" ).text( "Main: " + col_main ).css("width",col_main/0.12 + "%");
			}
		});
		var left  = d_p1_one;
		var main = 12 - d_p1_one;
		$( ".l-one-side .l-side-left-col" ).text( "Left: " + left ).css("width",left/0.12 + "%");
		$( ".l-one-side .l-main-col" ).text( "Main: " + main).css("width",main/0.12 + "%");
	}
	});
});
})(jQuery, Drupal, this, this.document);