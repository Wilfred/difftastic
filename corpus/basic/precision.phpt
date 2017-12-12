==========
precision setting test
==========

<?php
$v = array(123456789.012345678901234567890, 10/3, 987e100, 10.0000001);

echo "INI".PHP_EOL;
ini_set('precision', -1);
ini_set('serialize_precision', -1);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;


echo "INI".PHP_EOL;
ini_set('precision', 0);
ini_set('serialize_precision', 0);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 9);
ini_set('serialize_precision', 9);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 14);
ini_set('serialize_precision', 14);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 17);
ini_set('serialize_precision', 17);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 25);
ini_set('serialize_precision', 25);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

echo "INI".PHP_EOL;
ini_set('precision', 100);
ini_set('serialize_precision', 100);
echo ini_get('precision'), PHP_EOL;
echo ini_get('serialize_precision'), PHP_EOL;
echo "OUTPUTS".PHP_EOL;
echo join($v, ' ').PHP_EOL;
var_dump(serialize($v));
var_export($v);echo PHP_EOL;

---

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression (array_element_initializer (binary_expression (integer) (integer))) (ERROR) (array_element_initializer (binary_expression (integer) (float))) (array_element_initializer (integer)) (ERROR) (array_element_initializer (binary_expression (integer) (integer)))))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (unary_op_expression (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (unary_op_expression (float))))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name))) (echo_statement (binary_expression (string) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (string))) (qualified_name (name)))) (echo_statement (binary_expression (string) (qualified_name (name)))) (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (string))) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (qualified_name (name)))))
