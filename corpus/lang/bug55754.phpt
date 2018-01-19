==========
Bug #55754 (Only variables should be passed by reference for ZEND_SEND_PREFER_REF params)
==========

<?php

current($arr = array(0 => "a"));
current(array(0 => "a"));
current($arr);

echo "DONE";

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float) (string))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (float) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)))

