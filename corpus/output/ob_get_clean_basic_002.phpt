==========
Test basic behaviour of ob_get_clean()
==========

<?php
/*
 * proto bool ob_get_clean(void)
 * Function is implemented in main/output.c
*/

ob_start();

echo "Hello World";

$out = ob_get_clean();
$out = strtolower($out);

var_dump($out);
?>

---

(program (script_section (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))
