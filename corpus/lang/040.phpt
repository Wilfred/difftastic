==========
foreach into array
==========

<?php
$a = array(0,1);
$b[0]=2;
foreach($a as $b[0]) {
  echo $b[0]."\n";
}
?>
===DONE===

---

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (float)) (array_element_initializer (float))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (float))) (foreach_statement (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (compound_statement (echo_statement (binary_expression (subscript_expression (dereferencable_expression (variable_name (name))) (float)) (string))))) (text))

