(function($) {
  Drupal.behaviors.tk_page404 = {
    attach: function() {
      var blocks = Drupal.settings.tk_page404.blocks;

      $('#blocks-selected').css('display', 'none');

      $('#edit-block-invoke').change(function() {
        var selected = '';
        $('#block-select').empty();
        $('#edit-block-invoke option:selected').each(function(){ 
          var val = $(this).val();
          if (val != '') {
            selected = selected + ';' + val; 
            $("#block-select").append("<li id='block-"+val+"'>"+blocks[val]+"</li>");
          }
        });

        selected = selected.substring(1);
        $('#blocks-selected').val(selected);
        //alert()
      });

      $("#block-select").sortable({
        stop: function(event, ui) {
          var str = '';
          $("#block-select li").each(function( index ) {
            var val = $(this).attr('id');
            val = val.substring(6);
            str = str + ';' + val;
          });

          str = str.substring(1);
          $('#blocks-selected').val(str);
        }
      });
      $("#block-select").disableSelection();
    }
  };

})(jQuery);