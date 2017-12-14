==========
Output buffering tests
==========

<?php
ob_start();
echo ob_get_level();
echo 'A';
  ob_start();
  echo ob_get_level();
  echo 'B';
  $b = ob_get_contents();
  ob_end_clean();
$a = ob_get_contents();
ob_end_clean();

var_dump( $b ); // 2B
var_dump( $a ); // 1A
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (comment))
