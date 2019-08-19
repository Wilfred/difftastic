==========
Simple foreach loop
==========


<?php

$a = array("a","b","c");

foreach ($a as $v) {
	var_dump($v);
}

?>
---
(program
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (array_creation_expression
        (array_element_initializer
          (string))
        (array_element_initializer
          (string))
        (array_element_initializer
          (string)))))
  (foreach_statement
    (variable_name
      (name))
    (variable_name
      (name))
    (compound_statement
      (expression_statement
        (function_call_expression
          (qualified_name
            (name))
          (arguments
            (variable_name
              (name))))))))
