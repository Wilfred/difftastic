==========
Switch test 2
==========

<?php

for ($i=0; $i<=5; $i++)
{
  echo "i=$i\n";

  switch($i) {
    case 0:
      echo "In branch 0\n";
      break;
    case 1:
      echo "In branch 1\n";
      break;
    case 2:
      echo "In branch 2\n";
      break;
    case 3:
      echo "In branch 3\n";
      break 2;
    case 4:
      echo "In branch 4\n";
      break;
    default:
      echo "In default\n";
      break;
  }
}
echo "hi\n";
?>

---

(program  (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (float)) (postfix_increment_expression (simple_variable (variable_name (name)))) (compound_statement (echo_statement (string)) (switch_statement (simple_variable (variable_name (name))) (case_statement (float) (echo_statement (string)) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement)) (case_statement (float) (echo_statement (string)) (break_statement (integer))) (case_statement (float) (echo_statement (string)) (break_statement)) (default_statement (echo_statement (string)) (break_statement))))) (echo_statement (string)))
