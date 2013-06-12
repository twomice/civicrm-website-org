ntroduction:

The purpose of this module is to integrate the GoToWebinar, and CiviCRM systems in the following manner. A webinar can be created in GoToWebinar. From there, the Webinar ID can be retrieved in the GoToWebinar online System. [Insert section describing how to retrieve Webinar ID] Following the creation of a webinar, an event can be created in CiviEvent, the event management section of CiviCRM.

In the Event Information section of the event creation process, there is a collapsed section entitled [GoToWebinar]. Expanding this section reveals the optional Webinar ID field. Placing the webinar ID that was retrieved from GoToWebinar here will associate the event in CiviCRM with the webinar created in GoToWebinar. It is essential that the supplied webinar ID be correct, or else the association will fail. [Add section if required about test participant being created if applicable]

Once the event has been created using this method in CiviCRM, the normal procedures for sending out the link to the registration page for the event can be followed. When a participant goes to register for an event, they will follow the same process that was formerly in place. Once they have completed their registration as a participant, in addition to any email notification that has been set up to be sent as part of CiviCRM, GoToWebinar will also send the participant an email with the details for them to log into the webinar as they have now been registered there as well.

System Setup:

1.Create the Webinar Event Type

Begin by logging into CiviCRM. Go to http://example.org/civicrm. Once you are logged in, click on the CiviCRM link on the left hand side under you username. [This may change dependent on what theme is being used] This will bring you to the CiviCRM dashboard. Scroll down the page, and click on the Administer CiviCRM link on the left hand side, found under the menu heading. [Again, dependent on the theme being used] Scroll down, and under the Administration section entitled CiviEvent, click on the Event Types link.

At the base of the page, click on the button titled “New Event Type”. Under the “Label” field enter Webinar. Make sure that the “Enabled?” box is checked. Click the save button at the base of the form, and the new event type has been created.

2.Create the GoToWebinar Section in CiviEvent

Begin by logging into CiviCRM. Go to http://example.org/civicrm. Once you are logged in, click on the CiviCRM link on the left hand side under your username. [This may change dependent on what theme is being used] This will bring you to the CiviCRM dashboard. Scroll down the page, and click on the Administer CiviCRM link on the left hand side, found under the menu heading. [Again, dependent on the theme being used] Scroll down, and under the Administration section entitled Customize, click on the Custom Data link.

Now we will create the Custom Data Group for GoToWebinar. Scroll to the bottom of the page, and click the button titled New Group of Custom Fields. This will bring you to the form to create a Custom Data Group. Under Group Name, type in the name of the group: GoToWebinar. Next, select Events from the Used For drop-down. This will pop up another drop-down to the right. Please select the type of event that webinars will be associated with. Use the event type “Webinar” that we created in the previous step. Skip over the Order field as by default it will place the GoToWebinar field group below any other custom groups that have been created previously. Make sure that the “Is this Custom Data Group active?” box is checked. Now, scroll to the base of the page and click “Save”. 

You will now be brought to the Custom Data Field creation form. Under the “Field Label” section, type in Webinar ID. Leave the “Data and Input Field Type” as Alphanumeric and Text. Leave the “Database field length” and “Order” fields as they are (255 and 1 respectively). Make sure to leave the “Default Value” field blank. Under the “Field Help” section, type in the text you would like to appear along with the field in the form to help direct a user creating or editing an event. I suggest something like:
“This field is the optional area to specify the Webinar ID from GoToWebinar to be associated with this event.”
Next, make sure that the “Required?” and “Is this Field Searchable?” boxes are not checked. Make sure that the “Active” box is checked, and that the “View Only” box is not checked. Now click the “Save” button at the bottom of the page, and the GoToWebinar Custom Data Group with the Custom Field Webinar ID will have been created successfully.

3.Copy the Module into Drupal's modules folder

4.Activate the Module in Drupal
