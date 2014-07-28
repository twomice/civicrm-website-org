<?php

/**
 * CustomDataImprovements.Run API specification (optional)
 * This is used for documentation and validation.
 *
 * @param array $spec description of fields supported by this API call
 * @return void
 * @see http://wiki.civicrm.org/confluence/display/CRM/API+Architecture+Standards
 */
function _civicrm_api3_custom_data_improvements_run_spec(&$spec) {
}

/**
 * CustomDataImprovements.Run API
 *
 * @param array $params
 * @return array API result descriptor
 * @see civicrm_api3_create_success
 * @see civicrm_api3_create_error
 * @throws API_Exception
 */
function civicrm_api3_custom_data_improvements_run($params) {
    
    echo "Community profile custom data set should only apply to individuals\n";
    CustomDataImprovements_Change_Entity(11,'Individual');
    echo "Community profile custom data set should only apply to individuals\n";
    CustomDataImprovements_Change_Entity(8,'Individual');
    echo "People that have filled in the site registration should be classed as End Users\n";
    $query = "UPDATE civicrm_contact AS cc
        JOIN civicrm_value_civicrm_site_registration_4 AS cd ON cd.entity_id = cc.id
        SET contact_sub_type = 'Service_providerEnd_user'
        WHERE contact_sub_type ='Service_provider'";
    CRM_Core_DAO::singleValueQuery($query);
    $query = "UPDATE civicrm_contact AS cc
        JOIN civicrm_value_civicrm_site_registration_4 AS cd ON cd.entity_id = cc.id
        SET contact_sub_type = 'End_user'
        WHERE contact_sub_type =''";
    CRM_Core_DAO::singleValueQuery($query);
    echo "End user organisation data should only apply to Organisations with contact type End user";
    $query = "UPDATE co_civicrm.civicrm_custom_group SET extends_entity_column_value = 'End_user' WHERE civicrm_custom_group.id =3";
    CRM_Core_DAO::singleValueQuery($query);
}

function CustomDataImprovements_Change_Entity($custom_group_id, $contact_type){
    $tableName = CRM_Core_DAO::getFieldValue('CRM_Core_DAO_CustomGroup', $custom_group_id, 'table_name');
    CRM_Core_DAO::dropTriggers($tableName);
    echo "- Delete custom data set with id $custom_group_id for organistions that are not of type '$contact_type'\n";
    $query = "DELETE cd
        FROM $tableName AS cd
        JOIN civicrm_contact AS c ON c.id=cd.entity_id
        WHERE c.contact_type!='$contact_type'";
    CRM_Core_DAO::singleValueQuery($query);
    echo "- Set the custom data group to only extend individuals\n";
    $query = "
        UPDATE civicrm_custom_group
        SET extends = '$contact_type'
        WHERE id = $custom_group_id";
    CRM_Core_DAO::singleValueQuery($query);
    CRM_Core_DAO::triggerRebuild($tableName);

}
