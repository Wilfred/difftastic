==========
Testing do-while loop
==========

<?php
$i=3;
do {
	echo $i;
	$i--;
} while($i>0);
?>

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (do_statement (compound_statement (echo_statement (simple_variable (variable_name (name)))) (expression_statement (postfix_decrement_expression (simple_variable (variable_name (name)))))) (binary_expression (simple_variable (variable_name (name))) (float))))
