#Development workflow

All new code, etc. should be developed locally, commited to this repository, tested on www-test.civicrm.org, and the deployed on production. www-test should NOT be used for code based development.

You can use www-test to experiment with ad-hoc configuration changes (e.g. to views, permissions, etc.) but note that many peole have access to www-test, and it gets over written with data from www-prod on a regular basis, e.g. when testing upgrades of CiviCRM.  Therefore, you should NOT assume that your config changes will be on www-test next time you look. 

Since the volume of development on the website quite low, it is often OK to make small and quick changes directly on master. However, if you are making more significant or independent changes (say over a few days) it is safer to create a branch for the development and merge it to master when ready.

All custom modules should be added to the sites/all/modules/custom directory.

##Releases

http://civicrm.org is served from www-prod.  All files are owned by the co user.  To release new code on the master branch, do something like this:

    user@www-prod~$ cd /var/www/civicrm-website-org
    user@www-prod/var/www/civicrm-website-org$ sudo -s -u co
    co@www-prod/var/www/civicrm-website-org$ git pull 

#Syncing to test and local environments

Syncing to www-test and local development environments is done in the standard way (mysqldump and restore the databases and rsync/copy the files).  You can then do a git pull (and so on) to check out appropriate code.

There is a script /home/michael/sync_co.sh on www-test that does this.  It needs to be run as michael at the moment, but we could generalising it should be trivial.

You should not need to worry about backing up the www-test database because no important data should be stored there (see development workflow above).

#Local development environments

You can develop locally as long as you are not storing any unencrypted personal data in your local development environment.

Drupal and CiviCRM databases can be encrypted on www-test.civicrm.org before being transferred to local development environments.

#Upgrades

Upgrades (especially CiviCRM upgrades) should be tested locally and on the test infrastructure before being carried out on the production server.

Put the site into maintanence mode before upgrading

#CiviCRM customisations

Any CiviCRM customisations should be places in the php and templates directory rather than being directly overwritted in order to make it easy to keep track of customisations through upgrades.
