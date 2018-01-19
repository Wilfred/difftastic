==========
enable_post_data_reading: using multiple input streams
==========

<?php
echo "Test\n";

$f1 = fopen("php://input", "r");
$f2 = fopen("php://input", "r");

while (!feof($f1) && !feof($f2)) {
	echo fgetc($f1), fgetc($f2);
}

?>

Done

---

(program  (echo_statement (string)) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (string) (string))))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (string) (string))))) (while_statement (binary_expression (unary_op_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (unary_op_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))))) (compound_statement (echo_statement (sequence_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))) (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))))))) (text))
