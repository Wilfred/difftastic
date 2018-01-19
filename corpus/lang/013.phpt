==========
Testing eval function
==========

<?php
error_reporting(0);
$a="echo \"Hello\";";
eval($a);
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (eval_intrinsic (variable_name (name)))))
