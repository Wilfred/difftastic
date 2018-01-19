==========
Bug #30862 (Static array with boolean indexes)
==========

<?php
class T {
	static $a = array(false=>"false", true=>"true");
}
print_r(T::$a);
?>

<?php
define("X",0);
define("Y",1);
class T2 {
	static $a = array(X=>"false", Y=>"true");
}
print_r(T2::$a);
?>

---

(program (class_declaration (name) (property_declaration (property_modifier (static_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (qualified_name (name)) (string)) (array_element_initializer (qualified_name (name)) (string))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))) (text_interpolation) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (class_declaration (name) (property_declaration (property_modifier (static_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (qualified_name (name)) (string)) (array_element_initializer (qualified_name (name)) (string))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (scoped_property_access_expression (qualified_name (name)) (variable_name (name)))))))

