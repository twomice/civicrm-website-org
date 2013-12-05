(function ($) {
  $(function () {
    $("#slider").slider({
      value: 50,
      min: 10,
      max: 200,
      step: 10,
      slide: function (event, ui) {
        $("#display_amount").val(ui.value);
        $("#amount").val(ui.value);
      }
    });

    $("#display_amount").val($("#slider").slider("value"));
    $("#amount").val($("#slider").slider("value"));
  });
}(jQuery));

