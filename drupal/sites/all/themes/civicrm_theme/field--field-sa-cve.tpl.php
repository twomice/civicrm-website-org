<?php

/**
 * @file field.tpl.php
 * Modified to display CVE links
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php
        $cve = render($item);
        if ($cve) {
          print '<a href="http://www.cve.mitre.org/cgi-bin/cvename.cgi?name=' . trim($cve) . '" title="View CVE">' . $cve . '</a>';
        }
      ?></div>
    <?php endforeach; ?>
  </div>
</div>
