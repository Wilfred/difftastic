==========
Test > operator : max int 64bit range
==========

<?php

define("MAX_64Bit", 9223372036854775807);
define("MAX_32Bit", 2147483647);
define("MIN_64Bit", -9223372036854775807 - 1);
define("MIN_32Bit", -2147483647 - 1);

$validGreaterThan = array (
MAX_32Bit, array(MAX_32Bit - 1, "2147483646", "2147483646.999", 2.147483646e9, 2147483646.9, MIN_32Bit),
-2147483647, array(MIN_32Bit, "-2147483648", "-2147483647.001", -2.1474836471e9, -2147483647.9),
);

$invalidGreaterThan = array (
MAX_32Bit, array(2e33, MAX_32Bit + 1),
MIN_32Bit, array(MIN_32Bit + 1, MAX_32Bit)
);



$failed = false;
// test valid values
for ($i = 0; $i < count($validGreaterThan); $i +=2) {
   $typeToTestVal = $validGreaterThan[$i];
   $compares = $validGreaterThan[$i + 1];
   foreach($compares as $compareVal) {
      if ($typeToTestVal > $compareVal) {
         // do nothing
      }
      else {
         echo "FAILED: '$typeToTestVal' <= '$compareVal'\n";
         $failed = true;
      }
   }
}
// test for invalid values
for ($i = 0; $i < count($invalidGreaterThan); $i +=2) {
   $typeToTestVal = $invalidGreaterThan[$i];
   $compares = $invalidGreaterThan[$i + 1];
   foreach($compares as $compareVal) {
      if ($typeToTestVal > $compareVal) {
         echo "FAILED: '$typeToTestVal' > '$compareVal'\n";
         $failed = true;
      }
   }
}

if ($failed == false) {
   echo "Test Passed\n";
}

?>
===DONE===

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (integer))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (float)) (array_element_initializer (float)) (array_element_initializer (qualified_name (name))))) (array_element_initializer (unary_op_expression (integer))) (array_element_initializer (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (unary_op_expression (float))) (array_element_initializer (unary_op_expression (float)))))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (float)) (array_element_initializer (binary_expression (qualified_name (name)) (integer))))) (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (binary_expression (qualified_name (name)) (integer))) (array_element_initializer (qualified_name (name)))))))) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))) (comment) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (augmented_assignment_expression (variable_name (name)) (integer)) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (variable_name (name)) (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (variable_name (name)) (binary_expression (variable_name (name)) (integer))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (if_statement (binary_expression (variable_name (name)) (variable_name (name))) (compound_statement (comment)) (else_clause (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name))))))))))) (comment) (for_statement (assignment_expression (variable_name (name)) (integer)) (binary_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (augmented_assignment_expression (variable_name (name)) (integer)) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (variable_name (name)) (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (variable_name (name)) (binary_expression (variable_name (name)) (integer))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (if_statement (binary_expression (variable_name (name)) (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))))))))) (if_statement (binary_expression (variable_name (name)) (qualified_name (name))) (compound_statement (echo_statement (string)))) (text))

