==========
ZE2 __call()
==========

<?php

class Caller {
	public $x = array(1, 2, 3);

	function __call($m, $a) {
		echo "Method $m called:\n";
		var_dump($a);
		return $this->x;
	}
}

$foo = new Caller();
$a = $foo->test(1, '2', 3.4, true);
var_dump($a);

?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer)))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (variable_name (name)) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments (integer) (string) (float) (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))
