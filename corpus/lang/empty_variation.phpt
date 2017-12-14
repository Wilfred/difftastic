==========
empty() on array elements
==========

<?php
$a=array('0','empty'=>'0');
var_dump(empty($a['empty']));
var_dump(empty($a[0]));
$b='0';
var_dump(empty($b));
?>

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (intrinsic (empty_intrinsic (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (string))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (intrinsic (empty_intrinsic (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (intrinsic (empty_intrinsic (simple_variable (variable_name (name)))))))))

