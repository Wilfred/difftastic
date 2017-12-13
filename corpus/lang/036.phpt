==========
Child public element should not override parent private element in parent methods
==========

<?php
class par {
	private $id = "foo";

	function displayMe()
	{
		print $this->id;
	}
};

class chld extends par {
	public $id = "bar";
	function displayHim()
	{
		parent::displayMe();
	}
};


$obj = new chld();
$obj->displayHim();
?>

---

(program (script_section (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (intrinsic (print_intrinsic (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (scoped_call_expression (relative_scope) (name) (arguments))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))

