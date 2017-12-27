==========
Bug #24951 (ob_flush() destroys output handler)
==========

<?php
function test($s, $mode)
{
	return (($mode & PHP_OUTPUT_HANDLER_START)?"[":"") . $s . (($mode & PHP_OUTPUT_HANDLER_END)?"]\n":"");
}
function t1()
{
	ob_start("test");
	echo "Hello from t1 1 ";
        echo "Hello from t1 2 ";
        ob_end_flush();
}
function t2()
{
	ob_start("test");
	echo "Hello from t2 1 ";
        ob_flush();
        echo "Hello from t2 2 ";
        ob_end_flush();
}
function t3()
{
	ob_start("test");
        echo "Hello from t3 1 ";
        ob_clean();
        echo "Hello from t3 2 ";
        ob_end_flush();
}

t1(); echo "\n";
t2(); echo "\n";
t3(); echo "\n";
?>

---

(program  (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (return_statement (binary_expression (binary_expression (conditional_expression (binary_expression (simple_variable (variable_name (name))) (qualified_name (name))) (string) (string)) (simple_variable (variable_name (name)))) (conditional_expression (binary_expression (simple_variable (variable_name (name))) (qualified_name (name))) (string) (string)))))) (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (string)) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))) (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))) (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)))

