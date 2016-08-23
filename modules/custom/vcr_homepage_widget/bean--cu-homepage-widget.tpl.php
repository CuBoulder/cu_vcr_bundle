<?php print render($content['field_widget_sub_title']); ?>
<br />
<?php
// Because www-stage does not contain the 'homepage', when on stage,
// point to dev. In all other environments, just use protocol-relative //.
$prefix = '';
if (isset($_SERVER['WWWNG_ENV'])) {
  if (isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on') {
    $base = 'https://';
  }
  else {
    $base = 'http://';
  }
  

  switch ($_SERVER['WWWNG_ENV']) {
    case 'stage':
    case 'cust_dev':
      $prefix = $base . 'www-dev.colorado.edu/';
      break;
    case 'cust_test':
      $prefix = $base . 'www-test.colorado.edu/';
      break;
    case 'cust_prod':
      $prefix = $base . 'www.colorado.edu/';
      break;
  }
  $prefix .= 'news/';
  
}
?>
<iframe class="widget" scrolling="no" id="homepage-widget" src="<?php print $prefix ?>widgets/features/<?php $term = drupal_strtolower($content['field_widget_term'][0]['#markup']); print $term; ?>"></iframe>
<script type="text/javascript">
//jQuery(document).ready(function(){
  //parent.document.getElementById('homepage-widget').height = document['body'].offsetHeight;
//});
</script>
