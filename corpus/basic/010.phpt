==========
Testing | and & operators
==========

<?php $a=8; $b=4; $c=8; echo $a|$b&$c?>

---

(program
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (echo_statement (binary_expression (variable_name (name)) (binary_expression (variable_name (name)) (variable_name (name))))))
