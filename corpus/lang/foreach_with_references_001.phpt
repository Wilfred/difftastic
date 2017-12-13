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

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (float) (string)) (array_element_initializer (float) (string)) (array_element_initializer (float) (string))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))

