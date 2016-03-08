(function ($, Drupal, window, document, undefined) {
// Place your code here.
$(document).ready(function() {
  function animate_counter() {
    /* Create animate number glows */
    var $counter_number = $(".counter-container");
    var j = [], perc;
    for(var y = 0; y < $(".counter-prec").length; y = y +1) {
      j[y] = 0;
    }
    function GlowCounter() {
      $counter_number.each(function(index){      
        var k = $(this).find(".counter-prec").data('percent');
        var deg = (k*360)/100;
        j[index]++;
        if(j[index]>deg)
          j[index] = deg;
        prec = (100*j[index])/360;  
        $(this).find(".counter-prec").html(Math.round(prec)+"%");  
      })
      setTimeout(GlowCounter, 1);
    }
    GlowCounter();


    /* Create animate Circle*/
    var $circle_container = $(".themeski-counter-circles .counter-container");
    var activeBorder = $(".counter-active-border");
    var background_color = activeBorder.css("background-color");
    //var border_color = LightenDarkenColor(background_color, 70);
    var border_color = "#E2E2E2";

    var i = [];
    for ( var x = 0; x < $(".counter-prec").length; x = x + 1 ) {
      i[x] = 0;
    }
    function SpinCircle(){
      $circle_container.each(function(index){
        var h = $(this).find(".counter-prec").data('percent');
        var degs = (h*360)/100;
        i[index]++;
        if(i[index]>degs)
          i[index] = degs;    
        if (i[index]<=180){
          $(this).find(".counter-active-border").css('background-image','linear-gradient(' + (90+i[index]) + 'deg, transparent 50%, '+border_color+' 50%),linear-gradient(90deg, '+border_color+' 50%, transparent 50%)');
        }
        else{
          $(this).find(".counter-active-border").css('background-image','linear-gradient(' + (i[index]-90) + 'deg, transparent 50%, '+background_color+' 50%),linear-gradient(90deg, '+border_color+' 50%, transparent 50%)');
        }
      });
      setTimeout(SpinCircle, 1);
    }
    SpinCircle();

    /* Create animate Boxes*/
    var $boxes_container = $(".themeski-counter-boxes .counter-container");

    var b = [];
    for ( var z = 0; z < $(".counter-prec").length; z = z + 1 ) {
      b[z] = 0;
    }
    function BoxHeight(){
      $boxes_container.each(function(index){
        var m = $(this).find(".counter-prec").data('percent');
        var height = (m*360)/100;
        b[index]++;
        if(b[index]>height)
          b[index] = height;      
        height_v = (100*b[index])/360;
        $(this).find(".counter-box-bg").css("height",height_v + "%");
      });
      setTimeout(BoxHeight, 1);
    }
    BoxHeight();

    /* Create animate Progress bar*/
    var $bars_container = $(".themeski-counter-bars .counter-container");

    var c = [];
    for ( var w = 0; w < $(".counter-prec").length; w = w + 1 ) {
      c[w] = 0;
    }
    function BarWidth(){
      $bars_container.each(function(index){
        var n = $(this).find(".counter-prec").data('percent');
        var width = (n*360)/100;
        c[index]++;
        if(c[index]>width)
          c[index] = width;      
        width_v = (100*c[index])/360;
        $(this).find(".counter-box-bg").css("width",width_v + "%");
      });
      setTimeout(BarWidth, 1);
    }
    BarWidth();
  }


  /*Call animate counter*/
  animate_counter();


});
})(jQuery, Drupal, this, this.document);
