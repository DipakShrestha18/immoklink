<?php
/**
 * @file
 * Layout template.
 */
?>
<div class="page fixed-header-sm">
  <div class="wrapper">
    <div class="header">
      <header>
        <?php print $content['top']; ?>
      </header>
      <nav>
        <?php print $content['nav']; ?>
      </nav>
    </div>
  </div>
  <div class="clear-left"></div>

  <article>
      <?php print $content['content']; ?>
  </article>
</div>
