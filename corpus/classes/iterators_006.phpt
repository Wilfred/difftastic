==========
ZE2 iterators and array wrapping
==========

<?php

class ai implements Iterator {

	private $array;

	function __construct() {
		$this->array = array('foo', 'bar', 'baz');
	}

	function rewind() {
		reset($this->array);
		$this->next();
	}

	function valid() {
		return $this->key !== NULL;
	}

	function key() {
		return $this->key;
	}

	function current() {
		return $this->current;
	}

	function next() {
        $this->key = key($this->array);
        $this->current = current($this->array);
        next($this->array);
	}
}

class a implements IteratorAggregate {

	public function getIterator() {
		return new ai();
	}
}

$array = new a();

foreach ($array as $property => $value) {
	print "$property: $value\n";
}

#$array = $array->getIterator();
#$array->rewind();
#$array->valid();
#var_dump($array->key());
#var_dump($array->current());
echo "===2nd===\n";

$array = new ai();

foreach ($array as $property => $value) {
	print "$property: $value\n";
}

echo "===3rd===\n";

foreach ($array as $property => $value) {
	print "$property: $value\n";
}

?>
===DONE===

---

(program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)))))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))) (expression_statement (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))) (method_declaration (function_definition (name) (compound_statement (return_statement (binary_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (qualified_name (name))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (return_statement (object_creation_expression (qualified_name (name)) (arguments))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (expression_statement (intrinsic (print_intrinsic (string)))))) (comment) (comment) (comment) (comment) (comment) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (expression_statement (intrinsic (print_intrinsic (string)))))) (echo_statement (string)) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (expression_statement (intrinsic (print_intrinsic (string)))))) (text))

