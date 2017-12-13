==========
Bug #25547 (error_handler and array index with function call)
==========

<?php

function handler($errno, $errstr, $errfile, $errline, $context)
{
	echo __FUNCTION__ . "($errstr)\n";
}

set_error_handler('handler');

function foo($x) {
	return "foo";
}

$output = array();
++$output[foo("bar")];

print_r($output);

echo "Done";
?>

---

(program (script_section (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (string)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression))) (expression_statement (prefix_increment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string))))
