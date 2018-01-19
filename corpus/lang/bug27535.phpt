==========
Bug #27535 (Objects pointing to each other cause Apache to crash)
==========

<?php

class Class1
{
	public $_Class2_obj;
}

class Class2
{
	public $storage = '';

	function __construct()
	{
		$this->storage = new Class1();

		$this->storage->_Class2_obj = $this;
	}
}

$foo = new Class2();

?>
Alive!

---

(program  (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name))))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (string)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (name)) (variable_name (name)))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (text))

