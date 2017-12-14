==========
Bug #26866 (segfault when exception raised in __get)
==========

<?php
class bar {
	function get_name() {
		return 'bar';
	}
}
class foo {
	function __get($sName) {
		throw new Exception('Exception!');
		return new bar();
	}
}
$foo = new foo();
try {
	echo $foo->bar->get_name();
}
catch (Exception $E) {
	echo "Exception raised!\n";
}
?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (return_statement (string)))))) (class_declaration (name) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (string)))) (return_statement (object_creation_expression (qualified_name (name)) (arguments))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (try_statement (compound_statement (echo_statement (member_call_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (name) (arguments)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (string))))))

