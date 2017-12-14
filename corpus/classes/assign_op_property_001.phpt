==========
ZE2 assign_op property of overloaded object
==========

<?php

class Test {
	private $real_a = 2;

	function __set($property, $value) {
	  if ($property == "a") {
	    $this->real_a = $value;
	  }
	}

	function __get($property) {
	  if ($property == "a") {
	    return $this->real_a;
	  }
	}
}

$obj = new Test;
var_dump($obj->a);
$obj->a += 2;
var_dump($obj->a);
echo "---Done---\n";
?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (float)))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (string)) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name)))))))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (string)) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (float))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))) (echo_statement (string)))
