==========
Testing | and & operators
==========

<?php $a=8; $b=4; $c=8; echo $a|$b&$c?>

---

(program (script_section
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (echo_statement (binary_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))))
