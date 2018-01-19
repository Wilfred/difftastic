==========
eval() test
==========

<?php

error_reporting(0);

$message = "echo \"hey\n\";";

for ($i=0; $i<10; $i++) {
  eval($message);
  echo $i."\n";
}

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (expression_statement (eval_intrinsic (simple_variable (variable_name (name))))) (echo_statement (binary_expression (simple_variable (variable_name (name))) (string))))))
