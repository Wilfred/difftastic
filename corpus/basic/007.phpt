==========
Multiply 3 variables and print result
==========

<?php $a=2; $b=4; $c=8; $d=$a*$b*$c; echo $d?>

---

(program (script_section
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (simple_variable (variable_name (name))))))
  (echo_statement (simple_variable (variable_name (name))))))
