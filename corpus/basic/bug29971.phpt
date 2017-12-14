==========
Bug #29971 (variables_order behaviour)
==========

<?php
var_dump($_ENV,$_SERVER);
var_dump(ini_get("variables_order"));
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))))
