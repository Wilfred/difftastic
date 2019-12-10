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
		$this->num = 0;
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
		echo __METHOD__ . "\n";
		switch($this->num) {
			case 0: return "1st";
			case 1: return "2nd";
			case 2: return "3rd";
			default: return "???";
		}
	}
	function __destruct() {
		echo __METHOD__ . "\n";
	}
}

class c implements IteratorAggregate {

	public $max = 3;

	function getIterator() {
		echo __METHOD__ . "\n";
		return new c_iter($this);
	}
	function __destruct() {
		echo __METHOD__ . "\n";
	}
}

$t = new c();

foreach($t as $k => $v) {
	foreach($t as $w) {
		echo "double:$v:$w\n";
		break;
	}
}

unset($t);

print "Done\n";
?>

---

(program (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (visibility_modifier) (property_element (variable_name (name)))) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (integer)))) (method_declaration (function_definition (name) (formal_parameters (simple_parameter (variable_name (name)))) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (assignment_expression (member_access_expression (variable_name (name)) (name)) (variable_name (name))))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (assignment_expression (member_access_expression (variable_name (name)) (name)) (integer)))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (binary_expression (member_access_expression (variable_name (name)) (name)) (member_access_expression (member_access_expression (variable_name (name)) (name)) (name))))) (echo_statement (binary_expression (binary_expression (binary_expression (qualified_name (name)) (string)) (parenthesized_expression (conditional_expression (variable_name (name)) (string) (string)))) (string))) (return_statement (variable_name (name)))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (member_access_expression (variable_name (name)) (name)))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (update_expression (member_access_expression (variable_name (name)) (name))))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (switch_statement (member_access_expression (variable_name (name)) (name)) (case_statement (integer) (return_statement (string))) (case_statement (integer) (return_statement (string))) (case_statement (integer) (return_statement (string))) (default_statement (return_statement (string))))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (visibility_modifier) (property_element (variable_name (name)) (property_initializer (integer)))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (object_creation_expression (qualified_name (name)) (arguments (variable_name (name)))))))) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)) (break_statement))))) (unset_statement (variable_name (name))) (expression_statement (print_intrinsic (string))))
