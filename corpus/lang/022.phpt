==========
Switch test 3
==========

<?php

function switchtest ($i, $j)
{
	switch ($i) {
		case 0:
				switch($j) {
					case 0:
						echo "zero";
						break;
					case 1:
						echo "one";
						break;
					default:
						echo $j;
						break;
				}
				echo "\n";
				break;
		default:
				echo "Default taken\n";
	}
}
for ($i=0; $i<3; $i++) {
  for ($k=0; $k<10; $k++) {
    switchtest (0,$k);
  }
}
?>

---

(program  (function_definition (name) (formal_parameters (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name)))) (compound_statement (switch_statement (variable_name (name)) (case_statement (integer) (switch_statement (variable_name (name)) (case_statement (integer) (echo_statement (string)) (break_statement)) (case_statement (integer) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (variable_name (name))) (break_statement))) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)))))) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (integer)) (update_expression (variable_name (name))) (compound_statement (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (integer)) (update_expression (variable_name (name))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (integer) (variable_name (name))))))))))
