==========
Multiple declarations of the same static variable
==========

<?php

$a = 5;

var_dump($a);

static $a = 10;
static $a = 11;

var_dump($a);

function foo() {
	static $a = 13;
	static $a = 14;

	var_dump($a);
}

foo();

?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (float))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (function_static_declaration (static_variable_declaration (variable_name (name)) (integer))) (function_static_declaration (static_variable_declaration (variable_name (name)) (integer))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (integer))) (function_static_declaration (static_variable_declaration (variable_name (name)) (integer))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))

