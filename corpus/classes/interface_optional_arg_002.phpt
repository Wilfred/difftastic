==========
default argument value in interface implementation
==========

<?php

interface test {
	public function bar();
}

class foo implements test {

	public function bar($arg = 2) {
		var_dump($arg);
	}
}

$foo = new foo;
$foo->bar();

?>

---

(program  (interface_declaration (name) (method_declaration (visibility_modifier) (name) (formal_parameters))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters (simple_parameter (variable_name (name)) (default_argument_specifier (integer)))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))
