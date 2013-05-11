<?php
  $content = '';
  if (count($galleries)) {
    $content.= '<ul class="galleries">';
    foreach ($galleries as $gallery) {
      $content .= '<li>';
      $content.= "<h3>".l($gallery->name, 'image/tid/'.$gallery->tid) . "</h3>\n";
      $content.= '<div class="description">';
      if ($gallery->count)
        $content.= l(image_display($gallery->latest, 'thumbnail'), 'image/tid/'.$gallery->tid, array(), NULL, NULL, FALSE, TRUE);
      $content.= check_markup($gallery->description) ."</div>\n";
      $content.= '<p class="count">' . format_plural($gallery->count, 'There is 1 image in this gallery', 'There are @count images in this gallery') . "</p>\n";
      if ($gallery->latest->changed) {
        $content.= '<p class="last">'. t('Last updated: %date', array('%date' => format_date($gallery->latest->changed))) . "</p>\n";
      }
      $content.= "</li>\n";
    }
    $content.= "</ul>\n";
  }
  if (count($images)) {
    $content.= '<ul class="images">';
    foreach ($images as $image) {
      $content .= '<li';
      if ($image->sticky) {
        $content .= ' class="sticky"';
      }
      $content .= ">\n";
      $content .= l(image_display($image, 'thumbnail'), 'node/'.$image->nid, array(), NULL, NULL, FALSE, TRUE);
      $content .= '<h3>'.l($image->title, 'node/'.$image->nid)."</h3>";
      }
      $content .= "</li>\n";
    $content.= "</ul>\n";
  }
  if ($pager = theme('pager', NULL, variable_get('image_images_per_page', 6), 0)) {
    $content.= $pager;
  }
  if (count($images) + count($galleries) == 0) {
      $content.= '<p class="count">' . format_plural(0, 'There is 1 image in this gallery', 'There are %count images in this gallery') . "</p>\n";
  }
  print $content;

?>
