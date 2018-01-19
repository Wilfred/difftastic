==========
Testing eval function
==========

<?php
error_reporting(0);
$a="echo \"Hello\";";
eval($a);
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (eval_intrinsic (simple_variable (variable_name (name))))))
