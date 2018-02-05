==========
Bug #25652 (Calling Global functions dynamically fails from Class scope)
==========

<?php

	function testfunc ($var) {
		echo "testfunc $var\n";
	}

	class foo {
		public $arr = array('testfunc');
		function bar () {
			$this->arr[0]('testvalue');
		}
	}

	$a = new foo ();
	$a->bar ();

?>

---

(program  (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)))) (class_declaration (name) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (string)))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (function_call_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (integer)) (arguments (string)))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))))

