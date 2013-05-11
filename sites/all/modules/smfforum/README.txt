SMFforum Integration module
==============================================================================

This module provides integration with SMF: Simple Machines Forum
http://www.simplemachines.org/.

The following blocks are provided to integrate SMF with your Drupal site:

1) SMFforum: Hidden authentication
   With the User login block allow forum users to login to your Drupal site 
   with their drupal or forum username and passwords and provides advanced
   synchronization with the forum.
   When a user changes his/her Drupal accounts and profile settings,
   the changes will be synced back to the forum database.
   Likewise, if the user changes his/her forum profile, it will be synced back
   to the Drupal site.

2) SMFforum: New forum topics
   Display a list of the latest forum topics.

3) SMFforum: New forum posts
   Display a list of the latest forum messages.

4) SMFforum: Online forum users
   Display a list of all on-line forum users.

5) SMFforum: Forum statistics
   Display forum statistics including: number of users, threads, messages,
   newest member, etc.

6) SMFforum: Personal messages
   Display your forum personal messages if you are logged in.

7) SMFforum: Top posters
   Display a list of the top posters.

Installation
------------------------------------------------------------------------------

1) Download the SMFforum module from http://drupal.org/project/smfforum or
   from http://vgb.org.ru

2) Always download the latest smf_api_2 archive from http://vgb.org.ru
   See the "license.txt" file for details of the Simple Machines license.

3) Copy smfforum directory to your modules directory sites/all/modules/smfforum/

4) Unpack smf_api_2 archive and copy it to subdirectory
   sites/all/modules/smfforum/includes/

5) To test how you will be authenticated, login to your SMF forum as admin.
   It is assumed that you have both usernames with the same name ('admin' or your name) 
   and the same password. If you do not have so, change.

6) Open new window in browser with your Drupal site, login as admin
   navigate to Administer » modules and enable the SMFforum and profile module.

7) Navigate to Administer » settings » SMFforum settings and enter the path to
   SMF root (path to forum's Settings.php file).
   Save settings and ensure that SMFforum successfully connected
   to the SMF database and you are authenticated.
   
   If you see message "You are not authenticated in SMF now." beenig logged in SMF and Drupal 
   as admin, it is probably mean your settings are wrong.
  
   You should go to SMF settings and revise Server and qookie settings or do something else 
   in your environment, site and forum layout and settings.

8) Ensure that SMF profile fields map with corresponding
   drupal profile.module fields.

9) Ensure that corresponding profile.module fields exist.
   If necessary create profile.module fields that will be match with
   SMF profile fields.

10) Navigate to Administer » blocks.
   Enable SMFforum: Hidden authentication block. Do not disable it in the future
   if you want advanced authentication and synchronyzation.
   Enable the SMFforum blocks you want to use (optional).

11) How to make SMF work in frame

  1. Go to Administer › Site configuration › SMFforum settings

  SMF display way:
  ( ) In the window
  (*) In frame inside Drupal page

  Save configuration

  2. Go to Administer › Site configuration > Performance
  Clear cached data (Drupal 6 only)
  
  3. Go to Administer › Site building > Menus > Navigation
  See Menu item with blank title in state (Disabled)
  You may enable it if you do not want smfforum in Primary links.

  If you enable it your forum page will be with title.
  Reset will help to remove the page title if you disable it back.

  4. Go to Administer › Site building › Menus › Primary links
  Enter Menu item smfforum.

  The main page and link to SMF in frame is

  smfforum

  To change this name you may add URL aliases (core module Path must be enabled).
  
  Add next URL aliases (System path -> URL Alias)
  
  For the path 'forums'
  
  smfforum -> forums
  smfforum/index.php -> forums/index.php
  
Install first locally and ensure that with your settings it works as you expect.

Upgrade
------------------------------------------------------------------------------

1) Disable all SMFforum blocks.
2) Replace old files in your modules directory .../modules/smfforum/
3) Login to your SMF forum as admin.
4) Login to your Drupal site (www.example.com/user/login will help you).
5) Navigate to Administer » settings » SMFforum settings and ensure that SMFforum
   successfully connected to the SMF database and you are authenticated.
   Save settings!
6) Navigate to Administer » blocks.
   Enable the SMFforum blocks you want to use.

Use at you risk on production site.

Module written by Vadim G.B. vb on http://drupal.org, http://drupal.ru
------------------------------------------------------------------------------
SMFforum Integration module (Ñ) 2007-2008 by Vadim G.B. (http://vgb.org.ru)
------------------------------------------------------------------------------
