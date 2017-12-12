==========
Test for buffering in core functions with implicit flush on
==========

<?php
$res = var_export("foo1");
echo "\n";
$res = var_export("foo2", TRUE);
echo "\n";
echo $res."\n";
?>

---

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string))))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (string) (qualified_name (name)))))) (echo_statement (string)) (echo_statement (binary_expression (simple_variable (variable_name (name))) (string)))))
