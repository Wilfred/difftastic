==========
PHP encoding setting test
==========

<?php
var_dump(ini_get('default_charset'));
var_dump(ini_get('input_encoding'));
var_dump(ini_get('internal_encoding'));
var_dump(ini_get('output_encoding'));

var_dump(ini_set('default_charset', 'ISO-8859-1'));
var_dump(ini_get('default_charset'));
var_dump(ini_get('input_encoding'));
var_dump(ini_get('internal_encoding'));
var_dump(ini_get('output_encoding'));

var_dump(ini_set('input_encoding', 'EUC-JP'));
var_dump(ini_set('internal_encoding', 'EUC-JP'));
var_dump(ini_set('output_encoding', 'EUC-JP'));
var_dump(ini_get('input_encoding'));
var_dump(ini_get('internal_encoding'));
var_dump(ini_get('output_encoding'));


---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string))))))))
