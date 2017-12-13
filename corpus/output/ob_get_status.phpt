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

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))

