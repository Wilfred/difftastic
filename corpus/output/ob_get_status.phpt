==========
ob_get_status() function basic test
==========

<?php
ob_start();
$status = ob_get_status(true);
ob_end_clean();
var_dump($status);
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

