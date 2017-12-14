==========
Alternative syntaxes test
==========

<?php
$a = 1;

echo "If: ";
if ($a) echo 1; else echo 0;
if ($a):
	echo 1;
else:
	echo 0;
endif;

echo "\nWhile: ";
while ($a<5) echo $a++;
while ($a<9):
	echo ++$a;
endwhile;

echo "\nFor: ";
for($a=0;$a<5;$a++) echo $a;
for($a=0;$a<5;$a++):
	echo $a;
endfor;

echo "\nSwitch: ";
switch ($a):
	case 0;
		echo 0;
		break;
	case 5:
		echo 1;
		break;
	default;
		echo 0;
		break;
endswitch;
?>

===DONE===

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (echo_statement (string)) (if_statement (simple_variable (variable_name (name))) (echo_statement (float)) (else_clause (echo_statement (float)))) (if_statement (simple_variable (variable_name (name))) (echo_statement (float)) (else_clause (echo_statement (float)))) (echo_statement (string)) (while_statement (binary_expression (simple_variable (variable_name (name))) (float)) (echo_statement (postfix_increment_expression (simple_variable (variable_name (name)))))) (while_statement (binary_expression (simple_variable (variable_name (name))) (float)) (echo_statement (prefix_increment_expression (simple_variable (variable_name (name)))))) (echo_statement (string)) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (float)) (postfix_increment_expression (simple_variable (variable_name (name)))) (echo_statement (simple_variable (variable_name (name))))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (float)) (postfix_increment_expression (simple_variable (variable_name (name)))) (echo_statement (simple_variable (variable_name (name))))) (echo_statement (string)) (switch_statement (simple_variable (variable_name (name))) (case_statement (float) (echo_statement (float)) (break_statement)) (case_statement (float) (echo_statement (float)) (break_statement)) (default_statement (echo_statement (float)) (break_statement))) (text))

