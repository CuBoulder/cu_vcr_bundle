<?php if (!$page) : ?>
<?php print render($content['body']); ?>
<?php else : ?>
<?php print render($content_sidebar_left); ?>
<?php print render($content_sidebar_right); ?>
<?php print render($content['body']); ?> 
<?php if ($content['field_faq_display'][0]['#markup']): ?>
  <?php print render($content['faqs_entity_view_1']); ?>
  <?php print render($content['field_question_answer']); ?>
<?php else: ?>
  <?php print render($content['faq_accordion_entity_view_1']); ?>
<?php endif; ?>
<?php endif; ?>
