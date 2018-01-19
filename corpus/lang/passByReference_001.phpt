==========
passing of function parameters by reference
==========

<?php
function f($arg1, &$arg2)
{
	var_dump($arg1++);
	var_dump($arg2++);
}

function g (&$arg1, &$arg2)
{
	var_dump($arg1);
	var_dump($arg2);
}
$a = 7;
$b = 15;

f($a, $b);

var_dump($a);
var_dump($b);

$c=array(1);
g($c,$c[0]);

?>

---

(program  (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (update_expression (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (update_expression (variable_name (name)))))))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (expression_statement (assignment_expression (variable_name (name)) (float))) (expression_statement (assignment_expression (variable_name (name)) (integer))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)) (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (float))))))

