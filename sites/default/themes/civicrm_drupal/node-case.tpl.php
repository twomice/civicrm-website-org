<div class="node<?php print ($sticky) ? " sticky" : ""; ?>">
  <?php if ($page == 0): ?>
    <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  <?php endif; ?>
  <?php print $picture ?>
  <div class="info"><?php print $submitted ?></div>
  
  <div id="node-case-content-wrapper">
  	
	<div id="node-case-content">
	 
	 <?php if ($node->field_main_image[0]): ?>
	   <div class="main-image">
		 <? print $node->field_main_image[0]['view'] ?>
	   </div>	   
	 <?php endif; ?>

	 <?php if ($node->field_main_image_text[0]): ?>
	   <?php print $node->field_main_image_text[0]['view'] ?>
	 <?php endif; ?>
	 
	 
	   <?php if ($node->field_case_image_1[0] && $node->field_image1_text[0]): ?>
	   
	   <div class="thumbnails-text">
	   
		 <?php print $node->field_case_image_1[0]['view'] ?>  
		
		<div class="text">
		 <?php print $node->field_image1_text[0]['view'] ?>
		</div>
	
	   </div>
	   
	   <?php endif; ?>


	   <?php if ($node->field_case_image_2[0] && $node->field_image2_text[0]): ?>
	   
	   <div class="thumbnails-text">
	   
		 <?php print $node->field_case_image_2[0]['view'] ?>  
		
		<div class="text">
		 <?php print $node->field_image2_text[0]['view'] ?>
		</div>
	
	   </div>
	   
	   <?php endif; ?>
	 
	 	 
	
	 <?php if ($node->field_case_image_3[0] && $node->field_image3_text[0]): ?>
	   
	   <div class="thumbnails-text">
	   
		 <?php print $node->field_case_image_3[0]['view'] ?>  
		
		<div class="text">
		 <?php print $node->field_image3_text[0]['view'] ?>
		</div>
	
	   </div>
	   
	   <?php endif; ?>
   	  
   
	</div>
	
	<div id="node-case-sidebar">
	  
	  <?php if ($node->field_organisation[0]): ?>
	   <div class="block">
		 <h2 class="title">The Organisation</h2>
		 <?php print $node->field_organisation[0]['view'] ?>
	   </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_techteam[0]): ?>
	    <div class="block">
		 <h2 class="title">The Technical Team</h2>
		 <?php print $node->field_techteam[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_howdone[0]): ?>
	    <div class="block">
		 <h2 class="title">How It Was Done</h2>
		 <?php print $node->field_howdone[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_modifications[0]): ?>
	    <div class="block">
		 <h2 class="title">Modification Issues</h2>
		 <?php print $node->field_modifications[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_modules[0]): ?>
	    <div class="block">
		 <h2 class="title">Modules used</h2>
		 <?php print $node->field_modules[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_see_site[0]): ?>
	    <div class="block">
		 <h2 class="title">To see the site</h2>
		 <?php print $node->field_see_site[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_questions[0]): ?>
	    <div class="block">
		 <h2 class="title">Questions About CiviCRM</h2>
		 <?php print $node->field_questions[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	  <?php if ($node->field_reference[0]): ?>
	    <div class="block">
		 <h2 class="title">Reference</h2>
		 <?php print $node->field_reference[0]['view'] ?>
	    </div>
	  <?php endif; ?>
	  
	</div>
  
  <br style="clear:both;" />
    
  </div>
  
<?php if ($terms): ?>
  <div class="terms">( categories: <?php print $terms ?> )</div>
<?php endif; ?>
<?php if ($links): ?>
    <?php if ($picture): ?>
      <br class='clear' />
    <?php endif; ?>
  <div class="links"><?php print $links ?></div>
<?php endif; ?>










</div>