(function ($) {
    Drupal.behaviors.hovermodule = {
	attach: function (context, settings) {
	    flag=false;		
	    $('#toboggan-login').bind('mouseover', function() {
		    flag=false;
		});
	    $('#toboggan-login').bind('mouseout', function() {
		    flag=true;
		});
	    $('body').click(function(){
		    if(flag)
			$('#toboggan-login').hide();
		});
	    $('.hide-tooltip').bind( 'click', function() {
		    $('.ui-tooltip').qtip("hide");
		     $('#genesis-1c').removeClass('bgcl');			
		     $('#container').removeClass('hidebg');
		    return false;
		});
	    var current_class = $('.view-sub-menu-block .view-content .views-row a.active');
	    
	    $(current_class).parent('div').addClass('active');
	    
	    var check = false;

	    $('.picture-original').bind('mouseover', function(){
		    check = false;	    
		});
	    $('.picture-original').bind('mouseleave', function(){

		    check = true;
		});
	    $('.qtip-tooltip').click( function(){

		    check = false;
		});
	    
	    $('.qtip-tooltip, .disable-field').mouseleave( function(){
		    check = true;
		    $('body').click(function(){
			    if(check) {
			    $('#genesis-1c').removeClass('bgcl');			
			    $('#container').removeClass('hidebg');
			    }
			});
		});

		$('#edit-search-block-form--2').ready(function(){
		$('#edit-search-block-form--2').val('SEARCH THE SITE');
		$('#edit-search-block-form--2').focus(function(){
		$('#edit-search-block-form--2').val('');
		});
		$('#edit-search-block-form--2').blur(function(){
		$('#edit-search-block-form--2').val('SEARCH THE SITE');
		});
		});

		$('#edit-keys').ready(function(){
		$('#edit-keys').val('SEARCH THE SITE');
		$('#edit-keys').focus(function(){
		$('#edit-keys').val('');
		});
		$('#edit-keys').blur(function(){
		$('#edit-keys').val('SEARCH THE SITE');
		});
		});
	   

	    
	}
    };
}(jQuery));
