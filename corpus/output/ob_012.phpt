==========
output buffering - multiple
==========

<?php
echo 0;
	ob_start();
		ob_start();
			ob_start();
				ob_start();
					echo 1;
				ob_end_flush();
				echo 2;
			$ob = ob_get_clean();
		echo 3;
		ob_flush();
		ob_end_clean();
	echo 4;
	ob_end_flush();
echo $ob;
?>

---

(program  (echo_statement (float)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (float)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (float)) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (function_call_expression (qualified_name (name)) (arguments)))) (echo_statement (float)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (float)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (simple_variable (variable_name (name)))))

