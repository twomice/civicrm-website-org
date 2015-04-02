(function ($) {
  $(function () {
    window.setTimeout(function(){
      document.write("You will be redirected to download page in few seconds"); 
      // redirection url
      window.location.href = "/download/list";
    }, 6000);
  });
}(jQuery));

