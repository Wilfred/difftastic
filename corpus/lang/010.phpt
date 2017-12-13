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

 (program (script_section (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (return_statement (simple_variable (variable_name (name)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (float))))) (echo_statement (simple_variable (variable_name (name))))))
