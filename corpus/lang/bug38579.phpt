==========
Bug #38579 (include_once() may include the same file twice)
==========

<?php
$file = dirname(__FILE__)."/bug38579.inc";
include_once(strtolower($file));
include_once(strtoupper($file));
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (binary_expression (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)))) (string)))) (expression_statement (include_once_expression (parenthesized_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (expression_statement (include_once_expression (parenthesized_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))

