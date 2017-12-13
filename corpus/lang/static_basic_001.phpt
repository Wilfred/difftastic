==========
Static keyword - basic tests
==========

<?php

echo "\nSame variable used as static and non static.\n";
function staticNonStatic() {
	echo "---------\n";
	$a=0;
	echo "$a\n";
	static $a=10;
	echo "$a\n";
	$a++;
}
staticNonStatic();
staticNonStatic();
staticNonStatic();

echo "\nLots of initialisations in the same statement.\n";
function manyInits() {
	static $counter=0;
	echo "------------- Call $counter --------------\n";
	static $a, $b=10, $c=20, $d, $e=30;
	echo "Unitialised      : $a\n";
	echo "Initialised to 10: $b\n";
	echo "Initialised to 20: $c\n";
	echo "Unitialised      : $d\n";
	echo "Initialised to 30: $e\n";
	$a++;
	$b++;
	$c++;
	$d++;
	$e++;
	$counter++;
}
manyInits();
manyInits();
manyInits();

echo "\nUsing static keyword at global scope\n";
for ($i=0; $i<3; $i++) {
   static $s, $k=10;
   echo "$s $k\n";
   $s++;
   $k++;
}
?>

---

(program (script_section (echo_statement (string)) (function_definition (name) (compound_statement (echo_statement (string)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (float))) (echo_statement (string)) (function_static_declaration (static_variable_declaration (variable_name (name)) (integer))) (echo_statement (string)) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (function_definition (name) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name)) (float))) (echo_statement (string)) (function_static_declaration (static_variable_declaration (variable_name (name))) (static_variable_declaration (variable_name (name)) (integer)) (static_variable_declaration (variable_name (name)) (integer)) (static_variable_declaration (variable_name (name))) (static_variable_declaration (variable_name (name)) (integer))) (echo_statement (string)) (echo_statement (string)) (echo_statement (string)) (echo_statement (string)) (echo_statement (string)) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (float)) (postfix_increment_expression (simple_variable (variable_name (name)))) (compound_statement (function_static_declaration (static_variable_declaration (variable_name (name))) (static_variable_declaration (variable_name (name)) (integer))) (echo_statement (string)) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name))))) (expression_statement (postfix_increment_expression (simple_variable (variable_name (name)))))))))

