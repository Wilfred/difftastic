==========
ZE2 An interface method allows additional default arguments
==========

<?php

error_reporting(4095);

interface test {
	public function bar();
}

class foo implements test {

	public function bar($foo = NULL) {
		echo "foo\n";
	}
}

$foo = new foo;
$foo->bar();

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (integer)))) (interface_declaration (name) (method_declaration (visibility_modifier) (name))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name)) (default_argument_specifier (qualified_name (name)))) (compound_statement (echo_statement (string)))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))
