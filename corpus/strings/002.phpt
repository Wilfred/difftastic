==========
Formatted print functions
==========

<?php
error_reporting(0);

$fp = fopen("php://stdout", "w") or die("Arrggsgg!!");
$x = fprintf($fp, "fprintf test 1:%.5s", "abcdefghij");
echo "\n";
var_dump($x);

printf("printf test 1:%s\n", "simple string");
printf("printf test 2:%d\n", 42);
printf("printf test 3:%f\n", 10.0/3);
printf("printf test 4:%.10f\n", 10.0/3);
printf("printf test 5:%-10.2f\n", 2.5);
printf("printf test 6:%-010.2f\n", 2.5);
printf("printf test 7:%010.2f\n", 2.5);
printf("printf test 8:<%20s>\n", "foo");
printf("printf test 9:<%-20s>\n", "bar");
printf("printf test 10: 123456789012345\n");
printf("printf test 10:<%15s>\n", "h�yesterettsjustitiarius");
printf("printf test 11: 123456789012345678901234567890\n");
printf("printf test 11:<%30s>\n", "h�yesterettsjustitiarius");
printf("printf test 12:%5.2f\n", -12.34);
printf("printf test 13:%5d\n", -12);
printf("printf test 14:%c\n", 64);
printf("printf test 15:%b\n", 170);
printf("printf test 16:%x\n", 170);
printf("printf test 17:%X\n", 170);
printf("printf test 18:%16b\n", 170);
printf("printf test 19:%16x\n", 170);
printf("printf test 20:%16X\n", 170);
printf("printf test 21:%016b\n", 170);
printf("printf test 22:%016x\n", 170);
printf("printf test 23:%016X\n", 170);
printf("printf test 24:%.5s\n", "abcdefghij");
printf("printf test 25:%-2s\n", "gazonk");
printf("printf test 26:%2\$d %1\$d\n", 1, 2);
printf("printf test 27:%3\$d %d %d\n", 1, 2, 3);
printf("printf test 28:%2\$02d %1\$2d\n", 1, 2);
printf("printf test 29:%2\$-2d %1\$2d\n", 1, 2);
print("printf test 30:"); printf("%0\$s", 1); print("x\n");
vprintf("vprintf test 1:%2\$-2d %1\$2d\n", array(1, 2));


?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (integer)))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (function_call_expression (qualified_name (name)) (arguments (string) (string))) (exit_intrinsic (string))))) (expression_statement (assignment_expression (variable_name (name)) (function_call_expression (qualified_name (name)) (arguments (variable_name (name)) (string) (string))))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (float) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (binary_expression (float) (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (unary_op_expression (float))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (unary_op_expression (integer))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer) (integer) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer) (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer) (integer)))) (expression_statement (print_intrinsic (parenthesized_expression (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))) (expression_statement (print_intrinsic (parenthesized_expression (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (array_creation_expression (array_element_initializer (integer)) (array_element_initializer (integer)))))))

