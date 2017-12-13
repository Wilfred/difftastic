==========
Bug #19943 (memleaks)
==========

<?php
	$ar = array();
	for ($count = 0; $count < 10; $count++) {
		$ar[$count]        = "$count";
		@$ar[$count]['idx'] = "$count";
	}

	for ($count = 0; $count < 10; $count++) {
		echo $ar[$count]." -- ".@$ar[$count]['idx']."\n";
	}
	$a = "0123456789";
	$a[9] = $a[0];
	var_dump($a);
?>

---

(program (script_section (expression_statement (assignment_expression (simple_variable (variable_name (name))) (array_creation_expression))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (postfix_increment_expression (simple_variable (variable_name (name)))) (compound_statement (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))) (string))) (expression_statement (unary_op_expression (assignment_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name))))) (string)) (string)))))) (for_statement (assignment_expression (simple_variable (variable_name (name))) (float)) (binary_expression (simple_variable (variable_name (name))) (integer)) (postfix_increment_expression (simple_variable (variable_name (name)))) (compound_statement (echo_statement (binary_expression (binary_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name)))) (string)) (unary_op_expression (binary_expression (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (simple_variable (variable_name (name))))) (string)) (string))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (string))) (expression_statement (assignment_expression (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float)) (subscript_expression (dereferencable_expression (simple_variable (variable_name (name)))) (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name))))))))

