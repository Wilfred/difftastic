==========
Bug #25922 (SEGV in error_handler when context is destroyed)
==========

<?php
function my_error_handler($error, $errmsg='', $errfile='', $errline=0, $errcontext='')
{
	echo "$errmsg\n";
	$errcontext = '';
}

set_error_handler('my_error_handler');

function test()
{
	echo "Undefined index here: '{$data['HTTP_HEADER']}'\n";
}
test();
?>

---

(program  (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name)) (default_argument_specifier (string))) (simple_parameter (variable_name (name)) (default_argument_specifier (string))) (simple_parameter (variable_name (name)) (default_argument_specifier (float))) (simple_parameter (variable_name (name)) (default_argument_specifier (string))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (function_definition (name) (compound_statement (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))

