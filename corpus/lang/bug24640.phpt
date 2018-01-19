==========
Bug #24640 (var_export and var_dump can't output large float)
==========

<?php
function test($v)
{
	echo var_export($v, true) . "\n";
	var_dump($v);
	echo "$v\n";
	print_r($v);
	echo "\n------\n";
}

test(1.7e+300);
test(1.7e-300);
test(1.7e+79);
test(1.7e-79);
test(1.7e+80);
test(1.7e-80);
test(1.7e+81);
test(1.7e-81);
test(1.7e+319);
test(1.7e-319);
test(1.7e+320);
test(1.7e-320);
test(1.7e+321);
test(1.7e-321);
test(1.7e+324);
test(1.7e-324);
test(1.7e+1000);
test(1.7e-1000);

?>
===DONE===
<?php exit(0); ?>

---

(program (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (echo_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))) (qualified_name (name)))) (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (text_interpolation) (expression_statement (exit_intrinsic (float))))
