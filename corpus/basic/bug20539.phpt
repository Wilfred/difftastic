==========
Bug #20539 (PHP CLI Segmentation Fault)
==========

<?php
	print "good :)\n";
	$filename = __DIR__ . '/sess_' . session_id();
	var_dump(file_exists($filename));
	@unlink($filename);
?>

---

(program (script_section (expression_statement (intrinsic (print_intrinsic (string)))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (binary_expression (binary_expression (qualified_name (name)) (string)) (function_call_expression (qualified_name (name)) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))) (expression_statement (error_control_expression (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))))))
