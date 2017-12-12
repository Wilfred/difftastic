==========
ZE2 object references
==========

<?php

class Foo {
	public $name;

	function __construct() {
		$this->name = "I'm Foo!\n";
	}
}

$foo = new Foo;
echo $foo->name;
$bar = $foo;
$bar->name = "I'm Bar!\n";

// In ZE1, we would expect "I'm Foo!"
echo $foo->name;

?>

---

(program (script_section (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (echo_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (comment) (echo_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))
