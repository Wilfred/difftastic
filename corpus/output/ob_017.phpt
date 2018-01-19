==========
output buffering - stati
==========

<?php
$stati = array();
function oh($str, $flags) {
	global $stati;
	$stati[] = "$flags: $str";
	return $str;
}
ob_start("oh", 3);
echo "yes";
echo "!\n";
ob_flush();
echo "no";
ob_clean();
echo "yes!\n";
echo "no";
ob_end_clean();
print_r($stati);
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (array_creation_expression))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (global_declaration (variable_name (name))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (variable_name (name)))) (string))) (return_statement (variable_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (echo_statement (string)) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))

