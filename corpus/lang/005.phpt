==========
Simple If/ElseIf/Else Test
==========

<?php
$a=1;

if($a==0) {
	echo "bad";
} elseif($a==3) {
	echo "bad";
} else {
	echo "good";
}
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (integer))) (if_statement (binary_expression (variable_name (name)) (integer)) (compound_statement (echo_statement (string))) (else_if_clause (binary_expression (variable_name (name)) (integer)) (compound_statement (echo_statement (string)))) (else_clause (compound_statement (echo_statement (string))))))
