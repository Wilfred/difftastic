==========
Testing recursive function
==========

<?php

function Test()
{
	static $a=1;
	echo "$a ";
	$a++;
	if($a<10): Test(); endif;
}

Test();

?>

---

(program (script_section (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (float))) (echo_statement (string)) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (if_statement (binary_expression (simple_variable (variable_name (name))) (integer)) (expression_statement (function_call_expression (qualified_name (name)) (arguments)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments)))))
