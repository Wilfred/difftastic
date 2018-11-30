==========
Bug #22592 (cascading assignments to strings with curly braces broken)
==========

<?php
function error_hdlr($errno, $errstr) {
	echo "[$errstr]\n";
}

set_error_handler('error_hdlr');

$i = 4;
$s = "string";

$result = "* *-*";
var_dump($result);
$result[6] = '*';
var_dump($result);
$result[1] = $i;
var_dump($result);
$result[3] = $s;
var_dump($result);
$result[7] = 0;
var_dump($result);
$a = $result[1] = $result[3] = '-';
var_dump($result);
$b = $result[3] = $result[5] = $s;
var_dump($result);
$c = $result[0] = $result[2] = $result[4] = $i;
var_dump($result);
$d = $result[6] = $result[8] = 5;
var_dump($result);
$e = $result[1] = $result[6];
var_dump($result);
var_dump($a, $b, $c, $d, $e);
$result[0] = $result[-4] = $result[-1] = 'a';
var_dump($result);
?>

---

(program  (function_definition (name) (formal_parameters (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name)))) (compound_statement (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (assignment_expression (variable_name (name)) (integer))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (assignment_expression (variable_name (name)) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (variable_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (variable_name (name)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (integer))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (assignment_expression (variable_name (name)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (subscript_expression (dereferencable_expression (variable_name (name))) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)) (variable_name (name)) (variable_name (name)) (variable_name (name)) (variable_name (name))))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (integer)) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (unary_op_expression (integer))) (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name))) (unary_op_expression (integer))) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))
