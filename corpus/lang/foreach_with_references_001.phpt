==========
foreach() with references
==========

<?php

$arr = array(1 => "one", 2 => "two", 3 => "three");

foreach($arr as $key => $val) {
	$val = $key;
}

print_r($arr);

foreach($arr as $key => &$val) {
	$val = $key;
}

print_r($arr);


---

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer) (string)) (array_element_initializer (integer) (string)) (array_element_initializer (integer) (string))))) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name))) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

