==========
Testing $argc and $argv handling (GET)
==========

<?php
$argc = $_SERVER['argc'];
$argv = $_SERVER['argv'];

for ($i=0; $i<$argc; $i++) {
	echo "$i: ".$argv[$i]."\n";
}

?>

---

(program
	(expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (string))))
	(expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (string))))
	(for_statement
		(assignment_expression (variable_name (name)) (float))
		(binary_expression (variable_name (name)) (variable_name (name)))
		(update_expression (variable_name (name)))
		(compound_statement
			(echo_statement
				(binary_expression
					(binary_expression
						(string)
							(subscript_expression (dereferencable_expression (variable_name (name))) (variable_name (name))))
					(string))))))
