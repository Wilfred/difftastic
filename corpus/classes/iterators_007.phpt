==========
ZE2 iterators and exceptions
==========

<?php
class Test implements Iterator
{
	public $arr = array(1, 2, 3);
	public $x = 0;

	public function rewind()    { if ($this->x == 0) throw new Exception(__METHOD__); reset($this->arr); }
	public function current()   { if ($this->x == 1) throw new Exception(__METHOD__); return current($this->arr); }
	public function key()       { if ($this->x == 2) throw new Exception(__METHOD__); return key($this->arr); }
	public function next()      { if ($this->x == 3) throw new Exception(__METHOD__); next($this->arr); }
	public function valid()     { if ($this->x == 4) throw new Exception(__METHOD__); return (key($this->arr) !== NULL); }
}

$t = new Test();

while($t->x < 5)
{
	try
	{
	    foreach($t as $k => $v)
	    {
	        echo "Current\n";
	    }
	}
	catch(Exception $e)
	{
	    echo "Caught in " . $e->getMessage() . "()\n";
	}
	$t->x++;
}
?>
===DONE===

---

(program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer)))))) (property_declaration (property_modifier (visibility_modifier)) (property_element (variable_name (name)) (property_initializer (integer)))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (return_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (return_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (compound_statement (if_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))) (return_statement (parenthesized_expression (binary_expression (function_call_expression (qualified_name (name)) (arguments (member_access_expression (dereferencable_expression (variable_name (name))) (name)))) (qualified_name (name))))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (while_statement (binary_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer)) (compound_statement (try_statement (compound_statement (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (echo_statement (string))))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (expression_statement (update_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (text))
