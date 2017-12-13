==========
Test % operator : various numbers as strings
==========

<?php

$strVals = array(
   "0","65","-44", "1.2", "-7.7", "abc", "123abc", "123e5", "123e5xyz", " 123abc", "123 abc", "123abc ", "3.4a",
   "a5.9"
);

error_reporting(E_ERROR);

foreach ($strVals as $strVal) {
   foreach($strVals as $otherVal) {
	  echo "--- testing: '$strVal' % '$otherVal' ---\n";
      try {
        var_dump($strVal%$otherVal);
      } catch (DivisionByZeroError $e) {
        echo "Exception: " . $e->getMessage() . "\n";
      }
   }
}


?>
===DONE===

---

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string)) (array_element_initializer (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))) (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (foreach_statement (simple_variable (variable_name (name))) (simple_variable (variable_name (name))) (compound_statement (echo_statement (string)) (try_statement (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (simple_variable (variable_name (name))) (simple_variable (variable_name (name)))))))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments))) (string))))))))))) (text))

