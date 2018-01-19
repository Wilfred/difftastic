==========
ZE2 ArrayAccess and [] assignment
==========

<?php

class OverloadedArray implements ArrayAccess {
	public $realArray;

	function __construct() {
		$this->realArray = array();
	}

	function offsetExists($index) {
		return array_key_exists($this->realArray, $index);
	}

	function offsetGet($index) {
		return $this->realArray[$index];
	}

	function offsetSet($index, $value) {
		if (is_null($index)) {
			$this->realArray[] = $value;
		} else {
			$this->realArray[$index] = $value;
		}
	}

	function offsetUnset($index) {
		unset($this->realArray[$index]);
	}

	function dump() {
		var_dump($this->realArray);
	}
}

$a = new OverloadedArray;
$a[] = 1;
$a[1] = 2;
$a[2] = 3;
$a[] = 4;
$a->dump();
?>
===DONE===

---

(program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (array_creation_expression)))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name)))))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (return_statement (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (variable_name (name))))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (if_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))) (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)))) (variable_name (name))))) (else_clause (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (variable_name (name))) (variable_name (name)))))))))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (unset_statement (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (variable_name (name))))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name)))) (float))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (float))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (float))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name)))) (float))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (text))
