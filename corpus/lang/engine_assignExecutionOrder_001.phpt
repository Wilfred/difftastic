==========
Evaluation order during assignments.
==========

<?php

function f() {
	echo "in f()\n";
	return "name";
}

function g() {
	echo "in g()\n";
	return "assigned value";
}


echo "\n\nOrder with local assignment:\n";
${f()} = g();
var_dump($name);

echo "\n\nOrder with array assignment:\n";
$a[f()] = g();
var_dump($a);

echo "\n\nOrder with object property assignment:\n";
$oa = new stdClass;
$oa->${f()} = g();
var_dump($oa);

echo "\n\nOrder with nested object property assignment:\n";
$ob = new stdClass;
$ob->o1 = new stdClass;
$ob->o1->o2 = new stdClass;
$ob->o1->o2->${f()} = g();
var_dump($ob);

echo "\n\nOrder with dim_list property assignment:\n";
$oc = new stdClass;
$oc->a[${f()}] = g();
var_dump($oc);


class C {
	public static $name = "original";
	public static $a = array();
	public static $string = "hello";
}
echo "\n\nOrder with static property assignment:\n";
C::${f()} = g();
var_dump(C::$name);

echo "\n\nOrder with static array property assignment:\n";
C::$a[f()] = g();
var_dump(C::$a);

echo "\n\nOrder with indexed string assignment:\n";
$string = "hello";
function getOffset() {
	echo "in getOffset()\n";
	return 0;
}
function newChar() {
	echo "in newChar()\n";
	return 'j';
}
$string[getOffset()] = newChar();
var_dump($string);

echo "\n\nOrder with static string property assignment:\n";
C::$string[getOffset()] = newChar();
var_dump(C::$string);

?>

---

(program  (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (string)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (string)))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (function_call_expression (qualified_name (name)) (arguments))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (simple_variable (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (name))) (simple_variable (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (simple_variable (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier) (static_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (property_declaration (property_modifier (visibility_modifier) (static_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression)))) (property_declaration (property_modifier (visibility_modifier) (static_modifier)) (property_element (variable_name (name)) (property_initializer (string))))) (echo_statement (string)) (expression_statement (assignment_expression (scoped_property_access_expression (qualified_name (name)) (simple_variable (function_call_expression (qualified_name (name)) (arguments)))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))) (echo_statement (string)) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))) (function_call_expression (qualified_name (name)) (arguments))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (string))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (float)))) (function_definition (name) (compound_statement (echo_statement (string)) (return_statement (string)))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))) (function_call_expression (qualified_name (name)) (arguments))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))))
