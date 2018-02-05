==========
Comparisons with NAN should yield false, even at compile-time
==========

<?php

echo "** CONST\n";
var_dump(0 < NAN);
var_dump(0 <= NAN);
var_dump(0 > NAN);
var_dump(0 >= NAN);

echo "** VAR\n";
$nan = NAN;
var_dump(0 < $nan);
var_dump(0 <= $nan);
var_dump(0 > $nan);
var_dump(0 >= $nan);


---

(program  (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (qualified_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (qualified_name (name)))))) (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (qualified_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (integer) (variable_name (name)))))))

