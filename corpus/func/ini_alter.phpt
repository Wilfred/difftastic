==========
ini_alter() check
==========

<?php
ini_alter('error_reporting', 1);
$var = ini_get('error_reporting');
var_dump($var);
ini_alter('error_reporting', 0);
$var = ini_get('error_reporting');
var_dump($var);
?>

---

 (program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))
