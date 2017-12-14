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
	(expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string))))
	(expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string))))
	(for_statement
		(assignment_expression (simple_variable (variable_name (name))) (float))
		(binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name))))
		(postfix_increment_expression (simple_variable (variable_name (name))))
		(compound_statement
			(echo_statement
				(binary_expression
					(binary_expression
						(string)
							(subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))
					(string))))))
