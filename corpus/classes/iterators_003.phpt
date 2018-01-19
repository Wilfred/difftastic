==========
ZE2 iterators and break
==========

<?php
class c_iter implements Iterator {

	private $obj;
	private $num = 0;

	function __construct($obj) {
		echo __METHOD__ . "\n";
		$this->obj = $obj;
	}
	function rewind() {
		echo __METHOD__ . "\n";
	}
	function valid() {
		$more = $this->num < $this->obj->max;
		echo __METHOD__ . ' = ' .($more ? 'true' : 'false') . "\n";
		return $more;
	}
	function current() {
		echo __METHOD__ . "\n";
		return $this->num;
	}
	function next() {
		echo __METHOD__ . "\n";
		$this->num++;
	}
	function key() {
		return $this->num;
	}
}

class c implements IteratorAggregate {

	public $max = 4;

	function getIterator() {
		echo __METHOD__ . "\n";
		return new c_iter($this);
	}
}

$t = new c();

foreach($t as $v) {
	if ($v == 0) {
		echo "continue outer\n";
		continue;
	}
	foreach($t as $w) {
		if ($w == 1) {
			echo "continue inner\n";
			continue;
		}
		if ($w == 2) {
			echo "break inner\n";
			break;
		}
		echo "double:$v:$w\n";
	}
	if ($v == 2) {
		echo "break outer\n";
		break;
	}
}

print "Done\n";
?>

---

(program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (float)))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name)))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string)))))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (name))))) (echo_statement (binary_expression (binary_expression (binary_expression (qualified_name (name)) (string)) (conditional_expression (simple_variable (variable_name (name))) (string) (string))) (string))) (return_statement (simple_variable (variable_name (name))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (update_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (float)))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (object_creation_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (string)) (continue_statement))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (string)) (continue_statement))) (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (string)) (break_statement))) (echo_statement (string)))) (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (string)) (break_statement))))) (expression_statement (print_intrinsic (string))))
