==========
ZE2 ArrayAccess and exceptions
==========

<?php

class Test implements ArrayAccess
{
        public function offsetExists($offset)      { throw new Exception(__METHOD__); return false; }
        public function offsetGet($offset)         { throw new Exception(__METHOD__); return $offset; }
        public function offsetSet($offset, $data ) { throw new Exception(__METHOD__); }
        public function offsetUnset($offset)       { throw new Exception(__METHOD__); }
}

$t = new Test;

try
{
	echo isset($t[0]);
}
catch(Exception $e)
{
    echo "Caught in " . $e->getMessage() . "()\n";
}

try
{
	echo $t[0];
}
catch(Exception $e)
{
    echo "Caught in " . $e->getMessage() . "()\n";
}

try
{
	$t[0] = 1;
}
catch(Exception $e)
{
    echo "Caught in " . $e->getMessage() . "()\n";
}

try
{
	unset($t[0]);
}
catch(Exception $e)
{
    echo "Caught in " . $e->getMessage() . "()\n";
}
?>
===DONE===

---

 (program  (class_declaration (name) (class_interface_clause (qualified_name (name))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name))))) (return_statement (qualified_name (name)))))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name))))) (return_statement (variable_name (name)))))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name)))))))) (method_declaration (visibility_modifier) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (qualified_name (name))))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (try_statement (compound_statement (echo_statement (isset_intrinsic (subscript_expression (dereferencable_expression (variable_name (name))) (integer))))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (try_statement (compound_statement (echo_statement (subscript_expression (dereferencable_expression (variable_name (name))) (integer)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (try_statement (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (integer)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (try_statement (compound_statement (unset_statement (subscript_expression (dereferencable_expression (variable_name (name))) (integer)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (text))
