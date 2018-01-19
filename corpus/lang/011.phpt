==========
Testing nested functions
==========

<?php
function F()
{
	$a = "Hello ";
	return($a);
}

function G()
{
  static $myvar = 4;

  echo "$myvar ";
  echo F();
  echo "$myvar";
}

G();
?>

---

(program  (function_definition (name) (compound_statement (expression_statement (assignment_expression (variable_name (name)) (string))) (return_statement (variable_name (name))))) (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (float))) (echo_statement (string)) (echo_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))
