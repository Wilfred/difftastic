==========
Test < operator : max int 32bit range
==========

<?php

define("MAX_64Bit", 9223372036854775807);
define("MAX_32Bit", 2147483647);
define("MIN_64Bit", -9223372036854775807 - 1);
define("MIN_32Bit", -2147483647 - 1);

$validLessThan = array (
2147483646, array(MAX_32Bit, "2147483647", "2147483647.001", 2.147483647e9, 2147483647.9),
MIN_32Bit, array(MIN_32Bit + 1, "-2147483647", "-2147483646.001", -2.1474836461e9, -2147483646.9),
);

$invalidLessThan = array (
MAX_32Bit, array("2147483646", 2.1474836460001e9, MAX_32Bit - 1),
MIN_32Bit, array(MIN_32Bit - 1, "-2147483649", -2.1474836480001e9)
);

$failed = false;
// test for equality
for ($i = 0; $i < count($validLessThan); $i +=2) {
   $typeToTestVal = $validLessThan[$i];
   $compares = $validLessThan[$i + 1];
   foreach($compares as $compareVal) {
      if ($typeToTestVal < $compareVal) {
         // do nothing
      }
      else {
         echo "FAILED: '$typeToTestVal' >= '$compareVal'\n";
         $failed = true;
      }
   }
}
// test for invalid values
for ($i = 0; $i < count($invalidLessThan); $i +=2) {
   $typeToTestVal = $invalidLessThan[$i];
   $compares = $invalidLessThan[$i + 1];
   foreach($compares as $compareVal) {
      if ($typeToTestVal < $compareVal) {
         echo "FAILED: '$typeToTestVal' < '$compareVal'\n";
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

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (unary_op_expression (integer)) (float))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (float)) (array_element_initializer (binary_expression (integer) (float))))) (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (unary_op_expression (float))) (array_element_initializer (binary_expression (unary_op_expression (integer)) (float)))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (string)) (array_element_initializer (float)) (array_element_initializer (binary_expression (qualified_name (name)) (float))))) (array_element_initializer (qualified_name (name))) (array_element_initializer (array_creation_expression (array_element_initializer (binary_expression (qualified_name (name)) (float))) (array_element_initializer (string)) (array_element_initializer (unary_op_expression (float)))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (qualified_name (name)))) (comment) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (assignment_expression (simple_variable (variable_name (name))) (float)) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (binary_expression (simple_variable (variable_name (name))) (float))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (compound_statement (comment)) (else_clause (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (qualified_name (name))))))))))) (comment) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (assignment_expression (simple_variable (variable_name (name))) (float)) (compound_statement (expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (binary_expression (simple_variable (variable_name (name))) (float))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (if_statement (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (qualified_name (name)))))))))) (if_statement (binary_expression (simple_variable (variable_name (name))) (qualified_name (name))) (compound_statement (echo_statement (string)))) (text))

