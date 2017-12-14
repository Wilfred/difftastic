==========
Add 3 variables together and print result
==========

<?php $a=1; $b=2; $c=3; $d=$a+$b+$c; echo $d?>

---

(program
  (expression_statement (assignment_expression
    (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression
    (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression
    (simple_variable (variable_name (name))) (float)))
  (expression_statement (assignment_expression
    (simple_variable (variable_name (name)))
    (binary_expression
      (binary_expression
        (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))
      (simple_variable (variable_name (name))))))
  (echo_statement (simple_variable (variable_name (name)))))
