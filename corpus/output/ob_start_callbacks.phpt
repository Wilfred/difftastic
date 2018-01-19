==========
Test ob_start() with callbacks in variables
==========

<?php

// Closure in variable
$a = function ($s) { return strtoupper($s); };
ob_start($a);
echo 'closure in variable', "\n";
ob_end_flush();

// Object (array) in variable
class foo {
	static function out($foo) {
		return strtoupper($foo);
	}
}
$a = array('foo', 'out');
ob_start($a);
echo 'object in variable', "\n";
ob_end_flush();

// Object with static array
ob_start(array('foo', 'out'));
echo 'object via static array', "\n";
ob_end_flush();

function my_strtoupper($foo, $bar) {
	return strtoupper($foo);
}
$a = 'my_strtoupper';
ob_start($a);
echo 'function via variable', "\n";
ob_end_flush();

---

(program  (comment) (expression_statement (assignment_expression (variable_name (name)) (anonymous_function_creation_expression (simple_parameter (variable_name (name))) (compound_statement (return_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (sequence_expression (string) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (comment) (class_declaration (name) (method_declaration (static_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (sequence_expression (string) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)))))) (echo_statement (sequence_expression (string) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (return_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (sequence_expression (string) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))

