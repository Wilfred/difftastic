==========
Subtract 3 variables and print result
==========

<?php $a=27; $b=7; $c=10; $d=$a-$b-$c; echo $d?>

---

(program
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (integer)))
  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (simple_variable (variable_name (name))))))
  (echo_statement (simple_variable (variable_name (name)))))
