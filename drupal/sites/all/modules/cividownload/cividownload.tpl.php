<div class="crm-download-title">Download CiviCRM</div>
<div class='crm-support'>
  <div class='crm-introduction'>
    <?php $civicrm_version = variable_get('civicrm_stable_version', '4.4.0'); ?>
    The current stable version of CiviCRM is <?php echo $civicrm_version; ?>. You will
    need to know which host Content Management software (CMS) and which version you are using.
    CiviCRM <?php echo $civicrm_version; ?> is compatible with Drupal version 7.x,
    Joomla! version 2.5.x / 3.x, and WordPress 3.x. There is a separate download for Drupal
    version 6.x which is supported by the community. Click on your CMS below to begin.
  </div>

  <div class="crm-download-listing">
    <?php foreach ($content['download_urls'] as $key => $values) { ?>
      <div class="crm-download-buttons">
        <a class="download-link" href="<?php echo $values['url'];?>">
          Download CiviCRM <?php echo $civicrm_version; ?></a>
        &nbsp;<strong><?php echo 'for ' . $values['title']; ?></strong>
      </div>
      <br/>
    <?php } ?>
  </div>
  <div class='crm-introduction'>
    Looking for older or pre-release versions? <a href="http://sourceforge.net/projects/civicrm/files/" target="_blank">click
      here</a>
  </div>
  <div style="background-color: #7EC757; padding: 10px; color: white; font-weight: bold; font-size: 18px; width: 90%'">
    OR ... <a href="https://civicrm.org/providers/hosting" target="_blank">start using CiviCRM on demand &quot;in the cloud&quot; by signing up with one of our Hosting Providers.</a></div>
</div>