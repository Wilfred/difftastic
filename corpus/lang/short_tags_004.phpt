==========
short_open_tag: Off
==========

<%= 'so should this' %>

<?php
$a = 'This gets echoed twice';
?>

<?= $a?>

<%= $a%>

<? $b=3; ?>

<?php
   echo "{$b}";
?>
<?= "{$b}"?>

---

(program
  (text)
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (string)))
  (text_interpolation)
  (expression_statement
    (variable_name
      (name)))
  (text))
