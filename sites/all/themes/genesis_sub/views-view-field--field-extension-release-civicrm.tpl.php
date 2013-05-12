<?php
 /**
  * Template override for views of extension releases
  * Will aggregate a long comma-separated list into something more readable
  */

  $ver = explode(', ', $output);
  if ($ver) {
    $output = $ver[0];
    $count = count($ver);
    if ($count > 1) {
      $last = str_ireplace('civicrm', '', $ver[$count - 1]);
      $output .= ' -' . $last;
    }
  }
  print $output;
?>
