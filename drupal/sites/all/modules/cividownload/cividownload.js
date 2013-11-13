(function ($) {
  $(function () {
    $("#slider").slider({
      value: 50,
      min: 10,
      max: 200,
      step: 10,
      slide: function (event, ui) {
        $("#display_amount").val("$" + ui.value);
        $("#amount").val(ui.value);
      }
    });
    $("#display_amount").val("$" + $("#slider").slider("value"));
    $("#amount").val($("#slider").slider("value"));

    $('#is_donate').click(function () {
      if ($(this).attr('checked')) {
        $('.donate-download').addClass('crm-hidden');
        $('.download-only').removeClass('crm-hidden');
      }
      else {
        $('.download-only').addClass('crm-hidden');
        $('.donate-download').removeClass('crm-hidden');
      }
    });

    $(".crm-input").click(function () {
      var downloadURL = $('#download-link').attr('href');
      window.open(downloadURL, 'pop-id','toolbar=0,scrollbars=0,location=0,statusbar=0,menubar=0,resizable=0,width=640,height=420,left = 202,top = 184');

      $('.crm-download-info').removeClass('crm-hidden');
      $('.crm-download-content').addClass('crm-hidden');
    });
  });
}(jQuery));

