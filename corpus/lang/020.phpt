==========
Switch test 1
==========

<?php

$i="abc";

for ($j=0; $j<10; $j++) {
switch (1) {
  case 1:
  	echo "In branch 1\n";
  	switch ($i) {
  		case "ab":
  			echo "This doesn't work... :(\n";
  			break;
  		case "abcd":
  			echo "This works!\n";
  			break;
  		case "blah":
  			echo "Hmmm, no worki\n";
  			break;
  		default:
  			echo "Inner default...\n";
  	}
  	for ($blah=0; $blah<200; $blah++) {
  	  if ($blah==100) {
  	    echo "blah=$blah\n";
  	  }
  	}
  	break;
  case 2:
  	echo "In branch 2\n";
  	break;
  case $i:
  	echo "In branch \$i\n";
  	break;
  case 4:
  	echo "In branch 4\n";
  	break;
  default:
  	echo "Hi, I'm default\n";
  	break;
 }
}
?>

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (switch_statement (float) (case_statement (float) (echo_statement (string)) (switch_statement (simple_variable (variable_name (name))) (case_statement (string) (echo_statement (string)) (break_statement)) (case_statement (string) (echo_statement (string)) (break_statement)) (case_statement (string) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (update_expression (simple_variable (variable_name (name)))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (integer)) (compound_statement (echo_statement (string)))))) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement)) (case_statement (simple_variable (variable_name (name))) (echo_statement (string)) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)) (break_statement))))))
