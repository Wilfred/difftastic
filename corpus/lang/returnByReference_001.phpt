==========
Returning a reference from a function
==========

<?php

function &returnByRef(&$arg1)
{
	return $arg1;
}

$a = 7;
$b =& returnByRef($a);
var_dump($b);
$a++;
var_dump($b);

?>

---

(program
  (function_definition
    (name)
    (formal_parameters
      (simple_parameter
        (variable_name
          (name))))
    (compound_statement
      (return_statement
        (variable_name
          (name)))))
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (integer)))
  (expression_statement
    (assignment_expression
      (variable_name
        (name))
      (function_call_expression
        (qualified_name
          (name))
        (arguments
          (variable_name
            (name))))))
  (expression_statement
    (function_call_expression
      (qualified_name
        (name))
      (arguments
        (variable_name
          (name)))))
  (expression_statement
    (update_expression
      (variable_name
        (name))))
  (expression_statement
    (function_call_expression
      (qualified_name
        (name))
      (arguments
        (variable_name
          (name))))))
