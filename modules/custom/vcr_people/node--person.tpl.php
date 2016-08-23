<?php print render($content['field_person_photo']); ?>

<?php
  if (isset($element['field_unit'])) {
    $element = $content['field_unit'];
    $units = array_intersect_key($element, element_children($element));
    if (isset($units)) {
      foreach ($units as $unit) {
        $person_units[] = render($unit);
      }
      $units = join(', ', $person_units);
    }
  }
  if (isset($element['field_person_title'])) {
    $element = $content['field_person_title'];
    $titles = array_intersect_key($element, element_children($element));
    if (isset($titles)) {
      foreach ($titles as $title) {
        $person_titles[] = render($title);
      }
      $titles = join(', ', $person_titles);
    }
  }
  if (!empty($units)) { print '<strong>' . $units . '</strong><br />'; }
  if (!empty($titles)) { print $titles; }
?>

<div class="people-contact">
  <strong>Contact Information:</strong><br />
  <?php print render($content['field_person_email']); ?><br />
  <?php print render($content['field_person_phone']); ?>
  <?php if(!empty($content['field_person_fax'])): ?>
    &bull; <?php print render($content['field_person_fax']); ?> (fax)
  <?php endif; ?>
  <br />
  <?php print render($content['field_person_address']); ?>
</div>

<?php if(!empty($content['field_ocg_category'])): ?>
  <div class="ocg-info">
    <strong>Award Lifecycle</strong><br />
    <?php print render($content['field_ocg_category']); ?>
  </div>
<?php endif; ?>

<?php if(!empty($content['field_person_department'])): ?>
  <div class="ocg-units">
    <strong>Department</strong><br />
    <?php print render($content['field_person_department']); ?>
  </div>
<?php endif; ?>



<?php if(!empty($content['field_person_website'])): ?>
<div class="people-website">
  <?php print render($content['field_person_website']); ?>
</div>
<?php endif; ?>

<?php if(!empty($content['field_person_interests'])): ?>
<div class="people-interests">
  <strong>My Interests:</strong> <?php print render($content['field_person_interests']); ?>
</div>
<?php endif; ?>


<div class="people-bio">
  <?php print render($content['field_person_biography']); ?>
</div>
