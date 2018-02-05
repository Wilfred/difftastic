==========
Test / operator : 64bit long tests
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

$otherVals = array(0, 1, -1, 7, 9, 65, -44, MAX_32Bit, MAX_64Bit);

error_reporting(E_ERROR);

foreach ($longVals as $longVal) {
   foreach($otherVals as $otherVal) {
	   echo "--- testing: $longVal / $otherVal ---\n";
      var_dump($longVal/$otherVal);
   }
}

foreach ($otherVals as $otherVal) {
   foreach($longVals as $longVal) {
	   echo "--- testing: $otherVal / $longVal ---\n";
      var_dump($otherVal/$longVal);
   }
}

?>
===DONE===

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (integer))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name))) (array_element_initializer (binary_expression (qualified_name (name)) (qualified_name (name)))) (array_element_initializer (binary_expression (qualified_name (name)) (qualified_name (name)))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (parenthesized_expression (binary_expression (qualified_name (name)) (integer))) (integer))) (array_element_initializer (binary_expression (parenthesized_expression (binary_expression (qualified_name (name)) (integer))) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (binary_expression (qualified_name (name)) (integer)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (unary_op_expression (integer))) (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (integer)) (array_element_initializer (unary_op_expression (integer))) (array_element_initializer (qualified_name (name))) (array_element_initializer (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (variable_name (name)) (variable_name (name)))))))))) (text))

