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

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (switch_statement (simple_variable (variable_name (name))) (case_statement (float) (echo_statement (string)) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)) (break_statement)))))
