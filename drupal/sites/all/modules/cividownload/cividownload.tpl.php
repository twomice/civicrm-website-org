<?php if (isset($content['listing'])) { ?>
  <div class="crm-title">Download CiviCRM</div>
  <div class='crm-support'>
    <div class='crm-introduction'>
      The current stable version of CiviCRM is <?php echo variable_get('civicrm_stable_version', '4.4.0'); ?>. You will need to know which host Content Management software (CMS) and which version you are using.
      CiviCRM <?php echo variable_get('civicrm_stable_version', '4.4.0'); ?> is compatible with Drupal version 7.x, Joomla! version 2.5.x / 3.x, and WordPress version 3.4.x. There is a separate download for Drupal
      version 6.x which is not officially supported. Click on your CMS below to begin.
    </div>

    <ul name="download-links">
      <?php foreach ($content['download_urls'] as $key => $values) { ?>
        <li><a href="<?php echo url('cividownload/' .$key); ?>"><?php echo 'CiviCRM for ' . $values['title']; ?></a></li>
      <?php } ?>
    </ul>
  </div>
<?php } elseif (isset($content['download'])) { ?>
  <div class="crm-title">Downloading...</div>
  <div class='crm-support'>
    <div class="crm-download-content">
      <div class="crm-download-intro">
        CiviCRM is Member-supported Open Source Software. Please consider contributing to support ongoing improvements to the project.
      </div>
      <div class="down-link">Thanks for downloading. If you were not able to download <a
          href="<?php echo $content['downloadURL']; ?>" id="download-link" target="_blank">click here</a> to start the
        download.
      </div>
      <p>
        <div>(move slider to change amount)</div>
      </p>
      <div class="slider-container">
        <div id="slider"></div>
      </div>
      <div class="crm-buttons">
        <form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">
          <input type="hidden" name="cmd" value="_donations">
          <input type="hidden" name="business" value="dave@civicrm.org">
          <input type="hidden" name="lc" value="US">
          <input type="hidden" name="amount" value="10" id="amount">
          <input type="hidden" name="currency_code" value="USD">
          <input type="hidden" name="no_note" value="0">
          <!--<input type="hidden" name="bn" value="PP-DonationsBF:btn_donateCC_LG.gif:NonHostedGuest">-->
          <div>
            <input type="submit" class="crm-input" name="download-donate" value="Donate">
            <span class="crm-currency">$</span><input type="text" id="display_amount" class="crm-amount"/>
          </div>
        </form>
      </div>
      <br/>
      <div class="crm-hidden" id="crm-download-link"></div>
    </div>
  </div>
<?php } ?>