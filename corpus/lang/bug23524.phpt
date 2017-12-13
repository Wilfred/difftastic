==========
Bug #23524 (Improper handling of constants in array indices)
==========

<?php
  echo "Begin\n";
  define("THE_CONST",123);
  function f($a=array(THE_CONST=>THE_CONST)) {
    print_r($a);
  }
  f();
  f();
  f();
  echo "Done";
?>

---

(program (script_section (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (function_definition (name) (simple_parameter (variable_name (name)) (default_argument_specifier (array_creation_expression (array_element_initializer (qualified_name (name)) (qualified_name (name)))))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string))))
