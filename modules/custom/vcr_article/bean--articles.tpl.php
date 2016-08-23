<?php
global $base_url;
if(isset($content['field_article_display_number'])) {
  $number = $content['field_article_display_number'][0]['#markup'];
}
else {
  $number = 2;
}

if ($number == '2') {
  $view = 'block_1';
}
elseif ($number == '5') {
  $view = 'block_2';
}
elseif ($number == '10') {
  $view = 'block_3';
}



$sections = 'all';
if (isset($content['field_article_tag']['#items'])) {
  $terms = $content['field_article_tag']['#items'];
  foreach($terms as $term) {
    $article_tags[] = $term['tid'];
  }
  $sections = join('+', $article_tags);
 }

?>
<div class="bean-articles">
  <?php print views_embed_view('article_list' , $view, $sections); ?>
  <?php
    //if ($content['field_article_rss_feed_link'][0]['#markup'] == 'yes'):
  ?>
    <a href="<?php print $base_url; ?>/rss/articles/<?php print $sections; ?>" class="bean-articles-rss">RSS</a>
  <?php //endif; ?>
</div>




