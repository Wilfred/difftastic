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

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (integer))) (foreach_statement (variable_name (name)) (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (compound_statement (echo_statement (binary_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (string))))) (text))

