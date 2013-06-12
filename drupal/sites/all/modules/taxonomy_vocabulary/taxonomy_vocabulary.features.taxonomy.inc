<?php
/**
 * @file
 * taxonomy_vocabulary.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_vocabulary_taxonomy_default_vocabularies() {
  return array(
    'crm_solution_slideshow' => array(
      'name' => 'WILL CIVICRM MEET YOUR NEEDS?',
      'machine_name' => 'crm_solution_slideshow',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
