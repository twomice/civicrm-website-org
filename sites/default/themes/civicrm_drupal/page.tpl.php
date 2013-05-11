<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
        "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language ?>" xml:lang="<?php print $language ?>">
<head>
  <title><?php print $head_title ?></title>
  <meta http-equiv="Content-Style-Type" content="text/css" />
  <?php print $head ?>
  <?php print drupal_get_css($css); ?>
  <?php print drupal_get_js('header', $js); ?>
<script src="http://www.google-analytics.com/urchin.js" type="text/javascript">
</script>
<script type="text/javascript">
   var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
  var pageTracker = _gat._getTracker("UA-1370005-1");
pageTracker._initData();
pageTracker._trackPageview();
</script>
</head>
<body <?php print theme("onload_attribute"); ?>>

<div id="wrapper">

	<div id="header">
		<ul id="util">
<?php global $user; 
if ($user->uid == 0) { ?>
<li><a style="border-left: none;" href="/user/login">Login</a></li>
<li><a href="/user/register">Register</a></li>
<? } else { ?>
<li><a style="border-left: none;" href="/user/<? print $user->uid; ?>">My Account</a></li>
														       <li><a href="/logout">Logout</a></li><?php } ?>
<li><a href="/contact">Contact</a></li>

</ul>
		<a href="/"><img src="/sites/civicrm.org/images/logo_text.gif" /></a>
    <?php if (count($primary_links)) : ?>
      <?php print theme('links', $primary_links, array('id' => 'primary')); ?>
    <?php endif; ?>
    
</div>
  	<div id="banner" >
			<a href="/"><img id="logo" src="/sites/civicrm.org/images/logo.png" width="194" height="189" alt="CiviCRM" /></a>
  <h1>The Open Source Solution for the Civic Sector</h1>
  <p>CiviCRM is a free, libre and open source software constituent relationship management solution. CiviCRM is web-based, open source, internationalized, and designed specifically to meet the needs of advocacy, non-profit and non-governmental groups. Integration with both <a href="http://drupal.org">Drupal</a> and <a href="http://joomla.com">Joomla!</a> content management systems gives you the tools to connect, communicate and activate your supporters and constituents. You can learn more about CiviCRM from our new free book <a href=http://en.flossmanuals.net/civicrm""><strong>Understanding CiviCRM</strong></a>
</p>
			<ul id="demo">
			<li><a href="/node/17"><img src="/sites/civicrm.org/images/demo.gif" width="145" height="40" alt="Free online demo" style="float: none;"></a></li>
			</ul>

	</div>
	</div>

	<div id="content" <?php if ($_SERVER['REQUEST_URI'] == '/') print 'style="background: none;"' ?>>
		<div id="content_type">
	
		<div id="column_right">
			<dl id="nav_secondary">
    <?php //if ($title != ""): ?>
    <?php  $secondary_links = theme('links', menu_secondary_links()); ?>
		<?php //endif; ?>


		<?php $active_id= menu_get_active_nontask_item();
  
//print "activeid".$active_id;
$a_item = menu_get_item($active_id);

if ($a_item['pid'] ==1){
  $bold_item = $a_item;
}
else {
  $bold_item = menu_get_item($a_item['pid']);
}




print "<dt>".l($bold_item['title'], $bold_item['path'], array('title' => $bold_item['description']))."</dt>";


if(count($bold_item["children"])){
  $p_items = array();
  foreach ($bold_item["children"] as $kid){
    if ($kid > 0){
      $kid_item= menu_get_item($kid);
      $key = $kid_item['weight'];
      $p_items[$key][]=$kid_item;
    }
  }
  ksort($p_items);
  
  //  print_r($p_items);
  foreach ($p_items as $print_item_arr){
    foreach  ($print_item_arr as $print_item){
      print "<dd>";
      print l($print_item['title'], $print_item['path'], array('title' => $print_item['description']));    
      print "</dd>";
    }
  }
  
}
?>


			</dl>

    <?php if ($sidebar_left) { ?>
      <?php print $sidebar_left ?>
    <?php } ?>
  

		</div>

		<div id="column_left">
        <?php if ($help != ""): ?>
          <p id="help"><?php print $help ?></p>
        <?php endif; ?>

        <?php print $messages ?>

		<?php if ($title != ""): ?>
          <h1><?php print $title ?></h1>
        <?php endif; ?>
        <?php if ($tabs != ""): ?>
          <?php print $tabs ?>
        <?php endif; ?>
<dl class="fp_box">
  <dt>Not Just a Contact Database</dt>
<dd>
<h3>These optional components give you more power to connect and engage your supporters.</h3>

<div>
<ul id="box">
<li><a href="/civicontribute"><img src="/sites/civicrm.org/images/icon_civicontribute.gif" /></a></li>
<li><h3><a href="/civicontribute"><strong>civi</strong>CONTRIBUTE</a></h3></li>
<li><p>Online fundraising and donor management.</p></li>
</ul>
</div>

<div>
<ul id="box">
<li><a href="/civievent"><img style="margin-top: 5px;" src="/sites/civicrm.org/images/icon_civievent.gif" /></a></li>
<li><h3><a href="/civievent"><strong>civi</strong>EVENT</a></h3></li>
<li><p>Online event registration and participant tracking.</p></li>
</ul>
</div>

<div>
<ul id="box">
<li><a href="/civimember"><img style="margin-top: 5px;" src="/sites/civicrm.org/images/icon_civimember.gif" /></a></li>
<li><h3><a href="/civimember"><strong>civi</strong>MEMBER</a></h3></li>
<li><p>Online signup and membership management.</p></li>
</ul>
</div>


<div>
<ul id="box">
<li><a href="/civimail"><img style="margin-top: 5px;" src="/sites/civicrm.org/images/icon_civimail.gif" /></a></li>
<li><h3><a href="/civimail"><strong>civi</strong>MAIL</a></h3></li>
<li><p>Personalized email blasts and newsletters.</p></li>
</ul>
</div>

</dd>
</dl>

<dl class="fp_box" style="margin-left: 25px;">
<dt style="color: #59c543;">Recent Blog Posts</dt>
<dd>    <?php if ($sidebar_right) { ?>
      <?php print $sidebar_right ?>
    <?php } ?></dd>
</dl>

</div>
<?php print($content) ?>		
</div>
	</div>
</div>
        
<?php print $closure;?>
</div>
<div id="footer">
	<?php print $breadcrumb ?>
  <?php if ($footer_message) : ?>
  <p><?php print $footer_message;?></p>
  <?php endif; ?>
</div>


</body>
</html>
