<?php
/**
 * @file
 * Layout template for Planer one column in 3 layout.
 *
 * Regions:
 * - header
 * - content
 * - footer
 */
?>
<div class="wrapper">
<?php if (isset($content['header'])) {print $content['header'];} ?>
<?php if (isset($content['content'])) {print $content['content'];} ?>
<?php if (isset($content['footer'])) {print $content['footer'];} ?>
</div>