(function ($) {
  $(function () {
    if ($("#slider").length) {
      $("#slider").slider({
        value: 250,
        min: 10,
        max: 1000,
        step: 10,
        slide: function (event, ui) {
          $('.other_amount-content input').val(ui.value);
          setDonationMessage(ui.value);
        }
      });

      var amount = $("#slider").slider("value");
      $('.other_amount-content input').val(amount);
      setDonationMessage(amount);

      $('.crm-profile input[type="checkbox"]').attr('checked', 'checked');

      $('.other_amount-section label').remove();
      $('#priceset-div').addClass('crm-other-amount');
      $('#_qf_Main_upload-bottom').val('Donate Now');
      $('.other_amount-section .label').append('<span class="crm-currency">$</span>');
    }

    function setDonationMessage(amount) {
      var message;
      if (amount >= 10 && amount < 250 ) {
        message = 'donation helps contribute to our success';
      } else if (amount >= 250 && amount < 500) {
        message = 'donation helps us to fix one critical bug';
      } else if (amount >= 500 && amount < 750) {
        message = 'donation helps us to improve the documentation and add a unit test';
      } else if (amount >= 750 && amount < 1000) {
        message = 'donation helps us with CiviCon sprints';
      } else if (amount ==1000) {
        message = 'donation helps us to build a new feature';
      }
      $('.crm-donation-message').html( '$' + amount + ' ' + message);
    }

  });
}(jQuery));

