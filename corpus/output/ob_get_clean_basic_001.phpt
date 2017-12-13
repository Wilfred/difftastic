==========
Test return type and value, as well as basic behaviour, of ob_get_clean()
==========

<?php
/*
 * proto bool ob_get_clean(void)
 * Function is implemented in main/output.c
*/

var_dump(ob_get_clean());

ob_start();
echo "Hello World";
var_dump(ob_get_clean());
?>

---

(program (script_section (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments)))))))
