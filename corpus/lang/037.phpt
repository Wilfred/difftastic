==========
'Static' binding for private variables
==========

<?php

class par {
	private $id="foo";

	function displayMe()
	{
		$this->displayChild();
	}
};

class chld extends par {
	private $id = "bar";

	function displayChild()
	{
		print $this->id;
	}
};


$obj = new chld();
$obj->displayMe();

?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (print_intrinsic (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))

