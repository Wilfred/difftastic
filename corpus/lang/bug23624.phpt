==========
Bug #23624 (foreach leaves current array key as null)
==========

<?php
    $arr = array ('one', 'two', 'three');
    var_dump(current($arr));
    foreach($arr as $key => $value);
    var_dump(current($arr));
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (foreach_statement (variable_name (name)) (pair (variable_name (name)) (variable_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))
