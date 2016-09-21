<?php hide($content['field_unit']); ?>
<?php hide($content['field_article_tag']); ?>
<?php if(!$page): ?>
  <div class="article-summary clearfix">
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <p class="date"><?php print format_date($created, 'custom', 'F j, Y'); ?></p>
    <?php print render($content['body']); ?>
  </div>
<?php else: ?>
  <p class="date"><?php print format_date($created, 'custom', 'F j, Y'); ?></p>
  <?php print render($content); ?>
  <?php if(!empty($content['field_article_tag']['#items'])): ?>
  <strong>Tags:</strong> <?php print render($content['field_article_tag']); ?>
  <?php endif; ?>
<?php endif; ?>