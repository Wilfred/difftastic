==========
ZE2 object cloning, 3
==========

<?php
class base {
	protected $p1 = 'base:1';
	public $p2 = 'base:2';
	public $p3 = 'base:3';
	public $p4 = 'base:4';
	public $p5 = 'base:5';
	private $p6 = 'base:6';
	public function __clone() {
	}
};

class test extends base {
	public $p1 = 'test:1';
	public $p3 = 'test:3';
	public $p4 = 'test:4';
	public $p5 = 'test:5';
	public function __clone() {
		$this->p5 = 'clone:5';
	}
}

$obj = new test;
$obj->p4 = 'A';
$copy = clone $obj;
echo "Object\n";
print_r($obj);
echo "Clown\n";
print_r($copy);
echo "Done\n";
?>

---

(program (script_section (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement)))) (ERROR) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (clone_expression (simple_variable (variable_name (name)))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string))))
