==========
Regression test
==========

PHP Regression Test

<?php

include("023-1.inc");

$wedding_timestamp = mktime(20,0,0,8,31,1997);
$time_left=$wedding_timestamp-time();

if ($time_left>0) {
  $days = $time_left/(24*3600);
  $time_left -= $days*24*3600;
  $hours = $time_left/3600;
  $time_left -= $hours*3600;
  $minutes = $time_left/60;
  echo "Limor Ullmann is getting married on ".($wedding_date=date("l, F dS, Y",$wedding_timestamp)).",\nwhich is $days days, $hours hours and $minutes minutes from now.\n";
  echo "Her hashed wedding date is $wedding_date.\n";
} else {
  echo "Limor Ullmann is now Limor Baruch :I\n";
}
?>

---

 (program (text)  (expression_statement (include_expression (string))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (integer) (float) (float) (float) (integer) (integer))))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments))))) (if_statement (binary_expression (variable_name (name)) (float)) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (binary_expression (variable_name (name)) (binary_expression (integer) (integer))))) (expression_statement (augmented_assignment_expression (variable_name (name)) (binary_expression (binary_expression (variable_name (name)) (integer)) (integer)))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (variable_name (name)) (integer)))) (expression_statement (augmented_assignment_expression (variable_name (name)) (binary_expression (variable_name (name)) (integer)))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (variable_name (name)) (integer)))) (echo_statement (binary_expression (binary_expression (string) (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (string) (variable_name (name)))))) (string))) (echo_statement (string))) (else_clause (compound_statement (echo_statement (string))))))
