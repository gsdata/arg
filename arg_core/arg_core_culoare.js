(function ($) {
  Drupal.behaviors.arg_core_colorpicker = {
    attach: function(context) {
      $(".edit-culoare-colorpicker").live("focus", function(event) {
        var edit_field = this;
        var picker = $(this).closest('div').parent().find(".culoare-colorpicker");
        
        // Hide all color pickers except this one.
        $(".culoare-colorpicker").hide();
        $(picker).show();
        $.farbtastic(picker, function(color) {
          edit_field.value = color;
        }).setColor(edit_field.value);
      });
    }
  }
})(jQuery);