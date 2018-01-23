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

(program  (function_definition (name) (compound_statement (if_statement (float) (compound_statement (return_statement (parenthesized_expression (string))))))) (expression_statement (assignment_expression (variable_name (name)) (float))) (while_statement (binary_expression (variable_name (name)) (float)) (compound_statement (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (update_expression (variable_name (name)))))))
