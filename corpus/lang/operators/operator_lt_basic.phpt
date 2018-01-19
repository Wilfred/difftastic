==========
Test < operator : different types
==========

<?php
$valid_true = array(1, "1", "true", 1.0, array(1));
$valid_false = array(0, "", 0.0, array(), NULL);

$int1 = 677;
$int2 = -67837;
$valid_int1 = array("678", "678abc", " 678", "678  ", 678.0, 6.789E2, "+678", +678);
$valid_int2 = array("-67836", "-67836abc", " -67836", "-67836  ", -67835.0001, -6.78351E4);
$invalid_int1 = array(676, "676");
$invalid_int2 = array(-67837, "-67837");

$float1 = 57385.45835;
$float2 = -67345.76567;
$valid_float1 = array("57385.45836",  "57385.45836aaa", "  57385.45836", 5.738545836e4);
$valid_float2 = array("-67345.76566", "-67345.76566aaa", "  -67345.76566", -6.734576566E4);
$invalid_float1 = array(57385.45835, 5.738545835e4);
$invalid_float2 = array(-67345.76567, -6.734576567E4);


$toCompare = array(
  false, $valid_true, $valid_false,
  $int1, $valid_int1, $invalid_int1,
  $int2, $valid_int2, $invalid_int2,
  $float1, $valid_float1, $invalid_float1,
  $float2, $valid_float2, $invalid_float2
);

$failed = false;
for ($i = 0; $i < count($toCompare); $i +=3) {
   $typeToTest = $toCompare[$i];
   $valid_compares = $toCompare[$i + 1];
   $invalid_compares = $toCompare[$i + 2];

   foreach($valid_compares as $compareVal) {
      if ($typeToTest < $compareVal) {
         // do nothing
      }
      else {
         echo "FAILED: '$typeToTest' >= '$compareVal'\n";
         $failed = true;
      }
   }

   foreach($invalid_compares as $compareVal) {
      if ($typeToTest < $compareVal) {
         echo "FAILED: '$typeToTest' < '$compareVal'\n";
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

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression (array_element_initializer (float))))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (string)) (array_element_initializer (float)) (array_element_initializer (array_creation_expression)) (array_element_initializer (qualified_name (name)))))) (expression_statement (assignment_expression (variable_name (name)) (integer))) (expression_statement (assignment_expression (variable_name (name)) (unary_op_expression (integer)))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (binary_expression (integer) (float))) (array_element_initializer (float)) (array_element_initializer (string)) (array_element_initializer (unary_op_expression (integer)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (binary_expression (unary_op_expression (integer)) (integer))) (array_element_initializer (unary_op_expression (float)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (unary_op_expression (integer))) (array_element_initializer (string))))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (integer) (integer)))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (unary_op_expression (integer)) (integer)))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (unary_op_expression (float)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (binary_expression (integer) (integer))) (array_element_initializer (float))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (binary_expression (unary_op_expression (integer)) (integer))) (array_element_initializer (unary_op_expression (float)))))) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (qualified_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name))) (array_element_initializer (variable_name (name)))))) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))) (for_statement (assignment_expression (variable_name (name)) (float)) (binary_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (augmented_assignment_expression (variable_name (name)) (float)) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (binary_expression (variable_name (name)) (float))))) (expression_statement (assignment_expression (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (binary_expression (variable_name (name)) (float))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (if_statement (binary_expression (variable_name (name)) (variable_name (name))) (compound_statement (comment)) (else_clause (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name))))))))) (foreach_statement (variable_name (name)) (variable_name (name)) (compound_statement (if_statement (binary_expression (variable_name (name)) (variable_name (name))) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))))))))) (if_statement (binary_expression (variable_name (name)) (qualified_name (name))) (compound_statement (echo_statement (string)))) (text))

