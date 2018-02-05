==========
Testing function parameter passing with a return value
==========

<?php
function test ($b) {
	$b++;
	return($b);
}
$a = test(1);
echo $a;
?>

---

 (program  (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (update_expression (variable_name (name)))) (return_statement (parenthesized_expression (variable_name (name)))))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (integer))))) (echo_statement (variable_name (name))))
