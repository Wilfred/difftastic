==========
Test N-- operator : 64bit long tests
==========

<?php

define("MAX_64Bit", 9223372036854775807);
define("MAX_32Bit", 2147483647);
define("MIN_64Bit", -9223372036854775807 - 1);
define("MIN_32Bit", -2147483647 - 1);

$longVals = array(
    MAX_64Bit, MIN_64Bit, MAX_32Bit, MIN_32Bit, MAX_64Bit - MAX_32Bit, MIN_64Bit - MIN_32Bit,
    MAX_32Bit + 1, MIN_32Bit - 1, MAX_32Bit * 2, (MAX_32Bit * 2) + 1, (MAX_32Bit * 2) - 1,
    MAX_64Bit -1, MAX_64Bit + 1, MIN_64Bit + 1, MIN_64Bit - 1
);


foreach ($longVals as $longVal) {
   echo "--- testing: $longVal ---\n";
   $longVal--;
   var_dump($longVal);
}

?>
===DONE===

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (float))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (binary_expression (qualified_name (name)) (qualified_name (name)))) (array_element_initializer (binary_expression (qualified_name (name)) (qualified_name (name)))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (binary_expression (qualified_name (name)) (float)) (float))) (array_element_initializer (binary_expression (binary_expression (qualified_name (name)) (float)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (binary_expression (qualified_name (name)) (float)))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (postfix_decrement_expression (simple_variable (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (text))

