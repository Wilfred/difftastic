==========
ZE2 dereferencing of objects from methods
==========

<?php

class Name {
	function __construct($_name) {
		$this->name = $_name;
	}

	function display() {
		echo $this->name . "\n";
	}
}

class Person {
	private $name;

	function __construct($_name, $_address) {
		$this->name = new Name($_name);
	}

	function getName() {
		return $this->name;
	}
}

$person = new Person("John", "New York");
$person->getName()->display();

?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name)))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))))))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (object_creation_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments (string) (string))))) (expression_statement (member_call_expression (dereferencable_expression (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (name) (arguments))))
