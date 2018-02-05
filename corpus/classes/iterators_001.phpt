==========
ZE2 iterators and foreach
==========

<?php
class c_iter implements Iterator {

	private $obj;
	private $num = 0;

	function __construct($obj) {
		echo __METHOD__ . "\n";
		$this->num = 0;
		$this->obj = $obj;
	}
	function rewind() {
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
}

class c implements IteratorAggregate {

	public $max = 3;

	function getIterator() {
		echo __METHOD__ . "\n";
		return new c_iter($this);
	}
}

echo "===Array===\n";

$a = array(0,1,2);
foreach($a as $v) {
	echo "array:$v\n";
}

echo "===Manual===\n";
$t = new c();
for ($iter = $t->getIterator(); $iter->valid(); $iter->next()) {
	echo $iter->current() . "\n";
}

echo "===foreach/std===\n";
foreach($t as $v) {
	echo "object:$v\n";
}

echo "===foreach/rec===\n";
foreach($t as $v) {
	foreach($t as $w) {
		echo "double:$v:$w\n";
	}
}

echo "===foreach/key===\n";
foreach($t as $i => $v) {
	echo "object:$i=>$v\n";
}

print "Done\n";
exit(0);
?>

---

(program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (integer)))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name))))))) (method_declaration (function_definition (name) (compound_statement))) (method_declaration (function_definition (name) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (member_access_expression (dereferencable_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))) (name))))) (echo_statement (binary_expression (binary_expression (binary_expression (qualified_name (name)) (string)) (parenthesized_expression (conditional_expression (variable_name (name)) (string) (string)))) (string))) (return_statement (variable_name (name)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (expression_statement (update_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (switch_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (case_statement (integer) (return_statement (string))) (case_statement (integer) (return_statement (string))) (case_statement (integer) (return_statement (string))) (default_statement (return_statement (string)))))))) (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (integer)))) (method_declaration (function_definition (name) (compound_statement (echo_statement (binary_expression (qualified_name (name)) (string))) (return_statement (object_creation_expression (qualified_name (name)) (arguments (variable_name (name))))))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (for_statement (assignment_expression (variable_name (name)) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (compound_statement (echo_statement (binary_expression (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments)) (string))))) (echo_statement (string)) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)))) (echo_statement (string)) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)))))) (echo_statement (string)) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (echo_statement (string)))) (expression_statement (print_intrinsic (string))) (expression_statement (exit_intrinsic (integer))))
