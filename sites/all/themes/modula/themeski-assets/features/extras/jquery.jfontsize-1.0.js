/*
 * jQuery jFontSize Plugin
 * Examples and documentation: http://jfontsize.com
 * Author: Frederico Soares Vanelli
 *         fredsvanelli@gmail.com
 *         http://twitter.com/fredvanelli
 *         http://facebook.com/fred.vanelli
 *
 * Copyright (c) 2011
 * Version: 1.0 (2011-07-15)
 * Dual licensed under the MIT and GPL licenses.
 * http://jfontsize.com/license
 * Requires: jQuery v1.2.6 or later
 */

(function($){
    $.fn.jfontsize = function(opcoes) {
        var $this=$(this);
        var defaults = {
            btnMinusClasseId: '#jfontsize-minus',
            btnDefaultClasseId: '#jfontsize-default',
            btnPlusClasseId: '#jfontsize-plus',
            btnMinusMaxHits: 10,
            btnPlusMaxHits: 10,
            sizeChange: 2
        };

        if (opcoes){opcoes = $.extend(defaults, opcoes)};

        var limite=new Array();
        var fontsize_padrao=new Array();

        $(this).each(function(i){
            limite[i]=0;
            fontsize_padrao[i];
        });

        $(opcoes.btnMinusClasseId+', '+opcoes.btnDefaultClasseId+', '+opcoes.btnPlusClasseId).css('cursor', 'pointer');

        /* click button A- */
        $(opcoes.btnMinusClasseId).click(function(){
            $(opcoes.btnPlusClasseId).removeClass('jfontsize-disabled');
            $(opcoes.btnDefaultClasseId).removeClass('jfontsize-disabled');
            $.cookie("load_font_size", "1", {expires: 365, path: '/'});
            $this.each(function(i){
                if (limite[i]>(-(opcoes.btnMinusMaxHits))){
                    fontsize_padrao[i]=$(this).css('font-size');
                    fontsize_padrao[i]=fontsize_padrao[i].replace('px', '');
                    fontsize=$(this).css('font-size');
                    fontsize=parseInt(fontsize.replace('px', ''));
                    fontsize=fontsize-(opcoes.sizeChange);
                    fontsize_padrao[i]=fontsize_padrao[i]-(limite[i]*opcoes.sizeChange);
                    limite[i]--;
                    $(this).css('font-size', fontsize+'px');
                    if (limite[i]==(-(opcoes.btnMinusMaxHits))){
                        $(opcoes.btnMinusClasseId).addClass('jfontsize-disabled');
                    }
                }
            })
        });

        /* click button A */
        $(opcoes.btnDefaultClasseId).click(function(){
            $(opcoes.btnMinusClasseId).removeClass('jfontsize-disabled');
            $(opcoes.btnPlusClasseId).removeClass('jfontsize-disabled');
            $.cookie("load_font_size", "0", {expires: 365, path: '/'});
            $this.each(function(i){
                limite[i]=0;
                $(this).css('font-size', 'inherit');
            })
            $(opcoes.btnDefaultClasseId).addClass('jfontsize-disabled');
        });

        /* click button A+ */

        $(opcoes.btnPlusClasseId).click(function(){
            $(opcoes.btnMinusClasseId).removeClass('jfontsize-disabled');
            $(opcoes.btnDefaultClasseId).removeClass('jfontsize-disabled');
            $.cookie("load_font_size", "1", {expires: 365, path: '/'});
            $this.each(function(i){
                if (limite[i]<opcoes.btnPlusMaxHits){
                    fontsize_padrao[i]=$(this).css('font-size');
                    fontsize_padrao[i]=fontsize_padrao[i].replace('px', '');
                    fontsize=$(this).css('font-size');
                    fontsize=parseInt(fontsize.replace('px', ''));
                    if(fontsize < 24) { // gp- stop font-size >= 24px
                        fontsize=fontsize+opcoes.sizeChange;
                        fontsize_padrao[i]=fontsize_padrao[i]-(limite[i]*opcoes.sizeChange);
                        limite[i]++;
                        $(this).css('font-size', fontsize+'px');
                        if(fontsize >= 24) { // gp- disable plus button when font-size >= 24px
                            $(opcoes.btnPlusClasseId).addClass('jfontsize-disabled');
                        }
                    }
                    if (limite[i]==opcoes.btnPlusMaxHits){
                        $(opcoes.btnPlusClasseId).addClass('jfontsize-disabled');
                    }
                }
            })
        });

    };
})(jQuery);

(function ($, Drupal, window, document, undefined) {
$(window).load(function(){
    $(document).ready(function() {
        $('body').jfontsize({
            btnDefaultClasseId: '#jfontsize-default',
            btnPlusClasseId: '#jfontsize-plus',
            btnPlusMaxHits: 5,
            sizeChange: 2
        });
        $('.jfontsize-button').click(function(){
            $.cookie("themeski_font_size", $('body').css('font-size'), {expires: 365, path: '/'});
        })
    });
    if($.cookie("load_font_size") == 1) {
        $("body").css({'font-size': $.cookie("themeski_font_size")});
    }
    if(parseInt($("body").css('font-size')) >= 24) {
        $("#jfontsize-plus").addClass("jfontsize-disabled");
    }
});
})(jQuery, Drupal, this, this.document);