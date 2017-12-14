==========
Mean recursion test
==========

<?php
function RekTest ($nr) {
	echo " $nr ";
	$j=$nr+1;
	while ($j < 10) {
	  echo " a ";
	  RekTest($j);
	  $j++;
	  echo " b $j ";
	}
	echo "\n";
}

RekTest(0);
?>

---

(program  (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (simple_variable (variable_name (name))) (float)))) (while_statement (binary_expression (simple_variable (variable_name (name))) (integer)) (compound_statement (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (echo_statement (string)))) (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))))
