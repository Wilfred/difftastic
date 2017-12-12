==========
Testing stack after early function return
==========

<?php
function F () {
	if(1) {
		return("Hello");
	}
}

$i=0;
while ($i<2) {
	echo F();
	$i++;
}
?>

---

(program (script_section (function_definition (name) (compound_statement (if_statement (float) (compound_statement (return_statement (string)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (while_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name)))))))))
