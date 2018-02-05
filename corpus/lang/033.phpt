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

(program  (expression_statement (assignment_expression (variable_name (name)) (integer))) (echo_statement (string)) (if_statement (variable_name (name)) (echo_statement (integer)) (else_clause (echo_statement (integer)))) (if_statement (variable_name (name)) (echo_statement (integer)) (else_clause (echo_statement (integer)))) (echo_statement (string)) (while_statement (binary_expression (variable_name (name)) (integer)) (echo_statement (update_expression (variable_name (name))))) (while_statement (binary_expression (variable_name (name)) (integer)) (echo_statement (update_expression (variable_name (name))))) (echo_statement (string)) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (integer)) (update_expression (variable_name (name))) (echo_statement (variable_name (name)))) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (integer)) (update_expression (variable_name (name))) (echo_statement (variable_name (name)))) (echo_statement (string)) (switch_statement (variable_name (name)) (case_statement (integer) (echo_statement (integer)) (break_statement)) (case_statement (integer) (echo_statement (integer)) (break_statement)) (default_statement (echo_statement (integer)) (break_statement))) (text))

