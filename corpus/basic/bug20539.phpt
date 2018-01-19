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

(program  (expression_statement (print_intrinsic (string))) (expression_statement (assignment_expression (variable_name (name)) (binary_expression (binary_expression (qualified_name (name)) (string)) (function_call_expression (qualified_name (name)) (arguments))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))) (expression_statement (unary_op_expression (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))))))
