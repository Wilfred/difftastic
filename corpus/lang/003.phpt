==========
Simple Switch Test
==========

<?php
$a=1;
switch($a) {
	case 0:
		echo "bad";
		break;
	case 1:
		echo "good";
		break;
	default:
		echo "bad";
		break;
}
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (integer))) (switch_statement (variable_name (name)) (case_statement (integer) (echo_statement (string)) (break_statement)) (case_statement (integer) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)) (break_statement))))
