<?php
/**********************************************************************************
* SMF: Simple Machines Forum                                                      *
* Open-Source Project Inspired by Zef Hemel (zef@zefhemel.com)                    *
* =============================================================================== *
* Software Version:           SMF 1.1.4                                           *
* Software by:                Simple Machines (http://www.simplemachines.org)     *
* Copyright 2006-2007 by:     Simple Machines LLC (http://www.simplemachines.org) *
*           2001-2006 by:     Lewis Media (http://www.lewismedia.com)             *
* Support, News, Updates at:  http://www.simplemachines.org                       *
***********************************************************************************
* This program is free software; you may redistribute it and/or modify it under   *
* the terms of the provided license as published by Simple Machines LLC.          *
*                                                                                 *
* This program is distributed in the hope that it is and will be useful, but      *
* WITHOUT ANY WARRANTIES; without even any implied warranty of MERCHANTABILITY    *
* or FITNESS FOR A PARTICULAR PURPOSE.                                            *
*                                                                                 *
* See the "license.txt" file for details of the Simple Machines license.          *
* The latest version can always be found at http://www.simplemachines.org.        *
**********************************************************************************/
/**********************************************************************************
* smf_api_2.php               v 1.1.4.11 2008/04/28                               *
***********************************************************************************
* Copyright 2006-2008 by:     Vadim G.B. (http://vgb.org.ru)                      *
* Some code from Simple Machines Forum. Distributed with permission.              *
* Modified  2006-2008 by:     Vadim G.B. (http://vgb.org.ru)                      *
**********************************************************************************/

define('SMF', 1);

define('SMF_API_PHPSESSID', 'PHPSESSID');

@define('SMF_DB_NEW_LINK', true);

define('SMF_API_DEBUG', 0);

// Report all errors, except notices
if (SMF_API_DEBUG)
  error_reporting(E_ALL);
else
  error_reporting(E_ALL ^ E_NOTICE);
  
@set_magic_quotes_runtime(0);

global $smf_settings, $smf_user_info, $smf_func, $smf_txt, $smf_connection, $smf_db_prefix, $smf_boarddir, $smf_sourcedir,
$db_character_set, $mysql_set_mode, $smf_api_php, $smf_language, $smf_language_dir;

if (!isset($smf_boarddir) || empty($smf_boarddir))
  $smf_boarddir = dirname(__FILE__);

if (isset($boarddir) && isset($sourcedir)) {
  $smf_api_php = true;
}
else {
  $smf_api_php = false;

  require_once($smf_boarddir . '/Settings.php');

  $smf_settings = array();
  $smf_user_info = array();

  // Load old smf_api function calls for backward compatibility.
  //require_once($smf_boarddir . '/smf_api_back_compat.php');

}

$smf_sourcedir = $sourcedir;
$smf_language = $language;
$smf_language_dir = $boarddir . '/Themes/default/languages';

$smf_func = array();
$smf_txt = array();

// Load various SMF stuff.
require_once(dirname(__FILE__) . '/smf_api_subs.php');

if (!$smf_api_php) {
// If $maintenance is set to 2, don't connect to the database at all.
if ($maintenance != 2)
{
  // Ignore connection errors, because this is just an API file.
  if (empty($db_persist))
    $smf_connection = @mysql_connect($db_server, $db_user, $db_passwd, defined('SMF_DB_NEW_LINK') ? SMF_DB_NEW_LINK : false);
  else
    $smf_connection = @mysql_pconnect($db_server, $db_user, $db_passwd);
  $db_prefix = '`' . $db_name . '`.' . $db_prefix;

 	$request = smf_db_query("
		SELECT variable, value
		FROM {$db_prefix}settings", __FILE__, __LINE__);
	$smf_settings = array();
	while ($row = @mysql_fetch_row($request))
		$smf_settings[$row[0]] = $row[1];
	mysql_free_result($request);

  //smf_reload_settings();
}

// Load stuff from the Settings.php file into $smf_settings.
$smf_settings['db_prefix'] = $db_prefix;
$smf_settings['cookiename'] = $cookiename;
$smf_settings['language'] = $language;
$smf_settings['forum_name'] = $mbname;
$smf_settings['forum_url'] = $boardurl;
$smf_settings['webmaster_email'] = $webmaster_email;

} // end of smf_api_php is not using

$smf_db_prefix = $db_prefix;

  // This makes it possible to have SMF automatically change the sql_mode and autocommit if needed.
//  if (isset($mysql_set_mode) && $mysql_set_mode === true)
//    smf_db_query("SET sql_mode='', AUTOCOMMIT=1", __FILE__, __LINE__);

if (isset($db_character_set) && preg_match('~^\w+$~', $db_character_set) === 1) {
  smf_db_query("SET NAMES '$db_character_set' COLLATE '". $db_character_set ."_general_ci'", __FILE__, __LINE__);
}    

smf_clear_user_info();

smf_load_theme_data();
smf_load_language('index', $language);

smf_reload_settings();

smf_api_authenticate_user();

smf_load_language('index');
//smf_reload_settings();

/*********************************************************************************/

function smf_clear_user_info()
{
	global $smf_language, $smf_settings, $smf_user_info;
  $smf_user_info['ID_MEMBER'] = 0;
  $smf_user_info['id'] = &$smf_user_info['ID_MEMBER'];
  $smf_user_info['username'] = "";
  $smf_user_info['name'] = "";
  $smf_user_info['email'] = "";
  $smf_user_info['language'] = $smf_language;
  $smf_user_info['is_guest'] = $smf_user_info['id'] == 0;
  $smf_user_info['is_admin'] = false;
  $smf_user_info['passwd'] = "";
  $smf_user_info['passwordSalt'] = "";
}

function smf_api_get_user_membername($id)
{
	global $smf_connection, $smf_db_prefix;

  $username = "";
	if (!empty($id) && is_integer($id))
	{
		if (!$smf_connection)
			return $username;

		$result = smf_db_query("
				SELECT member_name
				FROM {$smf_db_prefix}members
				WHERE id_member = '" . (int) $id . "'
				LIMIT 1", __FILE__, __LINE__);
			list ($username) = mysql_fetch_row($result);
			mysql_free_result($result);

		if (!empty($username))
  		$username = smf_api_utf8($username);
	}
	return $username;
}

function smf_api_get_user_name($id)
{
	global $smf_connection, $smf_db_prefix;

  $username = "";
	if (!empty($id) && is_integer($id))
	{
		if (!$smf_connection)
			return $username;

		$result = smf_db_query("
				SELECT real_name
				FROM {$smf_db_prefix}members
				WHERE id_member = '" . (int) $id . "'
				LIMIT 1", __FILE__, __LINE__);
			list ($username) = mysql_fetch_row($result);
			mysql_free_result($result);

		if (!empty($username))
  		$username = smf_api_utf8($username);
	}
	return $username;
}

function smf_api_get_user_id($username)
{

	global $smf_connection, $smf_db_prefix;

  $id = 0;
	if (!empty($username))
	{
		if (!$smf_connection)
			return 0;

    $email = $username;  
		$username = smf_api_charset($username);

		$result = smf_db_query("
			SELECT id_member
			FROM {$smf_db_prefix}members
			WHERE member_name = '$username'
			LIMIT 1", __FILE__, __LINE__);
		list ($id) = mysql_fetch_row($result);
		mysql_free_result($result);
    
    if (empty($id) && strpos($email, "@") !== false) {
      if (!smf_is_valid_email($email)) {
        return 0;
      }
      $result = smf_db_query("
  			SELECT id_member
  			FROM {$smf_db_prefix}members
  			WHERE email_address = '$email'
  			LIMIT 1", __FILE__, __LINE__);
  		list ($id) = mysql_fetch_row($result);
  		mysql_free_result($result);
    }
	}
	return $id;
}

// Check the passed ID_MEMBER/password.  If $is_username is true, treats $id as a username.
function smf_api_check_password($id = null, $password = null, $is_username = false)
{
	global $smf_settings, $smf_user_info, $smf_connection, $smf_db_prefix;

	if (!$smf_connection)
		return null;
	// If $id is null, this was most likely called from a query string and should do nothing.
	if ($id === null)
		return;

	$request = smf_db_query("
		SELECT passwd, member_name, is_activated
		FROM {$smf_db_prefix}members
		WHERE " . ($is_username ? 'member_name' : 'id_member') . " = '$id'
		LIMIT 1", __FILE__, __LINE__);
	list ($pass, $user, $active) = mysql_fetch_row($request);
	mysql_free_result($request);

	return sha1(strtolower($user) . $password) == $pass && $active == 1;
}

// Actually set the login cookie...
function smf_api_set_login_cookie($cookie_length, $id, $password, $encrypted = true)
{
    
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info;
    
    
  $ID_MEMBER = $smf_user_info['id_member'];

	// The $id is not numeric; it's probably a username or email.
	if (!is_integer($id))
	{
		if (!$smf_connection || strlen($id) > 128)
			return false;

		// Save for later use.
    $email = $id;
		$username = smf_api_charset($id);

		$result = smf_db_query("
			SELECT id_member
			FROM {$smf_db_prefix}members
			WHERE member_name = '$username'
			LIMIT 1", __FILE__, __LINE__);
		list ($id) = mysql_fetch_row($result);
		mysql_free_result($result);

		// It wasn't found, after all?
		if (empty($id)) {
      //$smf_settings['error_msg'] .= " !qookie user email=".$email;
      if (strpos($email, "@") !== false) {
        if (smf_is_valid_email($email)) {
          $result = smf_db_query("
      			SELECT id_member
      			FROM {$smf_db_prefix}members
      			WHERE email_address = '$email'
      			LIMIT 1", __FILE__, __LINE__);
      		list ($id) = mysql_fetch_row($result);
      		mysql_free_result($result);
        }
      }
      if (empty($id)) {
        $id = (int) $username;
      }
      unset($username);
		}
	}

	// Oh well, I guess it just was not to be...
	if (empty($id) || $ID_MEMBER == 0)
		return false;

	// The password isn't encrypted, do so.
	if (!$encrypted)
        {
		// Do we have the username already, or not yet?
		if (!isset($username))
		{
			if (!$smf_connection)
				return false;

			$result = smf_db_query("
				SELECT member_name
				FROM {$smf_db_prefix}members
				WHERE id_member = '" . (int) $id . "'
				LIMIT 1", __FILE__, __LINE__);
			list ($username) = mysql_fetch_row($result);
			mysql_free_result($result);
		}

		if (empty($username))
			return false;
    //$smf_settings['error_msg'] .= " ID=".$ID_MEMBER." name=".$username." pass=".$password." salt=".$smf_user_info['passwordSalt'];
		if (!empty($password))
            {
               
     	$password = smf_api_charset($password);

		  $sha1_passwd = sha1(strtolower($username) . $password);
		  $smf_user_info['passwd'] = $sha1_passwd;
		}
	}
  if (empty($cookie_length))
    $cookieTime = 60 * $smf_settings['cookieTime'];
  else
    $cookieTime = 60 * $cookie_length;
	// Cookie set.  A session too, just incase.
 
	set_login_cookie($cookieTime, $ID_MEMBER, sha1($smf_user_info['passwd'] . $smf_user_info['password_salt']));

	// Reset the login threshold.
	if (isset($_SESSION['failed_login']))
		unset($_SESSION['failed_login']);

	$smf_user_info['is_guest'] = false;
	$smf_user_info['additionalGroups'] = explode(',', $smf_user_info['additionalGroups']);
	$smf_user_info['is_admin'] = $smf_user_info['id_group'] == 1 || in_array(1, $smf_user_info['additionalGroups']);

	// Are you banned? Go ahead! SMF will catch you anyway!
	//is_not_banned(true);

	// An administrator, set up the login so they don't have to type it again.
	if ($smf_user_info['is_admin'])
	{
		$_SESSION['admin_time'] = time();
		unset($_SESSION['just_registered']);
	}

	// Don't stick the language or theme after this point.
	//unset($_SESSION['language']);
	unset($_SESSION['ID_THEME']);

	return true;
}


function smf_api_authenticate_user()
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;
	// Check the cookie. NB! We use cookie only.
    
	if (isset($_COOKIE[$smf_settings['cookiename']]))
	{
       
		$_COOKIE[$smf_settings['cookiename']] = stripslashes($_COOKIE[$smf_settings['cookiename']]);
  
		// Fix a security hole in PHP <= 4.3.9.
		if (preg_match('~^a:[34]:\{i:0;(i:\d{1,6}|s:[1-8]:"\d{1,8}");i:1;s:(0|40):"([a-fA-F0-9]{40})?";i:2;[id]:\d{1,14};(i:3;i:\d;)?\}$~', $_COOKIE[$smf_settings['cookiename']]) == 1)
		{
            
			list ($ID_MEMBER, $password) = @unserialize($_COOKIE[$smf_settings['cookiename']]);
  
			$ID_MEMBER = !empty($ID_MEMBER) ? (int) $ID_MEMBER : 0;
		}
		else
			$ID_MEMBER = 0;
    //$smf_settings['error_msg'] .= " qookie id=".$ID_MEMBER;  
	}
	else
		$ID_MEMBER = 0;

	if (!$smf_connection)
		return false;

  $smf_user_info = array();

	if (!empty($ID_MEMBER))
        {
		$request = smf_db_query("
			SELECT *
			FROM {$smf_db_prefix}members
			WHERE id_member = $ID_MEMBER
			LIMIT 1", __FILE__, __LINE__);

		if (mysql_num_rows($request) != 0)
		{
			// The base settings array.
			$smf_user_info += mysql_fetch_assoc($request);
  
			// SHA-1 passwords should be 40 characters long.
			if (strlen($password) == 40)
				$check = sha1($smf_user_info['passwd'] . $smf_user_info['password_salt']) == $password;
			else
				$check = false;
  
			// Wrong password or not activated.
			$ID_MEMBER = $check && ($smf_user_info['is_activated'] == 1 || $smf_user_info['is_activated'] == 11) ? $smf_user_info['id_member'] : 0;
		}
		else
			$ID_MEMBER = 0;
		mysql_free_result($request);
	}

	if (empty($ID_MEMBER))
		$smf_user_info = array('groups' => array(-1));
	else
	{
		if (empty($smf_user_info['additional_groups']))
			$smf_user_info['groups'] = array($smf_user_info['id_group'], $smf_user_info['id_post_group']);
		else
			$smf_user_info['groups'] = array_merge(
				array($smf_user_info['id_group'], $smf_user_info['id_post_group']),
				explode(',', $smf_user_info['additional_groups'])
			);
	}

	$smf_user_info['id'] = &$smf_user_info['id_member'];
	$smf_user_info['username'] = &$smf_user_info['member_name'];
	$smf_user_info['name'] = &$smf_user_info['real_name'];
	$smf_user_info['email'] = &$smf_user_info['email_address'];
	$smf_user_info['messages'] = &$smf_user_info['instant_messages'];
	$smf_user_info['unread_messages'] = &$smf_user_info['unread_messages'];
	$smf_user_info['language'] = empty($smf_user_info['lngfile']) || empty($smf_settings['userLanguage']) ? $smf_settings['language'] : $smf_user_info['lngfile'];
	$smf_user_info['is_guest'] = $ID_MEMBER == 0;
	$smf_user_info['is_admin'] = in_array(1, $smf_user_info['groups']);
	
  if ($smf_user_info['is_guest'])
		$smf_user_info['query_see_board'] = 'FIND_IN_SET(-1, b.member_groups)';
	// Administrators can see all boards.
	elseif ($smf_user_info['is_admin'])
		$smf_user_info['query_see_board'] = '1';
	// Registered user.... just the groups in $smf_user_info['groups'].
	else
		$smf_user_info['query_see_board'] = '(FIND_IN_SET(' . implode(', b.member_groups) OR FIND_IN_SET(', $smf_user_info['groups']) . ', b.member_groups))';

	// This might be set to "forum default"...
	if (empty($smf_user_info['timeFormat']))
		$smf_user_info['timeFormat'] = $smf_settings['time_format'];

	// Just in case it wasn't determined yet whether UTF-8 is enabled.
	if (!isset($smf_settings['utf8']))
		//$smf_settings['utf8'] = (empty($smf_settings['global_character_set']) ? $smf_txt['lang_character_set'] : $smf_settings['global_character_set']) === 'UTF-8';
  	// UTF-8 in regular expressions is unsupported on PHP(win) versions < 4.2.3.
	  $smf_settings['utf8'] = (empty($smf_settings['global_character_set']) ? $smf_txt['lang_character_set'] : $smf_settings['global_character_set']) === 'UTF-8' && (strpos(strtolower(PHP_OS), 'win') === false || @version_compare(PHP_VERSION, '4.2.3') != -1);

  if ($ID_MEMBER != 0)
    smf_load_theme_data();
 
	return !$smf_user_info['is_guest'];
}

function smf_api_get_user($username, $passwd)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;

	$email = $username;  
	$username = smf_api_charset($username);
  
  // authentication!
	if (smf_api_authenticate_user() && !empty($username)
      && ($username == $smf_user_info['username'] || $email == $smf_user_info['email'])
      ) {
		return true;
  }  

	if (empty($username))
	  return false;

  if (!$smf_connection)
	  return false;

 	if (!empty($passwd))
 	  $passwd = smf_api_charset($passwd);

  $smf_user_info = array('groups' => array(-1));

	$request = smf_db_query("
		SELECT *
		FROM {$smf_db_prefix}members
		WHERE member_name = '$username'
		LIMIT 1", __FILE__, __LINE__);

	if (mysql_num_rows($request) != 0) {
		$smf_user_info += mysql_fetch_assoc($request);
    mysql_free_result($request);
	}
	else {
    mysql_free_result($request);
    $email_found = false;
    //$smf_settings['error_msg'] .= "get user email=".$email;
    if (strpos($email, "@") !== false) {
      if (smf_is_valid_email($email)) {
        $result = smf_db_query("
          SELECT *
          FROM {$smf_db_prefix}members
          WHERE email_address = '$email'
          LIMIT 1", __FILE__, __LINE__);

        if (mysql_num_rows($result) != 0) {
          $smf_user_info += mysql_fetch_assoc($result);
          $username = $smf_user_info['memberName'];
          mysql_free_result($result);
          $email_found = true;
        }  
      }
    }
    if (!$email_found) {
      smf_clear_user_info();
      return false;
    }
 	}

  if (!empty($passwd)) {
    $sha1_passwd = sha1(strtolower($username) . $passwd);
    if ($smf_user_info['passwd'] != $sha1_passwd)
  	{
  	  return false;
  	}
  }
  else {
    $smf_user_info['passwd'] = "";
    $smf_user_info['passwordSalt'] = "";
  }
  //$smf_user_info['passwd'] = $sha1_passwd;
	//$smf_user_info['passwordSalt'] = substr(md5(rand()), 0, 4);

 	$smf_user_info['is_guest'] = true;
	// A few things to make life easier...
	$smf_user_info['id'] = &$smf_user_info['ID_MEMBER'];
	$smf_user_info['username'] = &$smf_user_info['memberName'];
	$smf_user_info['name'] = &$smf_user_info['realName'];
	$smf_user_info['email'] = &$smf_user_info['emailAddress'];
	$smf_user_info['messages'] = &$smf_user_info['instantMessages'];
	$smf_user_info['unread_messages'] = &$smf_user_info['unreadMessages'];
	$smf_user_info['language'] = empty($smf_user_info['lngfile']) || empty($smf_settings['userLanguage']) ? $smf_settings['language'] : $smf_user_info['lngfile'];
	$smf_user_info['is_admin'] = in_array(1, $smf_user_info['groups']);
 
	$smf_user_info['query_see_board'] = 'FIND_IN_SET(-1, b.member_groups)';
	// This might be set to "forum default"...
	if (empty($smf_user_info['timeFormat']))
		$smf_user_info['timeFormat'] = $smf_settings['time_format'];
	// Just in case it wasn't determined yet whether UTF-8 is enabled.
	if (!isset($smf_settings['utf8']))
		//$smf_settings['utf8'] = (empty($smf_settings['global_character_set']) ? $smf_txt['lang_character_set'] : $smf_settings['global_character_set']) === 'UTF-8';
	// UTF-8 in regular expressions is unsupported on PHP(win) versions < 4.2.3.
	$smf_settings['utf8'] = (empty($smf_settings['global_character_set']) ? $smf_txt['lang_character_set'] : $smf_settings['global_character_set']) === 'UTF-8' && (strpos(strtolower(PHP_OS), 'win') === false || @version_compare(PHP_VERSION, '4.2.3') != -1);

  smf_load_theme_data();
 
  return true;
}

// Recent post list:   [board] Subject by Poster	Date
function smf_api_recent_posts($num_recent = 8, $exclude_boards = null, $output_tag = "<ul>", $output_br = "<br />", $output_method = '')
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_func, $smf_txt;

	// No connection, no authentication!
	if (!$smf_connection)
		return false;

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

	if ($exclude_boards === null && !empty($smf_settings['recycle_enable']) && $smf_settings['recycle_board'] > 0)
		$exclude_boards = array($smf_settings['recycle_board']);
	else
		$exclude_boards = empty($exclude_boards) ? array() : $exclude_boards;

  smf_api_authenticate_user();

  $ID_MEMBER = $smf_user_info['ID_MEMBER'];

	// Find all the posts.  Newer ones will have higher IDs.

	$request = smf_db_query("
		SELECT
			m.poster_time, m.subject, m.id_topic, m.id_member, m.id_msg, m.id_board, b.name AS bName,
			IFNULL(mem.real_name, m.poster_name) AS posterName, " . ($smf_user_info['is_guest'] ? '1 AS isRead, 0 AS new_from' : '
			IFNULL(lt.id_msg, IFNULL(lmr.id_msg, 0)) >= m.id_msg_modified AS isRead,
			IFNULL(lt.id_msg, IFNULL(lmr.id_msg, -1)) + 1 AS new_from') . ", LEFT(m.body, 384) AS body, m.smileys_enabled
		FROM ({$smf_db_prefix}messages AS m, {$smf_db_prefix}boards AS b)
			LEFT JOIN {$smf_db_prefix}members AS mem ON (mem.id_member = m.id_member)" . (!$smf_user_info['is_guest'] ? "
			LEFT JOIN {$smf_db_prefix}log_topics AS lt ON (lt.id_topic = m.id_topic AND lt.id_member = $ID_MEMBER)
			LEFT JOIN {$smf_db_prefix}log_mark_read AS lmr ON (lmr.id_board = m.id_board AND lmr.id_member = $ID_MEMBER)" : '') . "
		WHERE m.id_msg >= " . ($smf_settings['maxMsgID'] - 25 * min($num_recent, 5)) . "
			AND b.id_board = m.id_board" . (empty($exclude_boards) ? '' : "
			AND b.id_board NOT IN (" . implode(', ', $exclude_boards) . ")") . "
      AND $smf_user_info[query_see_board]
		ORDER BY m.id_msg DESC
		LIMIT $num_recent", __FILE__, __LINE__);

	if ($request === false)
  {
		return ""; //$smf_req . " *ERROR User=" . iconv($smf_txt['lang_character_set'], 'UTF-8', $smf_user_info['name']);
	}

	$posts = array();
	while ($row = mysql_fetch_assoc($request))
	{
		/*
		$row['body'] = strip_tags(strtr(parse_bbc($row['body'], $row['smileysEnabled'], $row['ID_MSG']), array('<br />' => '&#10;')));
		if ($smf_func['strlen']($row['body']) > 128)
			$row['body'] = $smf_func['substr']($row['body'], 0, 128) . '...';
        */
		// Censor it!
		//censorText($row['subject']);
		//censorText($row['body']);

		// Build the array.
		$posts[] = array(
			'board' => array(
				'id' => $row['ID_BOARD'],
				'name' => $row['bName'],
				'href' => $scripturl . '?board=' . $row['ID_BOARD'] . '.0',
				'link' => '<a href="' . $scripturl . '?board=' . $row['ID_BOARD'] . '.0">' . $row['bName'] . '</a>'
			),
			'topic' => $row['ID_TOPIC'],
			'poster' => array(
				'id' => $row['ID_MEMBER'],
				'name' => $row['posterName'],
				'href' => empty($row['ID_MEMBER']) ? '' : $scripturl . '?action=profile;u=' . $row['ID_MEMBER'],
				'link' => empty($row['ID_MEMBER']) ? $row['posterName'] : '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '">' . $row['posterName'] . '</a>'
			),
			'subject' => $row['subject'],
			'short_subject' => smf_shorten_subject($row['subject'], 50), //$row['subject'], //shorten_subject($row['subject'], 25),
			'preview' => $row['body'],
			'time' => smf_format_time($row['posterTime']),//smf_format_time($row['posterTime']), //timeformat($row['posterTime']),
			'timestamp' => smf_forum_time(true, $row['posterTime']),//$row['posterTime'], //forum_time(true, $row['posterTime']),
			'href' => $scripturl . '?topic=' . $row['ID_TOPIC'] . '.msg' . $row['ID_MSG'] . ';topicseen#new',
			'link' => '<a href="' . $scripturl . '?topic=' . $row['ID_TOPIC'] . '.msg' . $row['ID_MSG'] . '#msg' . $row['ID_MSG'] . '">' . $row['subject'] . '</a>',
			'new' => !empty($row['isRead']),
			'new_from' => $row['new_from'],
		);
	}
	mysql_free_result($request);

	// Just return it.
	if ($output_method == 'array' || empty($posts))
		return $posts;

// This is the "Recent Posts".
	//if (!empty($smf_settings['number_recent_posts'])) {

  //$output_tag = "<ul>" "<div>" "<pre>"
  $output_tag = strtolower($output_tag);
  $output_end_tag = "";
  $output_tag2 = "";
  $output_end_tag2 = "";
  if (substr($output_tag, 0, 3) == "<ul" || substr($output_tag, 0, 3) == "<ol") {
  	$output_end_tag = "</" . substr($output_tag, 1, 2) . ">";
  	$output_tag2 = "<li>";
  	$output_end_tag2 = "</li>";
  }
  elseif (substr($output_tag, 0, 4) == "<div") {
  	$output_end_tag = "</div>";
  }
  elseif (substr($output_tag, 0, 4) == "<pre") {
  	$output_end_tag = "</pre>";
  }
  elseif (substr($output_tag, 0, 2) == "<p") {
  	$output_end_tag = "</p>";
  }

  $str = '<a href="'. $scripturl . '?action=recent"><img src="' . $smf_settings['theme']['images_url'] . '/post/xx.gif" alt="' . $smf_txt[214] . '" /></a>';
  $strposts = $str . ' ';
  $str = '<a href="' . $scripturl . '?action=recent">' .$smf_txt[214] . '</a>';
  $strposts .= $str;

  $strposts .= $output_tag;
 	foreach ($posts as $post) {
    $strnew = $post['new'] ? '' : '<a href="' . $scripturl . '?topic=' . $post['topic'] . '.msg' . $post['new_from'] . ';topicseen#new"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
    $strnew .= ' ';
    $str = 	'<a href="' . $post['href'] . '">' . $post['short_subject'] . '</a>';
    //$strposts .= $str . $output_br;
    $strposts .= $output_tag2 . $strnew . $str;
    $strposts .= $output_br;
    $str = 	$smf_txt[525] . ' ' . $post['poster']['link'] . ' ' . $smf_txt['smf88'] . ' ' . $post['board']['link'];
    //$str = 	$smf_txt[525] . ' ' . $post['poster']['link'] . ' (' . $post['board']['link'] . ')';
    $strposts .= $str . $output_br;
    //$str = 	$post['new'] ? '' : '<a href="' . $scripturl . '?topic=' . $post['topic'] . '.msg' . $post['new_from'] . ';topicseen#new"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
    //$strposts .= $str; // . $output_br;
    $str = $post['time'];
    $strposts .= $str . $output_end_tag2;
  }
  $strposts .= $output_end_tag;

	$strposts = smf_api_utf8($strposts);

  if ($output_method == 'echo')
    echo $strposts;

  return $strposts;
}

// Recent topic list:   [board] Subject by Poster	Date
function smf_api_recent_topics($num_recent = 8, $exclude_boards = null, $output_tag = "<ul>", $output_br = "<br />", $output_method = '')
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_func, $smf_txt;

	// No connection, no authentication!
	if (!$smf_connection)
		return false;

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

	if ($exclude_boards === null && !empty($smf_settings['recycle_enable']) && $smf_settings['recycle_board'] > 0)
		$exclude_boards = array($smf_settings['recycle_board']);
	else
		$exclude_boards = empty($exclude_boards) ? array() : $exclude_boards;

  smf_api_authenticate_user();

  $ID_MEMBER = $smf_user_info['ID_MEMBER'];

	$stable_icons = array('xx', 'thumbup', 'thumbdown', 'exclamation', 'question', 'lamp', 'smiley', 'angry', 'cheesy', 'grin', 'sad', 'wink', 'moved', 'recycled', 'wireless');
	$icon_sources = array();
	foreach ($stable_icons as $icon)
		$icon_sources[$icon] = 'images_url';

	// Find all the posts in distinct topics.  Newer ones will have higher IDs.
	$request = smf_db_query("
		SELECT
			m.poster_time, ms.subject, m.id_topic, m.id_member, m.id_msg, b.id_board, b.name AS bName,
			IFNULL(mem.real_name, m.poster_name) AS posterName, " . ($smf_user_info['is_guest'] ? '1 AS isRead, 0 AS new_from' : '
			IFNULL(lt.id_msg, IFNULL(lmr.id_msg, 0)) >= m.id_msg_modified AS isRead,
			IFNULL(lt.id_msg, IFNULL(lmr.id_msg, -1)) + 1 AS new_from') . ", LEFT(m.body, 384) AS body, m.smileys_enabled, m.icon
		FROM ({$smf_db_prefix}messages AS m, {$smf_db_prefix}topics AS t, {$smf_db_prefix}boards AS b, {$smf_db_prefix}messages AS ms)
			LEFT JOIN {$smf_db_prefix}members AS mem ON (mem.id_member = m.id_member)" . (!$smf_user_info['is_guest'] ? "
			LEFT JOIN {$smf_db_prefix}log_topics AS lt ON (lt.id_topic = t.id_topic AND lt.id_member = $ID_MEMBER)
			LEFT JOIN {$smf_db_prefix}log_mark_read AS lmr ON (lmr.id_board = b.id_board AND lmr.id_member = $ID_MEMBER)" : '') . "
		WHERE t.ID_LAST_MSG >= " . ($smf_settings['maxMsgID'] - 35 * min($num_recent, 5)) . "
			AND t.id_last_msg = m.id_msg
			AND b.id_board = t.id_board" . (empty($exclude_boards) ? '' : "
			AND b.id_board NOT IN (" . implode(', ', $exclude_boards) . ")") . "
			AND $smf_user_info[query_see_board]
			AND ms.id_msg = t.id_first_msg
		ORDER BY t.id_last_msg DESC
		LIMIT $num_recent", __FILE__, __LINE__);

  if ($request === false)
  {
		return ""; //$smf_req . " *ERROR User=" . iconv($smf_txt['lang_character_set'], 'UTF-8', $smf_user_info['name']);
	}

	$posts = array();
	while ($row = mysql_fetch_assoc($request))
	{
		/*
		$row['body'] = strip_tags(strtr(parse_bbc($row['body'], $row['smileysEnabled'], $row['ID_MSG']), array('<br />' => '&#10;')));
		if ($func['strlen']($row['body']) > 128)
			$row['body'] = $func['substr']($row['body'], 0, 128) . '...';

		// Censor the subject.
		censorText($row['subject']);
		censorText($row['body']);
    */
		if (empty($smf_settings['messageIconChecks_disable']) && !isset($icon_sources[$row['icon']]))
			$icon_sources[$row['icon']] = file_exists($smf_settings['theme']['images_url'] . '/images/post/' . $row['icon'] . '.gif') ? 'images_url' : 'default_images_url';

		// Build the array.
		$posts[] = array(
			'board' => array(
				'id' => $row['ID_BOARD'],
				'name' => $row['bName'],
				'href' => $scripturl . '?board=' . $row['ID_BOARD'] . '.0',
				'link' => '<a href="' . $scripturl . '?board=' . $row['ID_BOARD'] . '.0">' . $row['bName'] . '</a>'
			),
			'topic' => $row['ID_TOPIC'],
			'poster' => array(
				'id' => $row['ID_MEMBER'],
				'name' => $row['posterName'],
				'href' => empty($row['ID_MEMBER']) ? '' : $scripturl . '?action=profile;u=' . $row['ID_MEMBER'],
				'link' => empty($row['ID_MEMBER']) ? $row['posterName'] : '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '">' . $row['posterName'] . '</a>'
			),
			'subject' => $row['subject'],
			'short_subject' => smf_shorten_subject($row['subject'], 50),
			'preview' => $row['body'],
			'time' => smf_format_time($row['posterTime']),//smf_format_time($row['posterTime']), //timeformat($row['posterTime']),
			'timestamp' => smf_forum_time(true, $row['posterTime']),//$row['posterTime'], //forum_time(true, $row['posterTime']),
			'href' => $scripturl . '?topic=' . $row['ID_TOPIC'] . '.msg' . $row['ID_MSG'] . ';topicseen#new',
			'link' => '<a href="' . $scripturl . '?topic=' . $row['ID_TOPIC'] . '.msg' . $row['ID_MSG'] . '#new">' . $row['subject'] . '</a>',
			'new' => !empty($row['isRead']),
			'new_from' => $row['new_from'],
			'icon' => '<img src="' . $smf_settings['theme'][$icon_sources[$row['icon']]] . '/post/' . $row['icon'] . '.gif" align="middle" alt="' . $row['icon'] . '" />',
		);
	}
	mysql_free_result($request);

	// Just return it.
	if ($output_method == 'array' || empty($posts))
		return $posts;

  //$output_tag = "<ul>" "<div>" "<pre>"
  $output_tag = strtolower($output_tag);
  $output_end_tag = "";
  $output_tag2 = "";
  $output_end_tag2 = "";
  if (substr($output_tag, 0, 3) == "<ul" || substr($output_tag, 0, 3) == "<ol") {
  	$output_end_tag = "</" . substr($output_tag, 1, 2) . ">";
  	$output_tag2 = "<li>";
  	$output_end_tag2 = "</li>";
  }
  elseif (substr($output_tag, 0, 4) == "<div") {
  	$output_end_tag = "</div>";
  }
  elseif (substr($output_tag, 0, 4) == "<pre") {
  	$output_end_tag = "</pre>";
  }
  elseif (substr($output_tag, 0, 2) == "<p") {
  	$output_end_tag = "</p>";
  }

  $str = '<a href="'. $scripturl . '?action=recent"><img src="' . $smf_settings['theme']['images_url'] . '/post/xx.gif" alt="' . $smf_txt[214] . '" /></a>';
  $strposts = $str . ' ';

  $str = '<a href="' . $scripturl . '?action=recent">' . $smf_txt[214] . '</a>';
  $strposts .= $str;

  $strposts .= $output_tag;
 	foreach ($posts as $post) {
    $strnew = $post['new'] ? '' : '<a href="' . $scripturl . '?topic=' . $post['topic'] . '.msg' . $post['new_from'] . ';topicseen#new"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
    $strnew .= ' ';
    $str = 	'<a href="' . $post['href'] . '">' . $post['short_subject'] . '</a>';
    //$strposts .= $str . $output_br;
    $strposts .= $output_tag2 . $strnew . $str;
    $strposts .= $output_br;
    $str = 	$smf_txt[525] . ' ' . $post['poster']['link'] . ' ' . $smf_txt['smf88'] . ' ' . $post['board']['link'];
    $strposts .= $str . $output_br;
    //$str = 	$post['new'] ? '' : '<a href="' . $scripturl . '?topic=' . $post['topic'] . '.msg' . $post['new_from'] . ';topicseen#new"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
    //$strposts .= $str; // . $output_br;
    $str = $post['time'];
    $strposts .= $str . $output_end_tag2;
  }
  $strposts .= $output_end_tag;

/*
  // This is the "Recent Posts".
	//if (!empty($smf_settings['number_recent_posts'])) {

  $str = '<a href="'. $scripturl . '?action=recent"><img src="' . $smf_settings['theme']['images_url'] . '/post/xx.gif" alt="' . $smf_txt[214] . '" /></a>';
  $strposts .= $str . ' ';
  $str = '<a href="' . $scripturl . '?action=recent">' . $smf_txt[214] . '</a>';
  $strposts .= $str;
  //}
*/

	$strposts = smf_api_utf8($strposts);

  if ($output_method == 'echo')
    echo $strposts;

  return $strposts;

}

// Show the top poster's name and profile link.
function smf_api_topposter($topNumber = 1, $output_method = '')
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_func, $smf_txt;

	// No connection, no authentication!
	if (!$smf_connection)
		return false;

  if ($topNumber <= 0)
    $topNumber = 1;

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

	// Find the latest poster.

  $request = smf_db_query("
		SELECT id_member, real_name, posts
		FROM {$smf_db_prefix}members
		ORDER BY posts DESC
		LIMIT $topNumber", __FILE__, __LINE__);

	$return = array();

  if ($request === false)
		return false;

	while ($row = mysql_fetch_assoc($request))
		$return[] = array(
			'id' => $row['ID_MEMBER'],
			'name' => $row['realName'],
			'href' => $scripturl . '?action=profile;u=' . $row['ID_MEMBER'],
			'link' => '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '">' . $row['realName'] . '</a>',
			'posts' => $row['posts']
		);
	mysql_free_result($request);

	// Just return all the top posters.
	if ($output_method == 'array')
		return $return;

	// Make a quick array to list the links in.
	$temp_array = array();
	foreach ($return as $member)
		$temp_array[] = $member['link'];

  $strreturn = implode(', ', $temp_array);
  $strreturn = smf_api_utf8($strreturn);

	if ($output_method == 'echo')
  	echo $strreturn;

  return $strreturn;
}

// Shows a list of online users:  YY Guests, ZZ Users and then a list...
function smf_api_whos_online($topNumber = 9999, $output_method = '')
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_func, $smf_txt;
   
	// No connection, no authentication!
	if (!$smf_connection)
		return false;

  if ($topNumber <= 0)
    $topNumber = 9999;

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

	smf_api_authenticate_user();

	// Load the users online right now.
	$result = smf_db_query("
		SELECT
			lo.id_member, lo.log_time, mem.real_name, mem.member_name, mem.show_online,
			mg.online_color, mg.id_group
		FROM {$smf_db_prefix}log_online AS lo
			LEFT JOIN {$smf_db_prefix}members AS mem ON (mem.id_member = lo.id_member)
			LEFT JOIN {$smf_db_prefix}membergroups AS mg ON (mg.id_group = IF(mem.id_group = 0, mem.id_post_group, mem.id_group))
			LIMIT $topNumber", __FILE__, __LINE__);

	$return['users'] = array();
	$return['guests'] = 0;
	$return['hidden'] = 0;
	$return['buddies'] = 0;
	$show_buddies = !empty($smf_user_info['buddies']);

	while ($row = mysql_fetch_assoc($result))
	{
		if (!isset($row['realName']))
			$return['guests']++;
		elseif (!empty($row['showOnline']) || $smf_user_info['is_admin']/*smf_allowed_to('moderate_forum')*/)
		{
			// Some basic color coding...
			if (!empty($row['onlineColor']))
				$link = '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '" style="color: ' . $row['onlineColor'] . ';">' . $row['realName'] . '</a>';
			else
				$link = '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '">' . $row['realName'] . '</a>';

			// Bold any buddies.
			if ($show_buddies && in_array($row['ID_MEMBER'], $smf_user_info['buddies']))
			{
				$return['buddies']++;
				$link = '<b>' . $link . '</b>';
			}

			$return['users'][$row['logTime'] . $row['memberName']] = array(
				'id' => $row['ID_MEMBER'],
				'username' => $row['memberName'],
				'name' => $row['realName'],
				'group' => $row['ID_GROUP'],
				'href' => $scripturl . '?action=profile;u=' . $row['ID_MEMBER'],
				'link' => $link,
				'hidden' => empty($row['showOnline']),
				'is_last' => false,
			);
		}
		else
			$return['hidden']++;
	}
	mysql_free_result($result);

	if (!empty($return['users']))
	{
		krsort($return['users']);
		$userlist = array_keys($return['users']);
		$return['users'][$userlist[count($userlist) - 1]]['is_last'] = true;
	}
	$return['num_users'] = count($return['users']) + $return['hidden'];
	$return['total_users'] = $return['num_users'] + $return['guests'];

	if ($output_method == 'array')
		return $return;

  $str = '<a href="'. $scripturl . '?action=who"><img src="' . $smf_settings['theme']['images_url'] . '/icons/online.gif" alt="' . $smf_txt[158] . '" /></a>';
  $strreturn = $str . ' ';

  $strreturn .= $return['guests'] . ' ' . ($return['guests'] == 1 ? $smf_txt['guest'] : $smf_txt['guests']) . ' ' . $return['num_users'] . ' ' . ($return['num_users'] == 1 ? $smf_txt['user'] : $smf_txt['users']);

	// Hidden users, or buddies?
	if ($return['hidden'] > 0 || $show_buddies)
	{
    $str = 	' (' . ($show_buddies ? ($return['buddies'] . ' ' . ($return['buddies'] == 1 ? $smf_txt['buddy'] : $smf_txt['buddies'])) : '') . ($show_buddies && $return['hidden'] ? ', ' : '') . (!$return['hidden'] ? '' : $return['hidden'] . ' ' . $smf_txt['hidden']) . ')';
    $strreturn .= $str;
  }
	$strreturn .=  '<br />';

	foreach ($return['users'] as $user)
	{
    $str = $user['hidden'] ? '<i>' . $user['link'] . '</i>' : $user['link'];
    $str .= $user['is_last'] ? '' : ', ';
    $strreturn .= $str;
  }

  $strreturn = smf_api_utf8($strreturn);

	if ($output_method == 'echo')
  	echo $strreturn;

  return $strreturn;
}

// Show some basic stats:  Total This: XXXX, etc.
function smf_api_board_stats($output_method = '')
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_func, $smf_txt;

	// No connection, no authentication!
	if (!$smf_connection)
		return false;

  smf_api_authenticate_user();

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

	$totals = array(
		'members' => $smf_settings['totalMembers'],
		'posts' => $smf_settings['totalMessages'],
		'topics' => $smf_settings['totalTopics']
	);

	$result = smf_db_query("
		SELECT COUNT(*)
		FROM {$smf_db_prefix}boards", __FILE__, __LINE__);
	list ($totals['boards']) = mysql_fetch_row($result);
	mysql_free_result($result);

	$result = smf_db_query("
		SELECT COUNT(*)
		FROM {$smf_db_prefix}categories", __FILE__, __LINE__);
	list ($totals['categories']) = mysql_fetch_row($result);
	mysql_free_result($result);

	if ($output_method == 'array')
		return $totals;

  /*
  ', $context['common_stats']['total_posts'], ' ', $txt[95], ' ', $txt['smf88'], ' ', $context['common_stats']['total_topics'], ' '
  , $txt[64], ' ', $txt[525], ' ', $context['common_stats']['total_members'], ' ', $txt[19], '. ', $txt[656], ': <b> ', $context['common_stats']['latest_member']['link'], '</b>
  <br /> ' . $txt[659] . ': <b>&quot;' . $context['latest_post']['link'] . '&quot;</b>  ( ' . $context['latest_post']['time'] . ' )<br />
  <a href="', $scripturl, '?action=recent">', $txt[234], '</a>', $context['show_stats'] ? '<br />
  <a href="' . $scripturl . '?action=stats">' . $smf_txt['smf223'] . '</a>' : '', '
  	$context['common_stats']['latest_member'] = array(
		'id' => $smf_settings['latestMember'],
		'name' => $smf_settings['latestRealName'],
		'href' => $scripturl . '?action=profile;u=' . $smf_settings['latestMember'],
		'link' => '<a href="' . $scripturl . '?action=profile;u=' . $smf_settings['latestMember'] . '">' . $smf_settings['latestRealName'] . '</a>',
	);
	$context['common_stats'] = array(
		'total_posts' => smf_comma_format($smf_settings['totalMessages']),
		'total_topics' => comma_format($smf_settings['totalTopics']),
		'total_members' => comma_format($smf_settings['totalMembers']),
		'latest_member' => $context['common_stats']['latest_member'],
	);
 	$settings['display_recent_bar'] = !empty($settings['number_recent_posts']) ? $settings['number_recent_posts'] : 0;
	$settings['show_member_bar'] &= allowedTo('view_mlist');
	$context['show_stats'] = allowedTo('view_stats') && !empty($smf_settings['trackStats']);
	$context['show_member_list'] = allowedTo('view_mlist');
	$context['show_who'] = allowedTo('who_view') && !empty($smf_settings['who_enabled']);
$context['show_karmastat'] = allowedTo('karmalog_view') && empty($smf_settings['karmapermiss']);
  */
  $strreturn = "";
  $str = '<a href="'. $scripturl . '?action=stats"><img src="' . $smf_settings['theme']['images_url'] . '/icons/info.gif" alt="' . $smf_txt[645] . '" /></a>';
  $strreturn .= $str . ' ';

	$str = smf_comma_format($totals['posts']) . ' ' . $smf_txt[95] . ' ' . $smf_txt['smf88'] . ' ' . smf_comma_format($totals['topics']) . ' ' . $smf_txt[64]; //'<br />';
  $strreturn .= $str;
  $str = ' ' . $smf_txt[525] . ' <a href="' . $scripturl . '?action=mlist">' . $totals['members'] . '</a> ' . $smf_txt[310] . '<br />';
  $strreturn .= $str;

  $str = $smf_txt[656] . '<br /><b> ' . '<a href="' . $scripturl . '?action=profile;u=' . $smf_settings['latestMember'] . '">' . $smf_settings['latestRealName'] . '</a></b><br />';
  $strreturn .= $str;

	// This is the "Recent Posts".
	//if (!empty($smf_settings['number_recent_posts'])) {
  //$str = '<a href="'. $scripturl . '?action=recent"><img src="' . $smf_settings['theme']['images_url'] . '/post/xx.gif" alt="' . $smf_txt[214] . '" /></a>';
  //$strreturn .= $str . ' ';
  $str = '<a href="' . $scripturl . '?action=recent">' . $smf_txt[214] . '</a><br />';
  $strreturn .= $str;

  $str = '<a href="' . $scripturl . '?action=stats">' . $smf_txt['smf223'] . '</a><br />';
  $strreturn .= $str;

  if (isset($smf_settings['karmadescmod']) && !empty($smf_settings['karmadescmod']) && !empty($smf_txt['statkarma']) /*&& $smf_settings['show_karmastat']*/) {
    $str = '<a href="' . $scripturl . '?action=viewkarma">' . $smf_txt['statkarma'] . '</a><br />';
    $strreturn .= $str;
  }
  //}

  /*
	$str = $smf_txt[488] . ': <a href="' . $scripturl . '?action=mlist">' . $totals['members'] . '</a><br />';
  $strreturn .= $str;
	$str = $smf_txt[489] . ': ' . $totals['posts'] . '<br />';
  $strreturn .= $str;
  $str = $smf_txt[490] . ': ' . $totals['topics'] . ' <br />';
  $strreturn .= $str;
  $str = $smf_txt[658] . ': ' . $totals['categories'] . '<br />';
  $strreturn .= $str;
  $str = $smf_txt[665] . ': ' . $totals['boards'];
  $strreturn .= $str;
  */

	$strreturn = smf_api_utf8($strreturn);

	if ($output_method == 'echo')
  	echo $strreturn;

  return $strreturn;
}

function smf_api_pm($output_method = '')
{
	global $smf_connection, $smf_settings, $smf_user_info, $smf_func, $smf_txt;

  $strreturn = "";
	// No connection, no authentication!
	if (!$smf_connection)
		return $strreturn;

  if (!smf_api_authenticate_user())
    return $strreturn;

	$scripturl = $smf_settings['forum_url'];
  $scripturl .= '/index.php';

  $str = $smf_txt['hello_member_ndt'] . ' <b>' . $smf_user_info['name'] . '</b><br />';
  $strreturn .= $str;

  $str = $smf_txt[660] . ' <a href="' . $scripturl . '?action=pm">' . $smf_user_info['instantMessages'] .
  ' ' . ($smf_user_info['instantMessages'] != 1 ? $smf_txt[153] : $smf_txt[471]) . '</a>';
  $strreturn .= $str;
  $str = $smf_txt['newmessages4'] . ' ' .
  '<a href="' . $scripturl . '?action=pm">' . $smf_user_info['unreadMessages'] . '</a>' . ' ' .
  ($smf_user_info['unreadMessages'] == 1 ? $smf_txt['newmessages0'] : $smf_txt['newmessages1']);
  $strreturn .= $str;
  /*
  $strreturn .= "<ul>";
  $str = '<li><a href="' . $scripturl . '?action=unread">' . $smf_txt['unread_since_visit'] . '</a></li>';
  $strreturn .= $str;
  $str = '<li><a href="' . $scripturl . '?action=unreadreplies">' . $smf_txt['show_unread_replies'] . '</a></li>';
  $strreturn .= $str;
  $strreturn .= "</ul>";
  */

  $str = '<br />' . '<a href="' . $scripturl . '?action=unread"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
  $strreturn .= $str;
  $str = ' <a href="' . $scripturl . '?action=unread">' . $smf_txt['unread_since_visit'] . '</a> <br />';
  $strreturn .= $str;

  $str = ' <a href="' . $scripturl . '?action=unreadreplies"><img src="' . $smf_settings['theme']['images_url'] . '/' . $smf_user_info['language'] . '/new.gif" alt="' . $smf_txt[302] . '" /></a>';
  $strreturn .= $str;
  $str = ' <a href="' . $scripturl . '?action=unreadreplies">' . $smf_txt['show_unread_replies'] . '</a> <br />';
  $strreturn .= $str;
  /*
  $str = '<br /><a href="' . $scripturl . '?action=unread">' . $smf_txt['unread_since_visit'] . '</a> <br />';
  $strreturn .= $str;
  $str = '<a href="' . $scripturl . '?action=unreadreplies">' . $smf_txt['show_unread_replies'] . '</a> <br />';
  $strreturn .= $str;
  */

 	$strreturn = smf_api_utf8($strreturn);

	if ($output_method == 'echo')
  	echo $strreturn;

  return $strreturn;
}

// This function allows the admin to register a new member by hand.
function smf_api_register($username, $password, $email, $data = array(), $theme_vars = array())
{
   
	global $smf_connection, $smf_settings, $smf_user_info, $smf_txt;

  if (!$smf_connection)
	  return false;

	if (!smf_api_user_name_validate($username)) {
	  $smf_settings['error_msg'] = "bad username";		
    return false;
  }

	if (!smf_is_valid_email($email)) {
		$smf_settings['error_msg'] = "bad email";
		return false;
	}
  
 	$username = smf_api_charset($username);
 	$password = smf_api_charset($password);

	$rc = smf_register($username, $password, $email, $data, $theme_vars);
    
	return $rc;
}

//function smf_api_update_user($members, $data)
function smf_api_update_user($id, $username = '', $password = '', $email = '', $data = array())
{
	global $smf_connection, $smf_settings, $smf_user_info, $smf_txt;
   
    $rc = false;

  if (!$smf_connection || empty($id) || empty($smf_user_info['id_member']) || empty($smf_user_info['member_name']))
    return $rc;

  if (!empty($username))
      {
          if (!smf_api_user_name_validate($username)) {
    	$smf_settings['error_msg'] = "bad username";
        
		  return false;
    }

    $username = smf_api_charset($username);

    if (isset($data['memberName'])) {
        $data['memberName'] = '\'' . $username . '\''; }
 	  else
      $data += array('memberName' => '\'' . $username . '\'');
  }
  else
    $username = $smf_user_info['member_name'];

  if (!empty($password))
  {
 	  $password = smf_api_charset($password);
 	  $passwd = sha1(strtolower($username) . $password);

 	  if (isset($data['passwd']))
   	  $data['passwd'] = '\'' . $passwd . '\'';
 	  else
      $data += array('passwd' => '\'' . $passwd . '\'');
 	}
 	//else
  //  $passwd = $smf_user_info['passwd'];

  if (!empty($email))
  {
    // Make sure the email is valid.
  	if (!smf_is_valid_email($email)) {
		  $smf_settings['error_msg'] = "bad email";
		  return false;
	  }
    //$email = smf_api_charset($email);
    if (isset($data['emailAddress']))
   	  $data['emailAddress'] = '\'' . $email . '\'';
 	  else
      $data += array('emailAddress' => '\'' . $email . '\'');
  }

  if (!empty($data)) {
    $rc = smf_update_member_data($id, $data);
  }
 
	return $rc;

}

function smf_api_user_name_validate($username)
{
	global $smf_connection, $smf_settings, $smf_user_info;

	if (!$smf_connection || empty($username)) {
       
		return false;
    }
 	
    if (preg_match('~[<>&"\'=\\\]~', $username) === 1 || $username === '_' || $username === '|' || strpos($username, '[code') !== false || strpos($username, '[/code') !== false || strlen($username) > 60) {
		return false;
  }

  $username = smf_api_charset($username);
  
  if (smf_is_reserved_name($username)) {
    return false;
  }

  return true;
}

function smf_api_user_password_validate($password, $username)
{
	global $smf_connection, $smf_settings, $smf_user_info;

	if (!$smf_connection || empty($password) || empty($username))
		return false;

  //if (!empty($smf_settings['check_password_strength']))
	//{
		$password = smf_api_charset($password);
    $username = smf_api_charset($username);
    
    if (smf_validate_password($password, $username) != null)
      return false;
	//}
  
  return true;
}

function smf_api_user_email_validate($email, $username)
{
	global $smf_connection, $smf_settings, $smf_user_info;

	if (!$smf_connection || empty($email) || empty($username))
		return false;

  if (!smf_is_valid_email($email))
    return false;  
  
  $username = smf_api_charset($username);  
  
  if (smf_is_email_in_use($email, $username))
    return false;
  
  //if (!empty($smf_settings['check_email_ban']) && smf_is_banned_email($email, 'cannot_register', ""))	  
  //  return false;

  return true;
}

function smf_api_login($time, $id, $password = '')
{
  return smf_api_set_login_cookie($time, $id, $password, false);
}

function smf_api_logout($internal = false)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info;

  if (!$smf_connection)
	  return false;

	if (isset($_SESSION['pack_ftp']))
		$_SESSION['pack_ftp'] = null;

	// Just ensure they aren't a guest!
	if (!$smf_user_info['is_guest'])
	{
	  $ID_MEMBER = $smf_user_info['id'];
		// If you log out, you aren't online anymore :P.
		smf_db_query("
			DELETE FROM {$smf_db_prefix}log_online
			WHERE id_member = $ID_MEMBER
			LIMIT 1", __FILE__, __LINE__);
	}

	$_SESSION['log_time'] = 0;

	// Empty the cookie! (set it in the past, and for ID_MEMBER = 0)
	set_login_cookie(-3600, 0);

  smf_clear_user_info();

	unset($_SESSION['logout_url']);
  unset($_SESSION['login_' . $smf_settings['cookiename']]);
  
  setcookie(SMF_API_PHPSESSID, '', time()-42000, '/');

  
  return true;
}

////////////////////////////////////////////////////////////////////

function smf_api_utf8($str)
{
	global $smf_settings, $smf_txt;

  if (!$smf_settings['utf8'] && function_exists('iconv'))
		$str = iconv($smf_txt['lang_character_set'], 'UTF-8', $str);
  return $str;
}

function smf_api_charset($str)
{
	global $smf_settings, $smf_txt;

  if (!$smf_settings['utf8'] && function_exists('iconv'))
		$str = iconv('UTF-8', $smf_txt['lang_character_set'], $str);
  return $str;
}

////////////////////////////////////////////////////////////////////
?>