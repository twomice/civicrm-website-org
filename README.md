#Development workflow

All new code, etc. should be developed locally, commited to this repository, tested on www-test.civicrm.org, and the deployed on production. www-test should NOT be used for code based development.

You can use www-test to experiment with ad-hoc configuration changes (e.g. to views, permissions, etc.) but note that many peole have access to www-test, and it gets over written with data from www-prod on a regular basis, e.g. when testing upgrades of CiviCRM.  Therefore, you should NOT assume that your config changes will be on www-test next time you look. 

All custom modules should be added to the sites/all/modules/custom directory.

#Syncing to test and local environments

Syncing to www-test and local development environments is done in the standard way (mysqldump and restore the databases and rsync/copy the files).  You should not need to worry about backing up the www-test database because no important data should be stored there (see development workflow above).

#Local development environments

You can develop locally as long as you are not storing any unencrypted personal data in your local development environment.

Drupal and CiviCRM databases can be encrypted on www-test.civicrm.org before being transferred to local development environments.

#Upgrades

Upgrades (especially CiviCRM upgrades) should be tested locally and on the test infrastructure before being carried out on the production server.

Put the site into maintanence mode before upgrading

#CiviCRM customisations

Any CiviCRM customisations should be places in the php and templates directory rather than being directly overwritted in order to make it easy to keep track of customisations through upgrades.
