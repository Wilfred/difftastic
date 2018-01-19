==========
Test standard 'compare' object handler
==========


<?php

echo "Simple test for standard compare object handler\n";

class class1{}

class class2{}

class class3{
	public $aaa;
	private $bbb;
	protected $ccc;
}

class class4 extends class3{
}

class class5 extends class3{
	public $ddd;
	private $eee;
}

// Define a bunch of objects all of which will use standard compare object handler
$obj1 = new class1();
$obj2 = new class2();
$obj3 = new class3();
$obj4 = new class4();
$obj5 = new class5();

echo "\n-- The following compare should return TRUE --\n";
var_dump($obj1 == $obj1);

echo "\n-- All the following compares should return FALSE --\n";
var_dump($obj1 == $obj2);
var_dump($obj1 == $obj3);
var_dump($obj1 == $obj4);
var_dump($obj1 == $obj5);
var_dump($obj4 == $obj3);
var_dump($obj5 == $obj3);

?>
===DONE===

---

(program  (echo_statement (string)) (class_declaration (name)) (class_declaration (name)) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))))) (class_declaration (name) (class_base_clause (qualified_name (name)))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))))) (comment) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))) (text))

