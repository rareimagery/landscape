<?php
$comments = render($content['comments']);
$comment_form = render($content['comment_form']);
?>
<section id="comments" class="comments <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($comments && $node->type != 'forum'): ?>
    <?php if($total_comments_in_node == 1 ){ ?>
    <h2 class="title"><?php print t('!comments Comment',array('!comments'=>$total_comments_in_node)); ?></h2>
   <?php  }else{ ?>
       <h2 class="title"><?php print t('!comments Comments',array('!comments'=>$total_comments_in_node)); ?></h2>
   <?php } ?>
  <?php endif; ?>  
  <?php print render($title_suffix); ?>

  <?php print $comments; ?>

  <?php if ($comment_form): ?>
    <h2 class="title comment-form"><?php print t('Add new comment'); ?></h2>
    <?php print $comment_form; ?>
  <?php endif; ?>
</section>
