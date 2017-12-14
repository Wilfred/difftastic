==========
Testing array shortcut and bracket operator
==========

<?php
$a = [1, 2, 3, 4, 5];
print_r([$a[1], $a[3]]);
?>

---

(program  (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float))) (array_element_initializer (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float))))))))

