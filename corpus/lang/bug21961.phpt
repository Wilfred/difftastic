==========
Bug #21961 (get_parent_class() segfault)
==========

<?php

class man
{
	public $name, $bars;
	function __construct()
	{
		$this->name = 'Mr. X';
		$this->bars = array();
	}

	function getdrunk($where)
	{
		$this->bars[] = new bar($where);
	}

	function getName()
	{
		return $this->name;
	}
}

class bar extends man
{
	public $name;

	function __construct($w)
	{
		$this->name = $w;
	}

	function getName()
	{
		return $this->name;
	}

	function whosdrunk()
	{
		$who = get_parent_class($this);
		if($who == NULL)
		{
			return 'nobody';
		}
		return eval("return ".$who.'::getName();');
	}
}

$x = new man;
$x->getdrunk('The old Tavern');
var_dump($x->bars[0]->whosdrunk());
?>

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (string))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (array_creation_expression)))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))) (object_creation_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))) (class_declaration (name) (class_base_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name)))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))) (if_statement (binary_expression (simple_variable (variable_name (name))) (qualified_name (name))) (compound_statement (return_statement (string)))) (return_statement (eval_intrinsic (binary_expression (binary_expression (string) (simple_variable (variable_name (name)))) (string)))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_call_expression (dereferencable_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (float))) (name) (arguments))))))
