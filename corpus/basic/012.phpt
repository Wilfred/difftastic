==========
Testing $argc and $argv handling (cli)
==========

<?php
$argc = $_SERVER['argc'];
$argv = $_SERVER['argv'];

for ($i=1; $i<$argc; $i++) {
	echo ($i-1).": ".$argv[$i]."\n";
}

?>

---

(program
	(expression_statement
		(assignment_expression
			(variable_name (name))
			(subscript_expression (dereferencable_expression (variable_name (name))) (string))))
	(expression_statement
		(assignment_expression
			(variable_name (name))
			(subscript_expression (dereferencable_expression (variable_name (name))) (string))))
	(for_statement
		(assignment_expression (variable_name (name)) (integer))
		(binary_expression (variable_name (name)) (variable_name (name)))
		(update_expression (variable_name (name)))
		(compound_statement
			(echo_statement
				(binary_expression (binary_expression (binary_expression (parenthesized_expression (binary_expression (variable_name (name)) (integer))) (string)) (subscript_expression (dereferencable_expression (variable_name (name))) (variable_name (name)))) (string))))))
