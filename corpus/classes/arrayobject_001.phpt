==========
Ensure that ArrayObject acts like an array
==========

<?php

$a = new ArrayObject;
$a['foo'] = 'bar';
echo reset($a);
echo count($a);
echo current($a);
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (string)) (string))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))
