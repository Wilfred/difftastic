==========
ZE2 interfaces
==========

<?php

interface ThrowableInterface {
	public function getMessage();
}

class Exception_foo implements ThrowableInterface {
	public $foo = "foo";

	public function getMessage() {
		return $this->foo;
	}
}

$foo = new Exception_foo;
echo $foo->getMessage() . "\n";

?>

---

(program  (interface_declaration (name) (method_declaration (visibility_modifier) (name) (formal_parameters))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (echo_statement (binary_expression (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (string))))
