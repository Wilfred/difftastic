==========
ZE2 object cloning, 2
==========

<?php
class test {
	public $p1 = 1;
	public $p2 = 2;
	public $p3;
	public function __clone() {
	}
};

$obj = new test;
$obj->p2 = 'A';
$obj->p3 = 'B';
$copy = clone $obj;
$copy->p3 = 'C';
echo "Object\n";
var_dump($obj);
echo "Clown\n";
var_dump($copy);
echo "Done\n";
?>

---

(program  (class_declaration (name) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (integer)))) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (integer)))) (property_declaration (visibility_modifier) (property_element (variable_name (name)))) (method_declaration (visibility_modifier) (function_definition (name) (formal_parameters) (compound_statement)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (clone_expression (variable_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (string))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)))
