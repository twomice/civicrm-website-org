<?php
/**********************************************************************************
* SMF: Simple Machines Forum                                                      *
* Open-Source Project Inspired by Zef Hemel (zef@zefhemel.com)                    *
* =============================================================================== *
* Software Version:           SMF 1.1.4                                           *
* Software by:                Simple Machines (http://www.simplemachines.org)     *
* Copyright 2006 by:          Simple Machines LLC (http://www.simplemachines.org) *
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
* smf_api_subs.php               v 1.1.4.04 2008/04/28                            *
***********************************************************************************
* Copyright 2006-2008 by:     Vadim G.B. (http://vgb.org.ru)                      *
* Some code from Simple Machines Forum. Distributed with permission.              *
* Modified  2006-2008 by:     Vadim G.B. (http://vgb.org.ru)                      *
**********************************************************************************/

if (!defined('SMF'))
  die('Hacking attempt...');


function smf_db_insert_id()
{
	global $smf_connection;

	return mysql_insert_id($smf_connection);
}

// Log an error, if the option is on.
function smf_log_error($error_message, $file = null, $line = null)
{
	global $smf_settings, $smf_connection, $smf_db_prefix;

	// Check if error logging is actually on and we're connected...
	if (empty($smf_settings['enableErrorLogging']) || !$smf_connection)
		return $error_message;

	// Basically, htmlspecialchars it minus &. (for entities!)
	$error_message = strtr($error_message, array('<' => '&lt;', '>' => '&gt;', '"' => '&quot;'));
	$error_message = strtr($error_message, array('&lt;br /&gt;' => '<br />', '&lt;b&gt;' => '<b>', '&lt;/b&gt;' => '</b>', "\n" => '<br />'));

	// Add a file and line to the error message?
	if ($file != null)
		$error_message .= '<br />' . $file;
	if ($line != null)
		$error_message .= '<br />' . $line;

	// Just in case there's no ID_MEMBER or IP set yet.
	if (empty($smf_user_info['id']))
		$smf_user_info['id'] = 0;

	// Insert the error into the database.
	smf_db_query("
		INSERT INTO {$smf_db_prefix}log_errors
			(id_member, log_time, ip, url, message, session)
		VALUES ($smf_user_info[id], " . time() . ", '$_SERVER[REMOTE_ADDR]', '" . (empty($_SERVER['QUERY_STRING']) ? '' : addslashes(htmlspecialchars('?' . $_SERVER['QUERY_STRING']))) . "', '" . addslashes($error_message) . "', '" . @session_id() . "')", __FILE__, __LINE__);

	// Return the message to make things simpler.
	return $error_message;
}


// Do a query, and if it fails log an error in the SMF error log.
function smf_db_query($string, $file, $line)
{
	global $smf_settings, $smf_connection;

	if (!$smf_connection)
		return false;

	$smf_settings['db_count'] = @$smf_settings['db_count'] + 1;

	$ret = mysql_query($string, $smf_connection);

	if ($ret === false)
		smf_log_error(mysql_error($smf_connection), $file, $line);

	return $ret;
}


// Load the $modSettings array.
// function reloadSettings()

function smf_reload_settings()
{
  global $smf_connection, $smf_db_prefix, $smf_func, $smf_txt, $smf_sourcedir;

  if (!$smf_connection)
	  return false;

  // UTF-8 in regular expressions is unsupported on PHP(win) versions < 4.2.3.
  $utf8 = (empty($smf_settings['global_character_set']) ? $smf_txt['lang_character_set'] : $smf_settings['global_character_set']) === 'UTF-8' && (strpos(strtolower(PHP_OS), 'win') === false || @version_compare(PHP_VERSION, '4.2.3') != -1);

  // Set a list of common functions.
  $ent_list = empty($smf_settings['disableEntityCheck']) ? '&(#\d{1,7}|quot|amp|lt|gt|nbsp);' : '&(#021|quot|amp|lt|gt|nbsp);';
  $ent_check = empty($smf_settings['disableEntityCheck']) ? array('preg_replace(\'~(&#(\d{1,7}|x[0-9a-fA-F]{1,6});)~e\', \'$smf_func[\\\'entity_fix\\\'](\\\'\\2\\\')\', ', ')') : array('', '');

  // Preg_replace can handle complex characters only for higher PHP versions.
  $space_chars = $utf8 ? (@version_compare(PHP_VERSION, '4.3.3') != -1 ? '\x{C2A0}\x{E28080}-\x{E2808F}\x{E280AF}\x{E2809F}\x{E38080}\x{EFBBBF}' : sprintf('%c%c%c%c%c-%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c', 0xC2, 0xA0, 0xE2, 0x80, 0x80, 0xE2, 0x80, 0x8F, 0xE2, 0x80, 0xAF, 0xE2, 0x80, 0x9F, 0xE3, 0x80, 0x80, 0xEF, 0xBB, 0xBF)) : '\xA0';

  $smf_func = array(
    'entity_fix' => create_function('$string', '
      $num = substr($string, 0, 1) === \'x\' ? hexdec(substr($string, 1)) : (int) $string;
      return $num < 0x20 || $num > 0x10FFFF || ($num >= 0xD800 && $num <= 0xDFFF) ? \'\' : \'&#\' . $num . \';\';'),
    'substr' => create_function('$string, $start, $length = null', '
      global $smf_func;
      $ent_arr = preg_split(\'~(&#' . (empty($smf_settings['disableEntityCheck']) ? '\d{1,7}' : '021') . ';|&quot;|&amp;|&lt;|&gt;|&nbsp;|.)~' . ($utf8 ? 'u' : '') . '\', ' . implode('$string', $ent_check) . ', -1, PREG_SPLIT_DELIM_CAPTURE | PREG_SPLIT_NO_EMPTY);
      return $length === null ? implode(\'\', array_slice($ent_arr, $start)) : implode(\'\', array_slice($ent_arr, $start, $length));'),
    'strlen' => create_function('$string', '
      global $smf_func;
      return strlen(preg_replace(\'~' . $ent_list . ($utf8 ? '|.~u' : '~') . '\', \'_\', ' . implode('$string', $ent_check) . '));'),
    'strpos' => create_function('$haystack, $needle, $offset = 0', '
      global $smf_func;
      $haystack_arr = preg_split(\'~(&#' . (empty($smf_settings['disableEntityCheck']) ? '\d{1,7}' : '021') . ';|&quot;|&amp;|&lt;|&gt;|&nbsp;|.)~' . ($utf8 ? 'u' : '') . '\', ' . implode('$haystack', $ent_check) . ', -1, PREG_SPLIT_DELIM_CAPTURE | PREG_SPLIT_NO_EMPTY);
      $haystack_size = count($haystack_arr);
      if (strlen($needle) === 1)
      {
        $result = array_search($needle, array_slice($haystack_arr, $offset));
        return is_int($result) ? $result + $offset : false;
      }
      else
      {
        $needle_arr = preg_split(\'~(&#' . (empty($smf_settings['disableEntityCheck']) ? '\d{1,7}' : '021') . ';|&quot;|&amp;|&lt;|&gt;|&nbsp;|.)~' . ($utf8 ? 'u' : '') . '\',  ' . implode('$needle', $ent_check) . ', -1, PREG_SPLIT_DELIM_CAPTURE | PREG_SPLIT_NO_EMPTY);
        $needle_size = count($needle_arr);

        $result = array_search($needle_arr[0], array_slice($haystack_arr, $offset));
        while (is_int($result))
        {
          $offset += $result;
          if (array_slice($haystack_arr, $offset, $needle_size) === $needle_arr)
            return $offset;
          $result = array_search($needle_arr[0], array_slice($haystack_arr, ++$offset));
        }
        return false;
      }'),
    'htmlspecialchars' => create_function('$string, $quote_style = ENT_COMPAT, $charset = \'ISO-8859-1\'', '
      global $smf_func;
      return ' . strtr($ent_check[0], array('&' => '&amp;'))  . 'htmlspecialchars($string, $quote_style, ' . ($utf8 ? '\'UTF-8\'' : '$charset') . ')' . $ent_check[1] . ';'),
    'htmltrim' => create_function('$string', '
      global $smf_func;
      return preg_replace(\'~^([ \t\n\r\x0B\x00' . $space_chars . ']|&nbsp;)+|([ \t\n\r\x0B\x00' . $space_chars . ']|&nbsp;)+$~' . ($utf8 ? 'u' : '') . '\', \'\', ' . implode('$string', $ent_check) . ');'),
    'truncate' => create_function('$string, $length', (empty($smf_settings['disableEntityCheck']) ? '
      global $smf_func;
      $string = ' . implode('$string', $ent_check) . ';' : '') . '
      preg_match(\'~^(' . $ent_list . '|.){\' . $smf_func[\'strlen\'](substr($string, 0, $length)) . \'}~'.  ($utf8 ? 'u' : '') . '\', $string, $matches);
      $string = $matches[0];
      while (strlen($string) > $length)
        $string = preg_replace(\'~(' . $ent_list . '|.)$~'.  ($utf8 ? 'u' : '') . '\', \'\', $string);
      return $string;'),
    'strtolower' => $utf8 ? (function_exists('mb_strtolower') ? create_function('$string', '
      return mb_strtolower($string, \'UTF-8\');') : create_function('$string', '
      global $smf_sourcedir;
      require_once($smf_sourcedir . \'/Subs-Charset.php\');
      return utf8_strtolower($string);')) : 'strtolower',
    'strtoupper' => $utf8 ? (function_exists('mb_strtoupper') ? create_function('$string', '
			return mb_strtoupper($string, \'UTF-8\');') : create_function('$string', '
			global $smf_sourcedir;
			require_once($smf_sourcedir . \'/Subs-Charset.php\');
			return utf8_strtoupper($string);')) : 'strtoupper',
		'ucfirst' => $utf8 ? create_function('$string', '
			global $smf_func;
			return $smf_func[\'strtoupper\']($smf_func[\'substr\']($string, 0, 1)) . $smf_func[\'substr\']($string, 1);') : 'ucfirst',
		'ucwords' => $utf8 ? (function_exists('mb_convert_case') ? create_function('$string', '
			return mb_convert_case($string, MB_CASE_TITLE, \'UTF-8\');') : create_function('$string', '
			global $smf_func;
			$words = preg_split(\'~([\s\r\n\t]+)~\', $string, -1, PREG_SPLIT_DELIM_CAPTURE);
			for ($i = 0, $n = count($words); $i < $n; $i += 2)
				$words[$i] = $smf_func[\'ucfirst\']($words[$i]);
			return implode(\'\', $words);')) : 'ucwords',
	);

	// Setting the timezone is a requirement for some functions in PHP >= 5.1.
	if (isset($smf_settings['default_timezone']) && function_exists('date_default_timezone_set'))
		date_default_timezone_set($smf_settings['default_timezone']);

  return true;
}

// Updates the settings table as well as $smf_settings... only does one at a time if $update is true.
// All input variables and values are assumed to have escaped apostrophes(')!
function smf_update_settings($changeArray, $update = false)
{
	global $smf_connection, $smf_db_prefix, $smf_settings;

  if (!$smf_connection)
	  return false;

	if (empty($changeArray) || !is_array($changeArray))
		return;
   
	// In some cases, this may be better and faster, but for large sets we don't want so many UPDATEs.
	if ($update)
	{
		foreach ($changeArray as $variable => $value)
		{
			smf_db_query("
				UPDATE {$smf_db_prefix}settings
				SET value = " . ($value === true ? 'value + 1' : ($value === false ? 'value - 1' : "'$value'")) . "
				WHERE variable = '$variable'
				LIMIT 1", __FILE__, __LINE__);
			$smf_settings[$variable] = $value === true ? $smf_settings[$variable] + 1 : ($value === false ? $smf_settings[$variable] - 1 : stripslashes($value));
		}
     
		// Clean out the cache and make sure the cobwebs are gone too.
		//cache_put_data('modSettings', null, 90);

		return;
	}

	$replaceArray = array();
	foreach ($changeArray as $variable => $value)
	{
		// Don't bother if it's already like that ;).
		if (isset($smf_settings[$variable]) && $smf_settings[$variable] == stripslashes($value))
			continue;
		// If the variable isn't set, but would only be set to nothing'ness, then don't bother setting it.
		elseif (!isset($smf_settings[$variable]) && empty($value))
			continue;

		$replaceArray[] = "(SUBSTRING('$variable', 1, 255), SUBSTRING('$value', 1, 65534))";
		$smf_settings[$variable] = stripslashes($value);
	}

	if (empty($replaceArray))
		return;
  
	smf_db_query("
		REPLACE INTO {$smf_db_prefix}settings
			(variable, value)
		VALUES " . implode(',
			', $replaceArray), __FILE__, __LINE__);

}


// Load a language file.  Tries the current and default themes as well as the user and global languages.
function smf_load_language($template_name, $lang = '')
{
  global $smf_settings, $smf_user_info, $smf_language_dir, $smf_txt;
  global $context, $settings, $options, $scripturl, $boardurl, $modSettings;

  //static $already_loaded = array();
  $scripturl = $smf_settings['forum_url'];

  // Default to the user's language.
  if ($lang == '')
    $lang = $smf_user_info['language'];

  // Obviously, the current theme is most important to check.
  $attempts = array(
    array($smf_settings['theme']['theme_dir'], $template_name, $lang, $smf_settings['theme']['theme_url']),
    array($smf_settings['theme']['theme_dir'], $template_name, $smf_settings['language'], $smf_settings['theme']['theme_url']),
  );

  // Do we have a base theme to worry about?
  if (isset($smf_settings['theme']['base_theme_dir']))
  {
    $attempts[] = array($smf_settings['theme']['base_theme_dir'], $template_name, $smf_settings['theme']['base_theme_url']);
    $attempts[] = array($smf_settings['theme']['base_theme_dir'], $template_name, $smf_settings['language'], $smf_settings['theme']['base_theme_url']);
  }

  // Fallback on the default theme if necessary.
	$attempts[] = array($smf_settings['theme']['default_theme_dir'], $template_name, $lang, $smf_settings['theme']['default_theme_url']);
	$attempts[] = array($smf_settings['theme']['default_theme_dir'], $template_name, $smf_settings['language'], $smf_settings['theme']['default_theme_url']);

	// Try to include the language file.
	foreach ($attempts as $k => $file)
		if (file_exists($file[0] . '/languages/' . $file[1] . '.' . $file[2] . '.php'))
		{
			$smf_language_dir = $file[0] . '/languages';
			$lang = $file[2];

			//template_include($file[0] . '/languages/' . $file[1] . '.' . $file[2] . '.php');
			$filename = $file[0] . '/languages/' . $file[1] . '.' . $file[2] . '.php';
 			//require_once($filename);
 			require($filename);
 			$smf_txt = array();
 			//global $txt;
			$smf_txt = $txt;
			break;
		}

	// Return the language actually loaded.
	return $lang;
}

function smf_load_theme_data($ID_THEME = 0)
{
	global $smf_settings, $smf_user_info, $smf_connection, $smf_db_prefix;

	if (!$smf_connection)
		return null;

	// The theme was specified by parameter.
	if (!empty($ID_THEME))
		$theme = (int) $ID_THEME;
	// The theme was specified by REQUEST.
	elseif (!empty($_REQUEST['theme']))
	{
		$theme = (int) $_REQUEST['theme'];
		$_SESSION['ID_THEME'] = $theme;
	}
	// The theme was specified by REQUEST... previously.
	elseif (!empty($_SESSION['ID_THEME']))
		$theme = (int) $_SESSION['ID_THEME'];
	// The theme is just the user's choice. (might use ?board=1;theme=0 to force board theme.)
	elseif (!empty($smf_user_info['theme']) && !isset($_REQUEST['theme']))
		$theme = $smf_user_info['theme'];
	// The theme is the forum's default.
	else
		$theme = $smf_settings['theme_guests'];

	// Verify the ID_THEME... no foul play.
	if (empty($smf_settings['theme_default']) && $theme == 1 && $ID_THEME != 1)
		$theme = $smf_settings['theme_guests'];
	elseif (!empty($smf_settings['knownThemes']) && !empty($smf_settings['theme_allow']))
	{
		$themes = explode(',', $smf_settings['knownThemes']);
		if (!in_array($theme, $themes))
			$theme = $smf_settings['theme_guests'];
		else
			$theme = (int) $theme;
	}
	else
		$theme = (int) $theme;

	$member = empty($smf_user_info['id']) ? -1 : $smf_user_info['id'];

	// Load variables from the current or default theme, global or this user's.
	$result = smf_db_query("
		SELECT variable, value, id_member, id_theme
		FROM {$smf_db_prefix}themes
		WHERE id_member IN (0, $member)
			AND id_theme" . ($theme == 1 ? ' = 1' : " IN ($theme, 1)"), __FILE__, __LINE__);
	// Pick between $smf_settings['theme'] and $smf_user_info['theme'] depending on whose data it is.
	$themeData = array(0 => array(), $member => array());
	while ($row = mysql_fetch_assoc($result))
	{
		// If this is the theme_dir of the default theme, store it.
		if (in_array($row['variable'], array('theme_dir', 'theme_url', 'images_url')) && $row['ID_THEME'] == '1' && empty($row['ID_MEMBER']))
			$themeData[0]['default_' . $row['variable']] = $row['value'];

		// If this isn't set yet, is a theme option, or is not the default theme..
		if (!isset($themeData[$row['ID_MEMBER']][$row['variable']]) || $row['ID_THEME'] != '1')
			$themeData[$row['ID_MEMBER']][$row['variable']] = substr($row['variable'], 0, 5) == 'show_' ? $row['value'] == '1' : $row['value'];
	}
	mysql_free_result($result);

	$smf_settings['theme'] = $themeData[0];
	$smf_user_info['theme'] = $themeData[$member];

	$smf_settings['theme']['theme_id'] = $theme;

	$smf_settings['theme']['actual_theme_url'] = $smf_settings['theme']['theme_url'];
	$smf_settings['theme']['actual_images_url'] = $smf_settings['theme']['images_url'];
	$smf_settings['theme']['actual_theme_dir'] = $smf_settings['theme']['theme_dir'];
}


// Formats a number to display in the style of the admin's choosing.
//function comma_format($number, $override_decimal_count = false)
function smf_comma_format($number, $override_decimal_count = false)
{
	global $smf_settings;
	static $thousands_separator = null, $decimal_separator = null, $decimal_count = null;

	// !!! Should, perhaps, this just be handled in the language files, and not a mod setting?
	// (French uses 1 234,00 for example... what about a multilingual forum?)

	// Cache these values...
	if ($decimal_separator === null)
	{
		// Not set for whatever reason?
		if (empty($smf_settings['number_format']) || preg_match('~^1([^\d]*)?234([^\d]*)(0*?)$~', $smf_settings['number_format'], $matches) != 1)
			return $number;

		// Cache these each load...
		$thousands_separator = $matches[1];
		$decimal_separator = $matches[2];
		$decimal_count = strlen($matches[3]);
	}

	// Format the string with our friend, number_format.
	return number_format($number, is_float($number) ? ($override_decimal_count === false ? $decimal_count : $override_decimal_count) : 0, $decimal_separator, $thousands_separator);
}

//function timeformat($logTime, $show_today = true)
// Format a time to make it look purdy.
function smf_timeformat($logTime, $show_today = true)
{
	global $smf_user_info, $smf_settings, $smf_txt, $smf_func;
	// Offset the time.
	$time = $logTime + ($smf_user_info['time_offset'] + $smf_settings['time_offset']) * 3600;

	// We can't have a negative date (on Windows, at least.)
	if ($time < 0)
		$time = 0;

	// Today and Yesterday?
	if ($smf_settings['todayMod'] >= 1 && $show_today === true)
	{
		// Get the current time.
		$nowtime = smf_forum_time();

		$then = @getdate($time);
		$now = @getdate($nowtime);

		// Try to make something of a time format string...
		$s = strpos($smf_user_info['time_format'], '%S') === false ? '' : ':%S';
		if (strpos($smf_user_info['time_format'], '%H') === false && strpos($smf_user_info['time_format'], '%T') === false)
			$today_fmt = '%I:%M' . $s . ' %p';
		else
			$today_fmt = '%H:%M' . $s;

		// Same day of the year, same year.... Today!
		if ($then['yday'] == $now['yday'] && $then['year'] == $now['year'])
			return $smf_txt['smf10'] . smf_timeformat($logTime, $today_fmt);

		// Day-of-year is one less and same year, or it's the first of the year and that's the last of the year...
		if ($smf_settings['todayMod'] == '2' && (($then['yday'] == $now['yday'] - 1 && $then['year'] == $now['year']) || ($now['yday'] == 0 && $then['year'] == $now['year'] - 1) && $then['mon'] == 12 && $then['mday'] == 31))
			return $smf_txt['smf10b'] . smf_timeformat($logTime, $today_fmt);
	}

	$str = !is_bool($show_today) ? $show_today : $smf_user_info['time_format'];

	if (setlocale(LC_TIME, $smf_txt['lang_locale']))
	{
		foreach (array('%a', '%A', '%b', '%B') as $token)
			if (strpos($str, $token) !== false)
				$str = str_replace($token, $smf_func['ucwords'](strftime($token, $time)), $str);
	}
	else
	{
		// Do-it-yourself time localization.  Fun.
		foreach (array('%a' => 'days_short', '%A' => 'days', '%b' => 'months_short', '%B' => 'months') as $token => $text_label)
			if (strpos($str, $token) !== false)
				$str = str_replace($token, $smf_txt[$text_label][(int) strftime($token === '%a' || $token === '%A' ? '%w' : '%m', $time)], $str);
		if (strpos($str, '%p'))
			$str = str_replace('%p', (strftime('%H', $time) < 12 ? 'am' : 'pm'), $str);
	}

	// Format any other characters..
	return strftime($str, $time);
}

if (!function_exists('stripos'))
{
	function stripos($haystack, $needle, $offset = 0)
	{
		return strpos(strtolower($haystack), strtolower($needle), $offset);
	}
}

/**
 * Truncate a UTF-8-encoded string safely to a number of bytes.
 *
 * If the end position is in the middle of a UTF-8 sequence, it scans backwards
 * until the beginning of the byte sequence.
 *
 * Use this function whenever you want to chop off a string at an unsure
 * location. On the other hand, if you're sure that you're splitting on a
 * character boundary (e.g. after using strpos() or similar), you can safely use
 * substr() instead.
 *
 * @param $string
 *   The string to truncate.
 * @param $len
 *   An upper limit on the returned string length.
 * @param $wordsafe
 *   Flag to truncate at nearest space. Defaults to FALSE.
 * @return
 *   The truncated string.
 */
function smf_truncate_utf8($string, $len, $wordsafe = FALSE, $dots = FALSE) {
  global $smf_func;

	$slen = $smf_func['strlen']($string);

	// It was already short enough!
  if ($slen <= $len) {
    return $string;
  }

  if ($wordsafe) {
    $end = $len;
    while (($string[--$len] != ' ') && ($len > 0)) {};
    if ($len == 0) {
      $len = $end;
    }
  }
  if ((ord($string[$len]) < 0x80) || (ord($string[$len]) >= 0xC0)) {
    return $smf_func['substr']($string, 0, $len) . ($dots ? '...' : '');
  }
  while (--$len >= 0 && ord($string[$len]) >= 0x80 && ord($string[$len]) < 0xC0) {};
  return $smf_func['substr']($string, 0, $len) . ($dots ? '...' : '');
}

// Shorten a subject + internationalization concerns.
//function shorten_subject($subject, $len)
function smf_shorten_subject($subject, $len)
{
	global $smf_settings, $smf_func;

  if ($smf_settings['utf8'])
		return smf_truncate_utf8($subject, $len, false, true);
	else
		// Shorten it by the length it was too long, and strip off junk from the end.
		return $smf_func['substr']($subject, 0, $len) . '...';
}

// The current time with offset. forum_time
//function forum_time($use_user_offset = true, $timestamp = null)
function smf_forum_time($use_user_offset = true, $timestamp = null)
{
	global $smf_user_info, $smf_settings;

	if ($timestamp === null)
		$timestamp = time();
	elseif ($timestamp == 0)
		return 0;

	return $timestamp + ($smf_settings['time_offset'] + ($use_user_offset ? $smf_user_info['timeOffset'] : 0)) * 3600;
}

// Format a time to make it look purdy.
function smf_format_time($logTime)
{
	global $smf_user_info, $smf_settings, $smf_func;

	//return smf_timeformat($logTime, true);
	//return smf_timeformat($logTime, false);

	// Offset the time - but we can't have a negative date!
	$time = max($logTime + (@$smf_user_info['timeOffset'] + $smf_settings['time_offset']) * 3600, 0);

	// Format some in caps, and then any other characters..
	return strftime(strtr(!empty($smf_user_info['timeFormat']) ? $smf_user_info['timeFormat'] : $smf_settings['time_format'], array('%a' => $smf_func['ucwords'](strftime('%a', $time)), '%A' => $smf_func['ucwords'](strftime('%A', $time)), '%b' => $smf_func['ucwords'](strftime('%b', $time)), '%B' => $smf_func['ucwords'](strftime('%B', $time)))), $time);
  //return strftime(strtr(!empty($smf_user_info['timeFormat']) ? $smf_user_info['timeFormat'] : $smf_settings['time_format'], array('%a' => ucwords(strftime('%a', $time)), '%A' => ucwords(strftime('%A', $time)), '%b' => ucwords(strftime('%b', $time)), '%B' => ucwords(strftime('%B', $time)))), $time);
}

/**********************************************************************************
* Subs-Auth.php                                                                   *
**********************************************************************************/

// Actually set the login cookie...
function set_login_cookie($cookie_length, $id, $password = '')
{  
	global $smf_settings;
   
	// The cookie may already exist, and have been set with different options.
	$cookie_state = (empty($smf_settings['localCookies']) ? 0 : 1) | (empty($smf_settings['globalCookies']) ? 0 : 2);
	if (isset($_COOKIE[$smf_settings['cookiename']]) && preg_match('~^a:[34]:\{i:0;(i:\d{1,6}|s:[1-8]:"\d{1,8}");i:1;s:(0|40):"([a-fA-F0-9]{40})?";i:2;[id]:\d{1,14};(i:3;i:\d;)?\}$~', $_COOKIE[$smf_settings['cookiename']]) === 1)
	{
		$array = @unserialize($_COOKIE[$smf_settings['cookiename']]);

		// Out with the old, in with the new!
		if (isset($array[3]) && $array[3] != $cookie_state)
		{
			$cookie_url = smf_url_parts($smf_settings['forum_url'], $array[3] & 1 > 0, $array[3] & 2 > 0);
			setcookie($smf_settings['cookiename'], serialize(array(0, '', 0)), time() - 3600, $cookie_url[1], $cookie_url[0], 0);
		}
	}

	// Get the data and path to set it on.
	$data = serialize(empty($id) ? array(0, '', 0) : array($id, $password, time() + $cookie_length, $cookie_state));
	$cookie_url = smf_url_parts($smf_settings['forum_url'], !empty($smf_settings['localCookies']), !empty($smf_settings['globalCookies']));
    
	// Set the cookie, $_COOKIE, and session variable.
	setcookie($smf_settings['cookiename'], $data, time() + $cookie_length, $cookie_url[1], $cookie_url[0], 0);

	// If subdomain-independent cookies are on, unset the subdomain-dependent cookie too.
	if (empty($id) && !empty($smf_settings['globalCookies']))
		setcookie($smf_settings['cookiename'], $data, time() + $cookie_length, $cookie_url[1], '', 0);

	// Any alias URLs?  This is mainly for use with frames, etc.
	if (!empty($smf_settings['forum_alias_urls']))
	{
		$aliases = explode(',', $smf_settings['forum_alias_urls']);
        
		foreach ($aliases as $alias)
		{
			// Fake the $boardurl so we can set a different cookie.
			$alias = strtr(trim($alias), array('http://' => '', 'https://' => ''));
			$forum_url = 'http://' . $alias;

			$cookie_url = smf_url_parts($forum_url, !empty($smf_settings['localCookies']), !empty($smf_settings['globalCookies']));

			if ($cookie_url[0] == '')
				$cookie_url[0] = strtok($alias, '/');

			setcookie($smf_settings['cookiename'], $data, time() + $cookie_length, $cookie_url[1], $cookie_url[0], 0);
		}

	}
 
	$_COOKIE[$smf_settings['cookiename']] = $data;
	$_SESSION['login_' . $smf_settings['cookiename']] = $data;

 
   
}

// Get the domain and path for the cookie...
function smf_url_parts($forum_url, $local, $global)
{
	// Parse the URL with PHP to make life easier.
	$parsed_url = parse_url($forum_url);

	// Is local cookies off?
	if (empty($parsed_url['path']) || !$local)
		$parsed_url['path'] = '';

	// Globalize cookies across domains (filter out IP-addresses)?
	if ($global && preg_match('~^\d{1,3}(\.\d{1,3}){3}$~', $parsed_url['host']) == 0 && preg_match('~(?:[^\.]+\.)?([^\.]{2,}\..+)\z~i', $parsed_url['host'], $parts) == 1)
			$parsed_url['host'] = '.' . $parts[1];

	// We shouldn't use a host at all if both options are off.
	elseif (!$local && !$global)
		$parsed_url['host'] = '';

	// The host also shouldn't be set if there aren't any dots in it.
	elseif (!isset($parsed_url['host']) || strpos($parsed_url['host'], '.') === false)
		$parsed_url['host'] = '';

	return array($parsed_url['host'], $parsed_url['path'] . '/');
}

///////////////////////////////////////////////////////////////////////////////


// This function simply checks whether a password meets the current forum rules.
function smf_validate_password($password, $username, $restrict_in = array())
{
	global $smf_settings, $smf_func;

	// Perform basic requirements first.
	if (strlen($password) < (empty($smf_settings['password_strength']) ? 4 : 8))
		return 'short';

	// Is this enough?
	if (empty($smf_settings['password_strength']))
		return null;

	// Otherwise, perform the medium strength test - checking if password appears in the restricted string.
	if (preg_match('~\b' . preg_quote($password, '~') . '\b~', implode(' ', $restrict_in)) != 0)
		return 'restricted_words';
	elseif ($smf_func['strpos']($password, $username) !== false)
		return 'restricted_words';

	// !!! If pspell is available, use it on the word, and return restricted_words if it doesn't give "bad spelling"?

	// If just medium, we're done.
	if ($smf_settings['password_strength'] == 1)
		return null;

	// Otherwise, hard test next, check for numbers and letters, uppercase too.
	$good = preg_match('~(\D\d|\d\D)~', $password) != 0;
	$good &= $smf_func['strtolower']($password) != $password;

	return $good ? null : 'chars';
}

/**********************************************************************************
* Security.php                                                                    *
***********************************************************************************
* SMF: Simple Machines Forum                                                      *
* Open-Source Project Inspired by Zef Hemel (zef@zefhemel.com)                    *
* =============================================================================== *
* Software Version:           SMF 1.1.3                                             *
* Software by:                Simple Machines (http://www.simplemachines.org)     *
* Copyright 2006 by:          Simple Machines LLC (http://www.simplemachines.org) *
*           2001-2006 by:     Lewis Media (http://www.lewismedia.com)             *
* Support, News, Updates at:  http://www.simplemachines.org                       *
**********************************************************************************/

// Do banning related stuff.  (ie. disallow access....)
function smf_is_banned($forceCheck = false)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt, $smf_sourcedir;

  if (!$smf_connection)
	  return false;
  //$smf_settings['error_msg'] = "function smf_is_user() admin=".$smf_user_info['is_admin']."=";
	// You cannot be banned if you are an admin - doesn't help if you log out.
  $ID_MEMBER = $smf_user_info['ID_MEMBER'];
	if ($ID_MEMBER == 1 || $smf_user_info['is_admin'])
		return false;

	// Only check the ban every so often. (to reduce load.)
	if ($forceCheck || !isset($_SESSION['ban']) || empty($smf_settings['banLastUpdated']) || ($_SESSION['ban']['last_checked'] < $smf_settings['banLastUpdated']) || $_SESSION['ban']['ID_MEMBER'] != $ID_MEMBER || $_SESSION['ban']['ip'] != $smf_user_info['ip'] || $_SESSION['ban']['ip2'] != $smf_user_info['ip2'] || (isset($smf_user_info['email'], $_SESSION['ban']['email']) && $_SESSION['ban']['email'] != $smf_user_info['email']))
	{
		// Innocent until proven guilty.  (but we know you are! :P)
		$_SESSION['ban'] = array(
			'last_checked' => time(),
			'ID_MEMBER' => $ID_MEMBER,
			'ip' => $smf_user_info['ip'],
			'ip2' => $smf_user_info['ip2'],
			'email' => $smf_user_info['email'],
		);

		$ban_query = array();
		$flag_is_activated = false;

		// Check both IP addresses.
		foreach (array('ip', 'ip2') as $ip_number)
		{
			// Check if we have a valid IP address.
			if (preg_match('/^(\d{1,3})\.(\d{1,3})\.(\d{1,3})\.(\d{1,3})$/', $smf_user_info[$ip_number], $ip_parts) == 1)
			{
				$ban_query[] = "(($ip_parts[1] BETWEEN bi.ip_low1 AND bi.ip_high1)
							AND ($ip_parts[2] BETWEEN bi.ip_low2 AND bi.ip_high2)
							AND ($ip_parts[3] BETWEEN bi.ip_low3 AND bi.ip_high3)
							AND ($ip_parts[4] BETWEEN bi.ip_low4 AND bi.ip_high4))";
			}
			// We use '255.255.255.255' for 'unknown' since it's not valid anyway.
			elseif ($smf_user_info[$ip_number] == 'unknown')
				$ban_query[] = "(bi.ip_low1 = 255 AND bi.ip_high1 = 255
							AND bi.ip_low2 = 255 AND bi.ip_high2 = 255
							AND bi.ip_low3 = 255 AND bi.ip_high3 = 255
							AND bi.ip_low4 = 255 AND bi.ip_high4 = 255)";
		}

		// Is their email address banned?
		if (strlen($smf_user_info['email']) != 0)
			$ban_query[] = "('" . addslashes($smf_user_info['email']) . "' LIKE bi.email_address)";

		// How about this user?
		if (!$smf_user_info['is_guest'] && !empty($ID_MEMBER))
			$ban_query[] = "bi.id_member = $ID_MEMBER";

		// Check the ban, if there's information.
		if (!empty($ban_query))
		{
			$restrictions = array(
				'cannot_access',
				'cannot_login',
				'cannot_post',
				'cannot_register',
			);
			$request = smf_db_query("
				SELECT bi.id_ban, bi.email_address, bi.id_member, bg.cannot_access, bg.cannot_register,
					bg.cannot_post, bg.cannot_login, bg.reason
				FROM ({$smf_db_prefix}ban_groups AS bg, {$smf_db_prefix}ban_items AS bi)
				WHERE bg.id_ban_group = bi.id_ban_group
					AND (bg.expire_time IS NULL OR bg.expire_time > " . time() . ")
					AND (" . implode(' OR ', $ban_query) . ')', __FILE__, __LINE__);
			// Store every type of ban that applies to you in your session.
			while ($row = mysql_fetch_assoc($request))
			{
				foreach ($restrictions as $restriction)
					if (!empty($row[$restriction]))
					{
						$_SESSION['ban'][$restriction]['reason'] = $row['reason'];
						$_SESSION['ban'][$restriction]['ids'][] = $row['ID_BAN'];

						if (!$smf_user_info['is_guest'] && $restriction == 'cannot_access' && ($row['ID_MEMBER'] == $ID_MEMBER || $row['email_address'] == $smf_user_info['email']))
							$flag_is_activated = true;
					}
			}
			mysql_free_result($request);
		}
	}

	// Hey, I know you! You're ehm...
	if (!isset($_SESSION['ban']['cannot_access']) && !empty($_COOKIE[$smf_settings['cookiename'] . '_']))
	{
		$bans = explode(',', $_COOKIE[$smf_settings['cookiename'] . '_']);
		foreach ($bans as $key => $value)
			$bans[$key] = (int) $value;
		$request = smf_db_query("
			SELECT bi.id_ban, bg.reason
			FROM ({$smf_db_prefix}ban_items AS bi, {$smf_db_prefix}ban_groups AS bg)
			WHERE bg.id_ban_group = bi.id_ban_group
				AND (bg.expire_time IS NULL OR bg.expire_time > " . time() . ")
				AND bg.cannot_access = 1
				AND bi.id_ban IN (" . implode(', ', $bans) . ")
			LIMIT " . count($bans), __FILE__, __LINE__);
		while ($row = mysql_fetch_assoc($request))
		{
			$_SESSION['ban']['cannot_access']['ids'][] = $row['ID_BAN'];
			$_SESSION['ban']['cannot_access']['reason'] = $row['reason'];
		}
		mysql_free_result($request);

		// My mistake. Next time better.
		if (!isset($_SESSION['ban']['cannot_access']))
		{
			//require_once($smf_sourcedir . '/Subs-Auth.php');
			$cookie_url = smf_url_parts($smf_settings['forum_url'], !empty($smf_settings['localCookies']), !empty($smf_settings['globalCookies']));
			setcookie($smf_settings['cookiename'] . '_', '', time() - 3600, $cookie_url[1], $cookie_url[0], 0);
		}
	}
  
  return false;
}

function smf_is_valid_email($email) {
  if (empty($email) || trim($email) == '' || strlen($email) > 128)
    return false;
  if (preg_match('~^[0-9A-Za-z=_+\-/][0-9A-Za-z=_\'+\-/\.]*@[\w\-]+(\.[\w\-]+)*(\.[\w]{2,6})$~', $email) === 0) {
    //$smf_settings['error_msg'] = "bad email";
    return false;
  }
  return true;  
}

// Checks if a given email address might be banned.
function smf_is_banned_email($email, $restriction, $error)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;

  if (!$smf_connection)
	  return false;

	// Can't ban an empty email
	if (empty($email) || trim($email) == '')
		return false;

	// Let's start with the bans based on your IP/hostname/memberID...
	$ban_ids = isset($_SESSION['ban'][$restriction]) ? $_SESSION['ban'][$restriction]['ids'] : array();
	$ban_reason = isset($_SESSION['ban'][$restriction]) ? $_SESSION['ban'][$restriction]['reason'] : '';

	// ...and add to that the email address you're trying to register.
	$request = smf_db_query("
		SELECT bi.id_ban, bg.$restriction, bg.cannot_access, bg.reason
		FROM ({$smf_db_prefix}ban_items AS bi, {$smf_db_prefix}ban_groups AS bg)
		WHERE bg.id_ban_group = bi.id_ban_group
			AND '$email' LIKE bi.email_address
			AND (bg.$restriction = 1 OR bg.cannot_access = 1)", __FILE__, __LINE__);
	while ($row = mysql_fetch_assoc($request))
	{
		if (!empty($row['cannot_access']))
		{
			$_SESSION['ban']['cannot_access']['ids'][] = $row['ID_BAN'];
			$_SESSION['ban']['cannot_access']['reason'] = $row['reason'];
		}
		if (!empty($row[$restriction]))
		{
			$ban_ids[] = $row['ID_BAN'];
			$ban_reason = $row['reason'];
		}
	}
	mysql_free_result($request);

	// You're in biiig trouble.  Banned for the rest of this session!
	if (isset($_SESSION['ban']['cannot_access']))
	{
		//log_ban($_SESSION['ban']['cannot_access']['ids']);
		$_SESSION['ban']['last_checked'] = time();

		//fatal_error(sprintf($smf_txt[430], $smf_txt[28]) . $_SESSION['ban']['cannot_access']['reason'], false);
		$smf_settings['error_msg'] = sprintf($smf_txt[430], $smf_txt[28]) . $_SESSION['ban']['cannot_access']['reason'];
	}

	if (!empty($ban_ids))
	{
		// Log this ban for future reference.
		//log_ban($ban_ids, $email);
		//fatal_error($error . $ban_reason, false);
		$smf_settings['error_msg'] = $ban_reason;
		return true;
	}

  return false;
}

//function isAllowedTo($permission, $boards = null)
function smf_is_allowed_to($permission, $boards = null)
{
	global $smf_user_info, $smf_txt;

	static $heavy_permissions = array(
		'admin_forum',
		'manage_attachments',
		'manage_smileys',
		'manage_boards',
		'edit_news',
		'moderate_forum',
		'manage_bans',
		'manage_membergroups',
		'manage_permissions',
	);

	// Make it an array, even if a string was passed.
	$permission = is_array($permission) ? $permission : array($permission);

	// Check the permission and return an error...
	if (!smf_allowed_to($permission, $boards))
	{
		// Pick the last array entry as the permission shown as the error.
		$error_permission = array_shift($permission);

    return false;
	}

  return true;
}

// Check the user's permissions.
// SMF, may I?
//function allowedTo($permission, $boards = null)
function smf_allowed_to($permission, $boards = null)
{

	global $smf_settings, $smf_user_info, $smf_connection, $smf_db_prefix;

  if (!$smf_connection)
	  return false;

	// You're always allowed to do nothing. (unless you're a working man, MR. LAZY :P!)
	if (empty($permission))
		return true;

	// You're never allowed to do something if your data hasn't been loaded yet!
  if (empty($smf_user_info['ID_MEMBER']))
    return false;

  $ID_MEMBER = $smf_user_info['ID_MEMBER'];

	// Administrators are supermen :P.
	if ($smf_user_info['is_admin'])
		return true;

	// Are we checking the _current_ board, or some other boards?
	if ($boards === null)
	{
		// Check if they can do it.
		if (!is_array($permission) && in_array($permission, $smf_user_info['permissions']))
			return true;
		// Search for any of a list of permissions.
		elseif (is_array($permission) && count(array_intersect($permission, $smf_user_info['permissions'])) != 0)
			return true;
		// You aren't allowed, by default.
		else
			return false;
	}
	elseif (!is_array($boards))
		$boards = array($boards);

	// Determine which permission mode is still acceptable.
	if (empty($smf_settings['permission_enable_by_board']) && !in_array('moderate_board', $smf_user_info['permissions']))
	{
		// Make an array of the permission.
		$temp = is_array($permission) ? $permission : array($permission);

		if (in_array('post_reply_own', $temp) || in_array('post_reply_any', $temp))
			$max_allowable_mode = 3;
		elseif (in_array('post_new', $temp))
			$max_allowable_mode = 2;
		elseif (in_array('poll_post', $temp))
			$max_allowable_mode = 0;
	}

	$request = smf_db_query("
		SELECT MIN(bp.add_deny) AS addDeny
		FROM ({$smf_db_prefix}boards AS b, {$smf_db_prefix}board_permissions AS bp)
			LEFT JOIN {$smf_db_prefix}moderators AS mods ON (mods.id_board = b.id_board AND mods.id_member = $ID_MEMBER)
		WHERE b.id_board IN (" . implode(', ', $boards) . ")" . (isset($max_allowable_mode) ? "
			AND b.permission_mode <= $max_allowable_mode" : '') . "
			AND bp.id_board = " . (empty($smf_settings['permission_enable_by_board']) ? '0' : 'IF(b.permission_mode = 1, b.id_board, 0)') . "
			AND bp.id_group IN (" . implode(', ', $smf_user_info['groups']) . ", 3)
			AND bp.permission " . (is_array($permission) ? "IN ('" . implode("', '", $permission) . "')" : " = '$permission'") . "
			AND (mods.id_member IS NOT NULL OR bp.id_group != 3)
		GROUP BY b.id_board", __FILE__, __LINE__);

	// Make sure they can do it on all of the boards.
	if (mysql_num_rows($request) != count($boards))
		return false;

	$result = true;
	while ($row = mysql_fetch_assoc($request))
		$result &= !empty($row['addDeny']);
	mysql_free_result($request);

	// If the query returned 1, they can do it... otherwise, they can't.
	return $result;
}




/**********************************************************************************
* Subs-members.php                                                                *
***********************************************************************************
* SMF: Simple Machines Forum                                                      *
* Open-Source Project Inspired by Zef Hemel (zef@zefhemel.com)                    *
* =============================================================================== *
* Software Version:           SMF 1.1                                             *
* Software by:                Simple Machines (http://www.simplemachines.org)     *
* Copyright 2006 by:          Simple Machines LLC (http://www.simplemachines.org) *
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

// This function allows the admin to register a new member by hand.
function smf_register($username, $password, $email, $extra_fields = array(), $theme_vars = array())
{
  
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;
  
  if (!$smf_connection)
	  return false;
  // $password = $_REQUEST['pass']['pass1'];
	$regOptions = array(
		'interface' => 'admin',
		'username' => $username,
		'email' => $email,
		'password' => $password,
		'password_check' => $password,
		'check_reserved_name' => true,
		'check_password_strength' => false,
		'check_email_ban' => false,
		'send_welcome_email' => isset($smf_user_info['emailPassword']),
		'require' => isset($smf_user_info['emailActivate']) ? 'activation' : 'nothing',
		'memberGroup' => empty($smf_user_info['group']) ? 0 : (int) $smf_user_info['group'],
		'hideEmail' => true,
		'theme_vars' => $theme_vars,
	);
   
  $regOptions = $extra_fields + $regOptions;

	$scripturl = $smf_settings['forum_url'];
  
	$memberID = smf_register_member($regOptions);
  
	if (!empty($memberID))
	{
		$smf_settings['new_member'] = array(
			'id' => $memberID,
			'name' => $smf_user_info['username'],
			'href' => $scripturl . '?action=profile;u=' . $memberID,
			'link' => '<a href="' . $scripturl . '?action=profile;u=' . $memberID . '">' . $smf_user_info['username'] . '</a>',
		);
		//$smf_settings['registration_done'] = sprintf($smf_txt['admin_register_done'], $smf_settings['new_member']['link']);
	}

  $smf_user_info['id'] = $memberID;

	return !empty($memberID);
}

// Update some basic statistics...
function smf_update_stats($type, $parameter1 = null, $parameter2 = null)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt, $smf_sourcedir;

  if (!$smf_connection)
	  return false;


  switch ($type)
  {
  case 'member':
    $changes = array(
      'memberlist_updated' => time(),
    );

    // Are we using registration approval?
    if (!empty($smf_settings['registration_method']) && $smf_settings['registration_method'] == 2)
    {
      // Update the latest activated member (highest ID_MEMBER) and count.
      $result = smf_db_query("
        SELECT COUNT(*), MAX(id_member)
        FROM {$smf_db_prefix}members
        WHERE is_activated = 1", __FILE__, __LINE__);
      list ($changes['totalMembers'], $changes['latestMember']) = mysql_fetch_row($result);
      mysql_free_result($result);

      // Get the latest activated member's display name.
      $result = smf_db_query("
        SELECT real_name
        FROM {$smf_db_prefix}members
        WHERE id_member = " . (int) $changes['latestMember'] . "
        LIMIT 1", __FILE__, __LINE__);
			list ($changes['latestRealName']) = mysql_fetch_row($result);
			mysql_free_result($result);

			// Update the amount of members awaiting approval - ignoring COPPA accounts, as you can't approve them until you get permission.
			$result = smf_db_query("
				SELECT COUNT(*)
				FROM {$smf_db_prefix}members
				WHERE is_activated IN (3, 4)", __FILE__, __LINE__);
			list ($changes['unapprovedMembers']) = mysql_fetch_row($result);
			mysql_free_result($result);
           
		}
		// If $parameter1 is a number, it's the new ID_MEMBER and #2 is the real name for a new registration.
	elseif ($parameter1 !== null && $parameter1 !== false)
		{
			$changes['latestMember'] = $parameter1;
			$changes['latestRealName'] = $parameter2;

			smf_update_settings(array('totalMembers' => true), true);

		}
		// If $parameter1 is false, and approval is off, we need change nothing.
		elseif ($parameter1 !== false)
		{
			// Update the latest member (highest ID_MEMBER) and count.
			$result = smf_db_query("
				SELECT COUNT(*), MAX(id_member)
				FROM {$smf_db_prefix}members", __FILE__, __LINE__);
			list ($changes['totalMembers'], $changes['latestMember']) = mysql_fetch_row($result);
			mysql_free_result($result);

			// Get the latest member's display name.
			$result = smf_db_query("
				SELECT real_name
				FROM {$smf_db_prefix}members
				WHERE id_member = " . (int) $changes['latestMember'] . "
				LIMIT 1", __FILE__, __LINE__);
			list ($changes['latestRealName']) = mysql_fetch_row($result);
			mysql_free_result($result);

		}

		smf_update_settings($changes);
		break;
	}
}

// Assumes the data has been slashed.
// updateMemberData
function smf_update_member_data($members, $data)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;
  
  if (!$smf_connection)
	  return false;


	if (is_array($members))
		$condition = 'id_member IN (' . implode(', ', $members) . ')
		LIMIT ' . count($members);
	elseif ($members === null)
		$condition = '1';
	else
		$condition = 'id_member = ' . $members . '
		LIMIT 1';

  // Only a few member variables are allowed for integration.
  $integration_vars = array(
    'memberName',
    'realName',
    'emailAddress',
    'passwd',
    //'passwordSalt',
    'gender',
    'birthdate',
    'personalText',
    'usertitle',
    'ICQ',
    'AIM',
    'YIM',
    'MSN',
    'signature',
    'websiteTitle',
    'websiteUrl',
    'location',
    'hideEmail',
    'timeFormat',
    'timeOffset',
    'avatar',
    'lngfile',
  );
  $vars_to_integrate = array_intersect($integration_vars, array_keys($data));

	foreach ($data as $var => $val)
	{
		if ($val === '+')
			$data[$var] = $var . ' + 1';
		elseif ($val === '-')
			$data[$var] = $var . ' - 1';
	}

	// Ensure posts, instantMessages, and unreadMessages never go below 0.
	if (isset($data['posts']))
		$data['posts'] = 'IF(' . $data['posts'] . ' < 0, 0, ' . $data['posts'] . ')';
	if (isset($data['instantMessages']))
		$data['instantMessages'] = 'IF(' . $data['instantMessages'] . ' < 0, 0, ' . $data['instantMessages'] . ')';
	if (isset($data['unreadMessages']))
		$data['unreadMessages'] = 'IF(' . $data['unreadMessages'] . ' < 0, 0, ' . $data['unreadMessages'] . ')';

	$setString = '';
	foreach ($data as $var => $val)
	{
		$setString .= "
			$var = $val,";
	}

	smf_db_query("
		UPDATE {$smf_db_prefix}members
		SET" . substr($setString, 0, -1) . '
		WHERE ' . $condition, __FILE__, __LINE__);

	return true;
}

function smf_is_email_in_use($email, $username)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt;

  if (!$smf_connection)
	  return true;

	if (empty($email) || empty($username))
		return true;
    
  $smf_settings['error_msg'] = '';

	// Check if the email address is in use.
	$request = smf_db_query("
		SELECT id_member
		FROM {$smf_db_prefix}members
		WHERE email_address = '$email'
			OR email_address = '$username'
		LIMIT 1", __FILE__, __LINE__);

	if (mysql_num_rows($request) != 0)
	{
		$smf_settings['error_msg'] = 'email in use';
		mysql_free_result($request);
		return true;
	}
	mysql_free_result($request);
  
  return false;
}

function smf_register_member(&$regOptions)
{
   
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt, $smf_func;

  $smf_settings['error_msg'] = '';

  if (!$smf_connection)
	  return false;

	if (empty($regOptions['username']))
		return false;


	$scripturl = $smf_settings['forum_url'];

  $validation_code = '';

	// Check if the email address is in use.
	$request = smf_db_query("
		SELECT id_member
		FROM {$smf_db_prefix}members
		WHERE email_address = '$regOptions[email]'
			OR email_address = '$regOptions[username]'
		LIMIT 1", __FILE__, __LINE__);
	// !!! Separate the sprintf?
  
	if (mysql_num_rows($request) != 0)
	{
		$strerr = 'email in use';//sprintf($smf_txt[730], htmlspecialchars($regOptions['email']);
		$smf_settings['error_msg'] = $strerr;
		mysql_free_result($request);
		return false;
	}
	mysql_free_result($request);

  if (!isset($regOptions['realName']))
    $regOptions['realName'] = $regOptions['username'];
    
	// Some of these might be overwritten. (the lower ones that are in the arrays below.)
	$regOptions['register_vars'] = array(
		'member_name' => "'$regOptions[username]'",
		'email_address' => "'$regOptions[email]'",
    'hide_email' => "'$regOptions[hideEmail]'",
		'passwd' => '\'' . sha1(strtolower($regOptions['username']) . $regOptions['password']) . '\'',
		'password_salt' => '\'' . substr(md5(rand()), 0, 4) . '\'',
		'posts' => 0,
		'date_registered' => time(),
		'member_ip' => "'$smf_user_info[ip]'",
		'member_ip2' => "'$_SERVER[BAN_CHECK_IP]'",
		'validation_code' => "'$validation_code'",
		'real_name' => "'$regOptions[realName]'",
		'personal_text' => '\'' . addslashes($smf_settings['default_personalText']) . '\'',
		'pm_email_notify' => 1,
		'id_theme' => 0,
		'id_post_group' => 4,
		'lngfile' => "''",
		'buddy_list' => "''",
		'pm_ignore_list' => "''",
		'message_labels' => "''",
		//'personalText' => "''",     // Grudge, this is a bug in 1.1.1!?
		'website_title' => "''",
		'website_url' => "''",
		'location' => "''",
		'icq' => "''",
		'aim' => "''",
		'yim' => "''",
		'msn' => "''",
		'time_format' => "''",
		'signature' => "''",
		'avatar' => "''",
		'usertitle' => "''",
		'secret_question' => "''",
		'secret_answer' => "''",
		'additional_groups' => "''",
		'smiley_set' => "''",
	);
    //changed the array keys to reflect fields from database WA
	// Setup the activation status on this new account so it is correct - firstly is it an under age account?

  $regOptions['register_vars']['is_activated'] = 1;
  
	if (isset($regOptions['member_group']))
        {
		// Make sure the ID_GROUP will be valid, if this is an administator.
		$regOptions['register_vars']['ID_GROUP'] = $regOptions['member_group'] == 1 && !smf_allowed_to('admin_forum') ? 0 : $regOptions['member_group'];
       
		// Check if this group is assignable.
		$unassignableGroups = array(-1, 3);
		$request = smf_db_query("
			SELECT id_group
			FROM {$smf_db_prefix}membergroups
			WHERE min_posts != -1", __FILE__, __LINE__);
		while ($row = mysql_fetch_assoc($request))
			$unassignableGroups[] = $row['id_group'];

		mysql_free_result($request);

		if (in_array($regOptions['register_vars']['ID_GROUP'], $unassignableGroups))
			$regOptions['register_vars']['ID_GROUP'] = 0;

	}

	// Integrate optional member settings to be set.
	if (!empty($regOptions['extra_register_vars']))
		foreach ($regOptions['extra_register_vars'] as $var => $value)
			$regOptions['register_vars'][$var] = $value;

	// Integrate optional user theme options to be set.
	$theme_vars = array();
	if (!empty($regOptions['theme_vars']))
		foreach ($regOptions['theme_vars'] as $var => $value)
			$theme_vars[$var] = $value;
   
	// Call an optional function to validate the users' input.
	if (isset($smf_settings['integrate_register']) && function_exists($smf_settings['integrate_register']))
		$smf_settings['integrate_register']($regOptions, $theme_vars);
  
	// Register them into the database.
	smf_db_query("
		INSERT INTO {$smf_db_prefix}members
			(" . implode(', ', array_keys($regOptions['register_vars'])) . ")
		VALUES (" . implode(', ', $regOptions['register_vars']) . ')', __FILE__, __LINE__);

	$memberID = smf_db_insert_id();

   
	// Grab their real name and send emails using it.
	$realName = substr($regOptions['register_vars']['real_name'], 1, -1);
   
	// Update the number of members and latest member's info - and pass the name, but remove the 's.
	smf_update_stats('member', $memberID, $realName);

	// Theme variables too?
	if (!empty($theme_vars))
	{
		$setString = '';
		foreach ($theme_vars as $var => $val)
			$setString .= "
				($memberID, SUBSTRING('$var', 1, 255), SUBSTRING('$val', 1, 65534)),";
		smf_db_query("
			INSERT INTO {$smf_db_prefix}themes
				(id_member, variable, value)
			VALUES " . substr($setString, 0, -1), __FILE__, __LINE__);
	}

  $smf_settings['error_msg'] = 'ok';

	// Okay, they're for sure registered... make sure the session is aware of this for security. (Just married :P!)
	$_SESSION['just_registered'] = 1;

	return $memberID;
}

// Check if a name is in the reserved words list. (name, current member id, name/username?.)
function smf_is_reserved_name($name, $current_ID_MEMBER = 0, $is_name = true, $fatal = false)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt, $smf_func;

  if (!$smf_connection)
	  return true;

	$scripturl = $smf_settings['forum_url'];

	$checkName = $smf_func['strtolower']($name);

	// Get rid of any SQL parts of the reserved name...
	$checkName = strtr($name, array('_' => '\\_', '%' => '\\%'));

	// Make sure they don't want someone else's name.
	$request = smf_db_query("
		SELECT id_member
		FROM {$smf_db_prefix}members
		WHERE " . (empty($current_ID_MEMBER) ? '' : "id_member != $current_ID_MEMBER
			AND ") . "(real_name LIKE '$checkName' OR member_name LIKE '$checkName')
		LIMIT 1", __FILE__, __LINE__);
	if (mysql_num_rows($request) > 0)
	{
		mysql_free_result($request);
		$smf_settings['error_msg'] = 'reserved name';
    
		return true;
	}

	// Does name case insensitive match a member group name?
	$request = smf_db_query("
		SELECT id_group
		FROM {$smf_db_prefix}membergroups
		WHERE group_name LIKE '$checkName'
		LIMIT 1", __FILE__, __LINE__);
	if (mysql_num_rows($request) > 0)
	{
		mysql_free_result($request);
		$smf_settings['error_msg'] = 'reserved group name';
		return true;
	}

	// Okay, they passed.
	return false;
}

// Find members by email address, username, or real name.
//function findMembers($names, $use_wildcards = false, $buddies_only = false, $max = null)
function smf_find_members($names, $use_wildcards = false, $buddies_only = false, $max = null)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $smf_txt, $smf_func;

  if (!$smf_connection)
	  return false;

	$scripturl = $smf_settings['forum_url'];

	// If it's not already an array, make it one.
	if (!is_array($names)) {
		//$names = smf_api_charset($names);
		$names = explode(',', $names);
	}

	$maybe_email = false;
	foreach ($names as $i => $name)
	{
		$name = smf_api_charset($name);
		// Add slashes, trim, and fix wildcards for each name.
		$names[$i] = addslashes(trim($smf_func['strtolower']($name)));

		$maybe_email |= strpos($name, '@') !== false;

		// Make it so standard wildcards will work. (* and ?)
		if ($use_wildcards)
			$names[$i] = strtr($names[$i], array('%' => '\%', '_' => '\_', '*' => '%', '?' => '_', '\\\'' => '&#039;'));
		else
			$names[$i] = strtr($names[$i], array('\\\'' => '&#039;'));
	}

	// What are we using to compare?
	$comparison = $use_wildcards ? 'LIKE' : '=';

	// Nothing found yet.
	$results = array();

	// This ensures you can't search someones email address if you can't see it.
	$email_condition = $smf_user_info['is_admin'] || empty($smf_settings['allow_hideEmail']) ? '' : 'hide_email = 0 AND ';

	if ($use_wildcards || $maybe_email)
		$email_condition = "
			OR (" . $email_condition . "email_address $comparison '" . implode("') OR ($email_condition email_address $comparison '", $names) . "')";
	else
		$email_condition = '';

	// Search by username, display name, and email address.
	$request = smf_db_query("
		SELECT id_member, member_name, real_name, email_address, hide_email
		FROM {$smf_db_prefix}members
		WHERE (member_name $comparison '" . implode("' OR member_name $comparison '", $names) . "'
			OR real_name $comparison '" . implode("' OR real_name $comparison '", $names) . "'$email_condition)
			" . ($buddies_only ? 'AND id_member IN (' . implode(', ', $smf_user_info['buddies']) . ')' : '') . "
			AND is_activated IN (1, 11)" . ($max == null ? '' : "
		LIMIT " . (int) $max), __FILE__, __LINE__);
	while ($row = mysql_fetch_assoc($request))
	{
		$results[$row['ID_MEMBER']] = array(
			'id' => $row['ID_MEMBER'],
			'name' => $row['realName'],
			'username' => $row['memberName'],
			'email' => empty($row['hideEmail']) || empty($smf_settings['allow_hideEmail']) || $smf_user_info['is_admin'] ? $row['emailAddress'] : '',
			'href' => $scripturl . '?action=profile;u=' . $row['ID_MEMBER'],
			'link' => '<a href="' . $scripturl . '?action=profile;u=' . $row['ID_MEMBER'] . '">' . $row['realName'] . '</a>'
		);
	}
	mysql_free_result($request);

	// Return all the results.
	return $results;
}

// Delete a group of/single member.
//function deleteMembers($users)
function smf_api_delete_members($users)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info, $user;
    
  if (!$smf_connection)
	  return false;

  if (empty($smf_user_info['id_member']) || (!is_array($users) && $users == 1 ))
    return false;

  if (!$smf_user_info['is_guest'] || !empty($smf_user_info['passwd']))
    return false;

  $ID_MEMBER = $smf_user_info['id_member'];

  // Only one user is deleted in Drupal at the moment.
	// If it's not an array, make it so!
	if (!is_array($users))
		$users = array($users);
	else
		$users = array_unique($users);

	// Make sure there's no void user in here.
	$users = array_diff($users, array(0));

  $allowed_to = false;
	// How many are they deleting?
	if (empty($users))
		return false;
	elseif (count($users) == 1)
	{
		list ($user) = $users;
		$condition = '= ' . $user;

		//if ($user == $ID_MEMBER)
		//	$allowed_to = smf_is_allowed_to('profile_remove_own');
		//else
		//	$allowed_to = smf_is_allowed_to('profile_remove_any');
	}
	else
	{
		foreach ($users as $k => $v)
			$users[$k] = (int) $v;
		$condition = 'IN (' . implode(', ', $users) . ')';

		// Deleting more than one?  You can't have more than one account...
		//$allowed_to = smf_is_allowed_to('profile_remove_any');
	}

	// Make these peoples' posts guest posts.
	smf_db_query("
		UPDATE {$smf_db_prefix}messages
		SET id_member = 0" . (!empty($smf_settings['allow_hideEmail']) ? ", poster_email = ''" : '') . "
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		UPDATE {$smf_db_prefix}polls
		SET id_member = 0
		WHERE id_member $condition", __FILE__, __LINE__);

	// Make these peoples' posts guest first posts and last posts.
	smf_db_query("
		UPDATE {$smf_db_prefix}topics
		SET id_member_started = 0
		WHERE id_member_started $condition", __FILE__, __LINE__);
	smf_db_query("
		UPDATE {$smf_db_prefix}topics
		SET id_member_updated = 0
		WHERE id_member_updated $condition", __FILE__, __LINE__);

	smf_db_query("
		UPDATE {$smf_db_prefix}log_actions
		SET id_member = 0
		WHERE id_member $condition", __FILE__, __LINE__);

	smf_db_query("
		UPDATE {$smf_db_prefix}log_banned
		SET id_member = 0
		WHERE id_member $condition", __FILE__, __LINE__);

	smf_db_query("
		UPDATE {$smf_db_prefix}log_errors
		SET id_member = 0
		WHERE id_member $condition", __FILE__, __LINE__);

	// Delete the member.
	smf_db_query("
		DELETE FROM {$smf_db_prefix}members
		WHERE id_member $condition
		LIMIT " . count($users), __FILE__, __LINE__);

	// Delete the logs...
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_boards
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_karma
		WHERE id_target $condition
			OR id_executor $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_mark_read
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_notify
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_online
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_polls
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}log_topics
		WHERE id_member $condition", __FILE__, __LINE__);
	smf_db_query("
		DELETE FROM {$smf_db_prefix}collapsed_categories
		WHERE id_member $condition", __FILE__, __LINE__);

	// Delete personal messages.
	//require_once($smf_sourcedir . '/PersonalMessage.php');
	smf_delete_messages(null, null, $users);

	smf_db_query("
		UPDATE {$smf_db_prefix}personal_messages
		SET id_member_from = 0
		WHERE id_member_from $condition", __FILE__, __LINE__);

	// Delete avatar.
	//require_once($smf_sourcedir . '/ManageAttachments.php');
	smf_remove_attachments('a.id_member ' . $condition);

	// It's over, no more moderation for you.
	smf_db_query("
		DELETE FROM {$smf_db_prefix}moderators
		WHERE id_member $condition", __FILE__, __LINE__);

	// If you don't exist we can't ban you.
	smf_db_query("
		DELETE FROM {$smf_db_prefix}ban_items
		WHERE id_member $condition", __FILE__, __LINE__);

	// Remove individual theme settings.
	smf_db_query("
		DELETE FROM {$smf_db_prefix}themes
		WHERE id_member $condition", __FILE__, __LINE__);

	// These users are nobody's buddy nomore.
	$request = smf_db_query("
		SELECT id_member, pm_ignore_list, buddy_list
		FROM {$smf_db_prefix}members
		WHERE FIND_IN_SET(" . implode(', pm_ignore_list) OR FIND_IN_SET(', $users) . ', pm_ignore_list) OR FIND_IN_SET(' . implode(', buddy_list) OR FIND_IN_SET(', $users) . ', buddy_list)', __FILE__, __LINE__);
	while ($row = mysql_fetch_assoc($request))
		smf_db_query("
			UPDATE {$smf_db_prefix}members
			SET
				pm_ignore_list = '" . implode(',', array_diff(explode(',', $row['pm_ignore_list']), $users)) . "',
				buddy_list = '" . implode(',', array_diff(explode(',', $row['buddy_list']), $users)) . "'
			WHERE id_member = $row[ID_MEMBER]
			LIMIT 1", __FILE__, __LINE__);
	mysql_free_result($request);

	// Make sure no member's birthday is still sticking in the calendar...
	smf_update_stats('calendar'); // Left member's birthday in calendar till next update... In Memories of...
	smf_update_stats('member');

	return true;
}

// Delete the specified personal messages.
//function deleteMessages($personal_messages, $folder = null, $owner = null)
function smf_delete_messages($personal_messages, $folder = null, $owner = null)
{
	global $smf_db_prefix, $smf_user_info;

  $ID_MEMBER = $smf_user_info['ID_MEMBER'];

	if ($owner === null)
		$owner = array($ID_MEMBER);
	elseif (empty($owner))
		return;
	elseif (!is_array($owner))
		$owner = array($owner);

	if ($personal_messages !== null)
	{
		if (empty($personal_messages) || !is_array($personal_messages))
			return;

		foreach ($personal_messages as $index => $delete_id)
			$personal_messages[$index] = (int) $delete_id;

		$where =  '
				AND id_pm IN (' . implode(', ', array_unique($personal_messages)) . ')';
	}
	else
		$where = '';

	if ($folder == 'outbox' || $folder === null)
	{
		smf_db_query("
			UPDATE {$smf_db_prefix}personal_messages
			SET deleted_by_sender = 1
			WHERE id_member_from IN (" . implode(', ', $owner) . ")
				AND deleted_by_sender = 0$where", __FILE__, __LINE__);
	}
	if ($folder != 'outbox' || $folder === null)
	{
		// Calculate the number of messages each member's gonna lose...
		$request = smf_db_query("
			SELECT id_member, COUNT(*) AS num_deleted_messages, IF(is_read & 1, 1, 0) AS is_read
			FROM {$smf_db_prefix}pm_recipients
			WHERE id_member IN (" . implode(', ', $owner) . ")
				AND deleted = 0$where
			GROUP BY id_member, is_read", __FILE__, __LINE__);
		// ...And update the statistics accordingly - now including unread messages!.
		while ($row = mysql_fetch_assoc($request))
		{
			if ($row['is_read'])
				smf_update_member_data($row['ID_MEMBER'], array('instantMessages' => $where == '' ? 0 : "instantMessages - $row[numDeletedMessages]"));
			else
				smf_update_member_data($row['ID_MEMBER'], array('instantMessages' => $where == '' ? 0 : "instantMessages - $row[numDeletedMessages]", 'unreadMessages' => $where == '' ? 0 : "unreadMessages - $row[numDeletedMessages]"));

			// If this is the current member we need to make their message count correct.
			if ($ID_MEMBER == $row['ID_MEMBER'])
			{
				$smf_user_info['messages'] -= $row['numDeletedMessages'];
				if (!($row['is_read']))
					$smf_user_info['unread_messages'] -= $row['numDeletedMessages'];
			}
		}
		mysql_free_result($request);

		// Do the actual deletion.
		smf_db_query("
			UPDATE {$smf_db_prefix}pm_recipients
			SET deleted = 1
			WHERE id_member IN (" . implode(', ', $owner) . ")
				AND deleted = 0$where", __FILE__, __LINE__);
	}

	// If sender and recipients all have deleted their message, it can be removed.
	$request = smf_db_query("
		SELECT pm.id_pm, pmr.id_pm AS recipient
		FROM {$smf_db_prefix}personal_messages AS pm
			LEFT JOIN {$smf_db_prefix}pm_recipients AS pmr ON (pmr.id_pm = pm.id_pm AND deleted = 0)
		WHERE pm.deleted_by_sender = 1
			" . str_replace('id_pm', 'pm.id_pm', $where) . "
		HAVING recipient IS null", __FILE__, __LINE__);
	$remove_pms = array();
	while ($row = mysql_fetch_assoc($request))
		$remove_pms[] = $row['ID_PM'];
	mysql_free_result($request);

	if (!empty($remove_pms))
	{
		smf_db_query("
			DELETE FROM {$smf_db_prefix}personal_messages
			WHERE id_pm IN (" . implode(', ', $remove_pms) . ")
			LIMIT " . count($remove_pms), __FILE__, __LINE__);

		smf_db_query("
			DELETE FROM {$smf_db_prefix}pm_recipients
			WHERE id_pm IN (" . implode(', ', $remove_pms) . ')', __FILE__, __LINE__);
	}
}

// Get an attachment's encrypted filename.  If $new is true, won't check for file existence.
function smf_get_attachment_filename($filename, $attachment_id, $new = false)
{
	global $smf_settings;

	// Remove special accented characters - ie. sí.
	$clean_name = strtr($filename, 'ŠŽšžŸÀÁÂÃÄÅÇÈÉÊËÌÍÎÏÑÒÓÔÕÖØÙÚÛÜÝàáâãäåçèéêëìíîïñòóôõöøùúûüýÿ', 'SZszYAAAAAACEEEEIIIINOOOOOOUUUUYaaaaaaceeeeiiiinoooooouuuuyy');
	$clean_name = strtr($clean_name, array('Þ' => 'TH', 'þ' => 'th', 'Ð' => 'DH', 'ð' => 'dh', 'ß' => 'ss', 'Œ' => 'OE', 'œ' => 'oe', 'Æ' => 'AE', 'æ' => 'ae', 'µ' => 'u'));

	// Sorry, no spaces, dots, or anything else but letters allowed.
	$clean_name = preg_replace(array('/\s/', '/[^\w_\.\-]/'), array('_', ''), $clean_name);

	$enc_name = $attachment_id . '_' . strtr($clean_name, '.', '_') . md5($clean_name);
	$clean_name = preg_replace('~\.[\.]+~', '.', $clean_name);

	if ($attachment_id == false || ($new && empty($smf_settings['attachmentEncryptFilenames'])))
		return $clean_name;
	elseif ($new)
		return $enc_name;

	if (file_exists($smf_settings['attachmentUploadDir'] . '/' . $enc_name))
		$filename = $smf_settings['attachmentUploadDir'] . '/' . $enc_name;
	else
		$filename = $smf_settings['attachmentUploadDir'] . '/' . $clean_name;

	return $filename;
}

// Removes attachments - allowed query_types: '', 'messages', 'members'
function smf_remove_attachments($condition, $query_type = '', $return_affected_messages = false, $autoThumbRemoval = true)
{
	global $smf_db_prefix, $smf_settings;

	// Delete it only if it exists...
	$msgs = array();
	$attach = array();
	$parents = array();

	// Get all the attachment names and ID_MSGs.
	$request = smf_db_query("
		SELECT
			a.filename, a.attachment_type, a.id_attach, a.id_member" . ($query_type == 'messages' ? ', m.id_msg' : ', a.id_msg') . ",
			IFNULL(thumb.id_attach, 0) AS ID_THUMB, thumb.filename AS thumb_filename, thumb_parent.id_attach AS ID_PARENT
		FROM ({$smf_db_prefix}attachments AS a" .($query_type == 'members' ? ", {$smf_db_prefix}members AS mem" : ($query_type == 'messages' ? ", {$smf_db_prefix}messages AS m" : '')) . ")
			LEFT JOIN {$smf_db_prefix}attachments AS thumb ON (thumb.id_attach = a.id_thumb)
			LEFT JOIN {$smf_db_prefix}attachments AS thumb_parent ON (a.attachment_type = 3 AND thumb_parent.id_thumb = a.id_attach)
		WHERE $condition" . ($query_type == 'messages' ? '
			AND m.id_msg = a.id_msg' : '') . ($query_type == 'members' ? '
			AND mem.id_member = a.id_member' : ''), __FILE__, __LINE__);
	while ($row = mysql_fetch_assoc($request))
	{
		// Figure out the "encrypted" filename and unlink it ;).
		if ($row['attachmentType'] == 1)
			@unlink($smf_settings['custom_avatar_dir'] . '/' . $row['filename']);
		else
		{
			$filename = smf_get_attachment_filename($row['filename'], $row['ID_ATTACH']);
			@unlink($filename);

			// If this was a thumb, the parent attachment should know about it.
			if (!empty($row['ID_PARENT']))
				$parents[] = $row['ID_PARENT'];

			// If this attachments has a thumb, remove it as well.
			if (!empty($row['ID_THUMB']) && $autoThumbRemoval)
			{
				$thumb_filename = smf_get_attachment_filename($row['thumb_filename'], $row['ID_THUMB']);
				@unlink($thumb_filename);
				$attach[] = $row['ID_THUMB'];
			}
		}

		// Make a list.
		if ($return_affected_messages && empty($row['attachmentType']))
			$msgs[] = $row['ID_MSG'];
		$attach[] = $row['ID_ATTACH'];
	}
	mysql_free_result($request);

	// Removed attachments don't have to be updated anymore.
	$parents = array_diff($parents, $attach);
	if (!empty($parents))
		smf_db_query("
			UPDATE {$smf_db_prefix}attachments
			SET id_thumb = 0
			WHERE id_attach IN (" . implode(', ', $parents) . ")
			LIMIT " . count($parents), __FILE__, __LINE__);

	if (!empty($attach))
		smf_db_query("
			DELETE FROM {$smf_db_prefix}attachments
			WHERE id_attach IN (" . implode(', ', $attach) . ")
			LIMIT " . count($attach), __FILE__, __LINE__);

	if ($return_affected_messages)
		return array_unique($msgs);
}

//
function smf_remove_avatar($ID_MEMBER = 0)
{
	global $smf_connection, $smf_user_info;

  if (!$smf_connection)
	  return false;

  if ($ID_MEMBER == 0) {
    $ID_MEMBER = $smf_user_info['ID_MEMBER'];
    if ($ID_MEMBER == 0)
      return false;
  }
	// Remove previous attachments this member might have had.
	smf_remove_attachments('a.id_member = ' . $ID_MEMBER);

  return true;
}

//
function smf_update_avatar($destName)
{
	global $smf_connection, $smf_db_prefix, $smf_settings, $smf_user_info;

  if (!$smf_connection)
	  return false;

  $ID_MEMBER = $smf_user_info['ID_MEMBER'];
  if ($ID_MEMBER == 0)
    return false;

  $uploadDir = empty($smf_settings['custom_avatar_enabled']) ? $smf_settings['attachmentUploadDir'] : $smf_settings['custom_avatar_dir'];

	$destFileName = $uploadDir . '/' . $destName;
	// Remove previous attachments this member might have had.
	//smf_remove_attachments('a.ID_MEMBER = ' . $ID_MEMBER);

  if (file_exists($destFileName)) {
    list ($width, $height, $type) = @getimagesize($destFileName);

  	smf_db_query("
  		INSERT INTO {$smf_db_prefix}attachments
  			(id_member, attachment_type, filename, size, width, height)
  		VALUES ($ID_MEMBER, " . (empty($smf_settings['custom_avatar_enabled']) ? '0' : '1') . ", '$destName', " . filesize($destFileName) . ", " . (int) $width . ", " . (int) $height . ")", __FILE__, __LINE__);
  }
  return true;
}

////////////////////////////////////////////////////////////////////

// Log the current user online.
function smf_log_online($action = null)
{
	global $smf_settings, $smf_connection, $smf_db_prefix, $smf_user_info;

	if (!$smf_connection)
		return false;

	// Determine number of seconds required.
	$lastActive = $smf_settings['lastActive'] * 60;

	// Don't mark them as online more than every so often.
	if (empty($_SESSION['log_time']) || $_SESSION['log_time'] < (time() - 8))
		$_SESSION['log_time'] = time();
	else
		return;

	$serialized = $_GET;
	$serialized['USER_AGENT'] = $_SERVER['HTTP_USER_AGENT'];
	unset($serialized['sesc']);
	if ($action !== null)
		$serialized['action'] = $action;

	$serialized = addslashes(serialize($serialized));

	// Guests use 0, members use ID_MEMBER.
	if ($smf_user_info['is_guest'])
	{
		smf_db_query("
			DELETE FROM {$smf_db_prefix}log_online
			WHERE log_time < NOW() - INTERVAL $lastActive SECOND OR session = 'ip$_SERVER[REMOTE_ADDR]'", __FILE__, __LINE__);
		smf_db_query("
			INSERT IGNORE INTO {$smf_db_prefix}log_online
				(session, id_member, ip, url)
			VALUES ('ip$_SERVER[REMOTE_ADDR]', 0, IFNULL(INET_ATON('$_SERVER[REMOTE_ADDR]'), 0), '$serialized')", __FILE__, __LINE__);
	}
	else
	{
		smf_db_query("
			DELETE FROM {$smf_db_prefix}log_online
			WHERE log_time < NOW() - INTERVAL $lastActive SECOND OR id_member = $smf_user_info[id] OR session = '" . @session_id() . "'", __FILE__, __LINE__);
		smf_db_query("
			INSERT IGNORE INTO {$smf_db_prefix}log_online
				(session, id_member, ip, url)
			VALUES ('" . @session_id() . "', $smf_user_info[id], IFNULL(INET_ATON('$_SERVER[REMOTE_ADDR]'), 0), '$serialized')", __FILE__, __LINE__);
	}
}

function smf_is_online($user)
{
	global $smf_settings, $smf_connection, $smf_db_prefix;

	if (!$smf_connection)
		return false;

	$result = smf_db_query("
		SELECT lo.id_member
		FROM {$smf_db_prefix}log_online AS lo" . (!is_integer($user) ? "
			LEFT JOIN {$smf_db_prefix}members AS mem ON (mem.id_member = lo.id_member)" : '') . "
		WHERE lo.id_member = " . (int) $user . (!is_integer($user) ? " OR mem.member_name = '$user'" : '') . "
		LIMIT 1", __FILE__, __LINE__);
	$return = mysql_num_rows($result) != 0;
	mysql_free_result($result);

	return $return;
}

?>