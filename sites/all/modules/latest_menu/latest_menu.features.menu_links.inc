<?php
/**
 * @file
 * latest_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function latest_menu_menu_default_menu_links() {
  $menu_links = array(); 
  // Exported menu link: menu-footer-get-started:<front>
 
  // Exported menu link: menu-footer-get-started:node/141
  $menu_links['menu-footer-get-started:go/evaluate'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('go/evaluate', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Evaluate Your CRM Needs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
 $menu_links['menu-footer-get-started:go/features'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('go/features', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Evaluate CiviCRM Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
$menu_links['menu-footer-get-started:go/books'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('go/books', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Read Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
$menu_links['menu-footer-get-started:participate/documentation'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('participate/documentation', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );


  // Exported menu link: menu-footer-get-started:node/142
  $menu_links['menu-footer-get-started:go/demo'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('go/demo', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Demo CiviCRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer-get-started:node/143
  $menu_links['menu-footer-get-started:go/download'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' => drupal_get_normal_path('go/download', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Download CiviCRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-footer-get-started:node/144
  $menu_links['menu-footer-get-started:go/find-an-expert'] = array(
    'menu_name' => 'menu-footer-get-started',
    'link_path' =>  drupal_get_normal_path('go/find-an-expert', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Find An Expert',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );

  // Exported menu link: menu-footer-participate:node/145
  $menu_links['menu-footer-participate:blog-news'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('blog-news', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Read Our Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );

  // Exported menu link: menu-footer-participate:node/147
  $menu_links['menu-footer-participate:civi-upcoming-events'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' =>  drupal_get_normal_path('civi-upcoming-events', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Attend a Training or Meetup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );

 $menu_links['menu-footer-participate:http://forum.civicrm.org/'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' =>  'http://forum.civicrm.org/',
    'router_path' => '',
    'link_title' => 'Community Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-participate:node/148
  $menu_links['menu-footer-participate:participate/mih'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('participate/mih', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Make It Happen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-footer-participate:node/149
  $menu_links['menu-footer-participate:contribute'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('contribute', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer-participate:node/151
  $menu_links['menu-footer-participate:participate/community'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('participate/community', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Join the CiviCRM Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );

  // Exported menu link: menu-footer-participate:node/150
  $menu_links['menu-footer-participate:participate/developer'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('participate/developer', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Become A CiviCRM Developer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );

  $menu_links['menu-footer-participate:http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => 'http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel',
    'router_path' => '',
    'link_title' => 'Issue Tracker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );

 $menu_links['menu-footer-participate:https://www.transifex.net/projects/p/civicrm/teams/'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => 'https://www.transifex.net/projects/p/civicrm/teams/',
    'router_path' => '',
    'link_title' => 'Translate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
 $menu_links['menu-footer-participate:participate/documentation'] = array(
    'menu_name' => 'menu-footer-participate',
    'link_path' => drupal_get_normal_path('participate/documentation', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Help with Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );



  // Exported menu link: menu-footer-what-is-civicrm-subm:node/110
  $menu_links['menu-footer-what-is-civicrm-subm:what/contributors'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'link_path' => drupal_get_normal_path('what/contributors', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contributors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer-what-is-civicrm-subm:node/111
  $menu_links['menu-footer-what-is-civicrm-subm:what/coreteam'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'link_path' => drupal_get_normal_path('what/coreteam', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Core Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );

  // Exported menu link: menu-footer-what-is-civicrm-subm:node/137
  $menu_links['menu-footer-what-is-civicrm-subm:what/community'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'link_path' => drupal_get_normal_path('what/community', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );

  // Exported menu link: menu-footer-what-is-civicrm-subm:node/139
  $menu_links['menu-footer-what-is-civicrm-subm:what/casestudies'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'link_path' =>  drupal_get_normal_path('what/casestudies', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Casestudies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-what-is-civicrm-subm:node/140
  $menu_links['menu-footer-what-is-civicrm-subm:what/experts'] = array(
    'menu_name' => 'menu-footer-what-is-civicrm-subm',
    'link_path' => drupal_get_normal_path('what/experts', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Experts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );

  // Exported menu link: menu-footer-will-civicrm-meet-yo:<front>
  $menu_links['menu-footer-will-civicrm-meet-yo:features/contacts'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/contacts', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
// Exported menu link: menu-footer-will-civicrm-meet-yo:node/97
  $menu_links['menu-footer-will-civicrm-meet-yo:features/contributions'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/contributions', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contributions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );

  $menu_links['menu-footer-will-civicrm-meet-yo:features/communications'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/communications', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Communications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
 
  
  // Exported menu link: menu-footer-will-civicrm-meet-yo:node/99
  $menu_links['menu-footer-will-civicrm-meet-yo:features/peer-to-peer-fundraisers'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' =>  drupal_get_normal_path('features/peer-to-peer-fundraisers', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Peer-To-Peer Fundraisers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );

  // Exported menu link: menu-footer-will-civicrm-meet-yo:node/100
  $menu_links['menu-footer-will-civicrm-meet-yo:features/advocacy-campaigns'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/advocacy-campaigns', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Advocacy Campaigns',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer-will-civicrm-meet-yo:node/101
  $menu_links['menu-footer-will-civicrm-meet-yo:features/events'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/events', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  $menu_links['menu-footer-will-civicrm-meet-yo:features/members'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/members', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-footer-will-civicrm-meet-yo:node/102
  $menu_links['menu-footer-will-civicrm-meet-yo:features/reports'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/reports', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-footer-will-civicrm-meet-yo:node/103
  $menu_links['menu-footer-will-civicrm-meet-yo:features/casemanagement'] = array(
    'menu_name' => 'menu-footer-will-civicrm-meet-yo',
    'link_path' => drupal_get_normal_path('features/casemanagement', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Case Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
 

 
  // Exported menu link: menu-primary-menu:node/104
  $menu_links['menu-primary-menu:go'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'GET STARTED',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-39',
  );

  // Exported menu link: menu-primary-menu:node/141
  $menu_links['menu-primary-menu:go/evaluate'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/evaluate', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Evaluate Your CRM Needs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );

 $menu_links['menu-primary-menu:go/features'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/features', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Evaluate CiviCRM Features ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );
  // Exported menu link: menu-primary-menu:node/142
  $menu_links['menu-primary-menu:go/demo'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/demo', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Demo CiviCRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );
  $menu_links['menu-primary-menu:go/books'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/books', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Read Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );

  $menu_links['menu-primary-menu:participate/documentation'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate/documentation', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );

  // Exported menu link: menu-primary-menu:node/143
  $menu_links['menu-primary-menu:go/download'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/download', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Download CiviCRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );

  // Exported menu link: menu-primary-menu:node/144
  $menu_links['menu-primary-menu:go/find-an-expert'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('go/find-an-expert', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Find An Expert',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => drupal_get_normal_path('go', $path_language = NULL),
  );


  // Exported menu link: menu-primary-menu:node/105
  $menu_links['menu-primary-menu:participate'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'PARTICIPATE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  //child link

$menu_links['menu-primary-menu:blog-news'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('blog-news', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Read Our Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );


$menu_links['menu-primary-menu:civi-upcoming-events'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' =>  drupal_get_normal_path('civi-upcoming-events', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Attend a Training or Meetup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

$menu_links['menu-primary-menu:http://forum.civicrm.org/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'http://forum.civicrm.org/',
    'router_path' => '',
    'link_title' => 'Community Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

$menu_links['menu-primary-menu:participate/mih'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate/mih', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Make It Happen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

$menu_links['menu-primary-menu:contribute'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('contribute', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );
$menu_links['menu-primary-menu:participate/community'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate/community', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Join the CiviCRM Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );
$menu_links['menu-primary-menu:participate/developer'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate/developer', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Become A CiviCRM Developer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

$menu_links['menu-primary-menu:'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel',
    'router_path' => '',
    'link_title' => 'Issue Tracker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

$menu_links['menu-primary-menu:https://www.transifex.net/projects/p/civicrm/teams/'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => 'https://www.transifex.net/projects/p/civicrm/teams/',
    'router_path' => '',
    'link_title' => 'Translate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

 $menu_links['menu-primary-menu:participate/documentation'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('participate/documentation', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Help with Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  'parent_path' => drupal_get_normal_path('participate', $path_language = NULL),
  );

 //end

  // Exported menu link: menu-primary-menu:node/93
  $menu_links['menu-primary-menu:what/whatiscivicrm'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'WHAT IS CIVICRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );

  //child under what civicrm
 $menu_links['menu-primary-menu:what/community'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/community', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
  );

 $menu_links['menu-primary-menu:what/casestudies'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/casestudies', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Casestudies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
  );
 $menu_links['menu-primary-menu:what/experts'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/experts', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Experts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
  );
 $menu_links['menu-primary-menu:what/contributors'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/contributors', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contributors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
  );
 $menu_links['menu-primary-menu:what/coreteam'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('what/coreteam', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Coreteam',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => drupal_get_normal_path('what/whatiscivicrm', $path_language = NULL),
  );
 //end children

  // Exported menu link: menu-primary-menu:node/94
  $menu_links['menu-primary-menu:features'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'WILL CIVICRM MEET YOUR NEEDS?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );

 $menu_links['menu-primary-menu:features/contacts'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/contacts', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  );

 $menu_links['menu-primary-menu:features/contributions'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/contributions', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Contributions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  );

 $menu_links['menu-primary-menu:features/communications'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/communications', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Communications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  );


 $menu_links['menu-primary-menu:features/peer-to-peer-fundraisers'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/peer-to-peer-fundraisers', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Peer-To-Peer Fundraisers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );
 $menu_links['menu-primary-menu:features/advocacy-campaigns'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/advocacy-campaigns', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Advocacy Campaigns',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );
 $menu_links['menu-primary-menu:features/events'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/events', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );
 $menu_links['menu-primary-menu:features/members'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/members', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );

 $menu_links['menu-primary-menu:features/reports'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/reports', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );
 $menu_links['menu-primary-menu:features/casemanagement'] = array(
    'menu_name' => 'menu-primary-menu',
    'link_path' => drupal_get_normal_path('features/casemanagement', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Case Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => drupal_get_normal_path('features', $path_language = NULL),
  
  );


  // Exported menu link: menu-top-contactus:<front>

 $menu_links['menu-top-contactus:blog-news'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('blog-news', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'BLOG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',

  );


  $menu_links['menu-top-contactus:contact'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('contact', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'CONTACT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',

  );


  $menu_links['menu-top-contactus:http://www.facebook.com'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => 'http://www.facebook.com',
    'router_path' => '',
    'link_title' => 'FACEBOOK',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => drupal_get_normal_path('contact', $path_language = NULL),
  
  );
  $menu_links['menu-top-contactus:http://www.twitter.com'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => 'http://www.twitter.com',
    'router_path' => '',
    'link_title' => 'TWITTER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => drupal_get_normal_path('contact', $path_language = NULL),
 
  );
  $menu_links['menu-top-contactus:http://www.vimeo.com'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => 'http://www.vimeo.com',
    'router_path' => '',
    'link_title' => 'VIMEO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => drupal_get_normal_path('contact', $path_language = NULL),
   
  );
  $menu_links['menu-top-contactus:what/experts'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('what/experts', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Find An Expert',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
   
  );
  $menu_links['menu-top-contactus:help'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('help', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'NEED HELP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
   
  );

  $menu_links['menu-top-contactus:http:what/supportus'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('what/supportus', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'SUPPORT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  
  );
  $menu_links['menu-top-contactus:participate/developer'] = array(
    'menu_name' => 'menu-top-contactus',
    'link_path' => drupal_get_normal_path('participate/developer', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'DEVELOPER RESOURCES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
   
  );

  //developer menu
 $menu_links['menu-for-developers:http://forum.civicrm.org/'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://forum.civicrm.org/',
    'router_path' => '',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-for-developers:http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel
  $menu_links['menu-for-developers:http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://issues.civicrm.org/jira/browse/CRM?report=com.atlassian.jira.plugin.system.project:roadmap-panel',
    'router_path' => '',
    'link_title' => 'Issue Tracker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-for-developers:http://svn.civicrm.org
  $menu_links['menu-for-developers:http://svn.civicrm.org'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://svn.civicrm.org',
    'router_path' => '',
    'link_title' => 'Public Source-Code Repository',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  $menu_links['menu-for-developers:category/civicrm-blog-categories/civicrm-architecture-series'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => drupal_get_normal_path('category/civicrm-blog-categories/civicrm-architecture-series', $path_language = NULL),
    'router_path' => 'node/%',
    'link_title' => 'Architecture Related Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );


  // Exported menu link: menu-for-developers:http://webchat.freenode.net/?channels=#civicrm
  $menu_links['menu-for-developers:http://webchat.freenode.net/?channels=#civicrm'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://webchat.freenode.net/?channels=#civicrm',
    'router_path' => '',
    'link_title' => 'IRC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-for-developers:http://wiki.civicrm.org/confluence/display/CRM/CiviCRM+Roadmap
  $menu_links['menu-for-developers:http://wiki.civicrm.org/confluence/display/CRM/CiviCRM+Roadmap'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://wiki.civicrm.org/confluence/display/CRM/CiviCRM+Roadmap',
    'router_path' => '',
    'link_title' => 'Roadmap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-for-developers:http://wiki.civicrm.org/confluence/display/CRMDOC40/CiviCRM+Documentation
  $menu_links['menu-for-developers:http://book.civicrm.org/developer/'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'http://book.civicrm.org/developer/',
    'router_path' => '',
    'link_title' => 'Developer Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-for-developers:https://www.transifex.net/projects/p/civicrm/
  $menu_links['menu-for-developers:https://www.transifex.net/projects/p/civicrm/'] = array(
    'menu_name' => 'menu-for-developers',
    'link_path' => 'https://www.transifex.net/projects/p/civicrm/',
    'router_path' => '',
    'link_title' => 'Translations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Documentation');
  t('Advocacy Campaigns');
  t('Advocates');
  t('Architecture Related Blogs');
  t('Attend a Training or Meetup');
  t('Become A CiviCRM Developer');
  t('BLOG');
  t('CONTACT');
  t('Casestudies');
  t('Communications');
  t('Community');
  t('Community Forum');
  t('Contacts');
  t('Contribute');
  t('Contributions');
  t('Contributors');
  t('Core Team');
  t('Demo CiviCRM');
  t('Developer Documentation');
  t('DEVELOPER RESOURCES');
  t('Documentation');
  t('Donations');
  t('Donors');
  t('Download CiviCRM');
  t('Evaluate CiviCRM Features');
  t('Evaluate Your CRM Needs');
  t('Events');
  t('Experts');
  t('FACEBOOK');
  t('Find An Expert');
  t('Forum');
  t('Help with Documentation');
  t('GET STARTED');
  t('Grantees');
  t('Grantors');
  t('In-Kind');
  t('IRC');
  t('Issue Tracker');
  t('Join the CiviCRM Community');
  t('Mailings');
  t('Make It Happen');
  t('Members');
  t('NEED HELP');
  t('Online Documentation');
  t('PARTICIPATE');
  t('Payments');
  t('Peer-To-Peer Fundraisers');
  t('Pledges');
  t('Program & Event Participants');
  t('Public Source-Code Repository');
  t('Read Books');
  t('Read Our Blog');
  t('Recurring Donations');
  t('Reports');
  t('Roadmap');
  t('Subscribers');
  t('SUPPORT US');
  t('Testimonials');
  t('Translate');
  t('Translations');
  t('Tribute Donations');
  t('TWITTER');
  t('VIMEO');
  t('Volunteers');
  t('Voters');
  t('WHAT IS CIVICRM');
  t('WILL CIVICRM MEET YOUR NEEDS?');
  t('Case Management');


  return $menu_links;
}
