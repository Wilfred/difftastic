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

(program  (function_definition (name) (formal_parameters) (compound_statement (if_statement (integer) (compound_statement (return_statement (parenthesized_expression (string))))))) (expression_statement (assignment_expression (variable_name (name)) (integer))) (while_statement (binary_expression (variable_name (name)) (integer)) (compound_statement (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (update_expression (variable_name (name)))))))
