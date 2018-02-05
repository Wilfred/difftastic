==========
Divide 3 variables and print result
==========

<?php $a=27; $b=3; $c=3; $d=$a/$b/$c; echo $d?>

---

(program
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (expression_statement (assignment_expression (variable_name (name)) (integer)))
  (expression_statement (assignment_expression (variable_name (name)) (binary_expression (binary_expression (variable_name (name)) (variable_name (name))) (variable_name (name)))))
  (echo_statement (variable_name (name))))
