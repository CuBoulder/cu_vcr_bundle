

<?php
$sections = 'all';
if (isset($content['field_policy_filter_term']['#items'])) {
  $terms = $content['field_policy_filter_term']['#items'];
  foreach($terms as $term) {
    $policy_sections[] = $term['tid'];
  }
  $sections = join('+', $policy_sections);
}
?>

<div class="bean-policies">
  <?php print views_embed_view('policies' , 'block', $sections); ?>
</div>
