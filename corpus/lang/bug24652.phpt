==========
Bug #24652 (broken array_flip())
==========

<?php
  /* This works */
  $f = array('7' => 0);
  var_dump($f);
  var_dump(array_key_exists(7, $f));
  var_dump(array_key_exists('7', $f));

  print "----------\n";
  /* This doesn't */
  $f = array_flip(array('7'));
  var_dump($f);
  var_dump(array_key_exists(7, $f));
  var_dump(array_key_exists('7', $f));
?>

---

(program  (comment) (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (string) (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (float) (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (variable_name (name))))))) (expression_statement (print_intrinsic (string))) (comment) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (array_creation_expression (array_element_initializer (string))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (float) (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (variable_name (name))))))))

