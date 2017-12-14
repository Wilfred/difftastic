==========
Simple If/Else Test
==========

<?php
$a=1;
if($a==0) {
	echo "bad";
} else {
	echo "good";
}
?>

---

(program (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (if_statement (binary_expression (simple_variable (variable_name (name))) (float)) (compound_statement (echo_statement (string))) (else_clause (compound_statement (echo_statement (string))))))
