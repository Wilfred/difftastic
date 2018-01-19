==========
Bug #29944 (function defined in switch crashes PHP)
==========

<?PHP
$a = 1;
$b = "1";
switch ($a) {
	case 1:
		function foo($bar) {
			if (preg_match('/\d/', $bar)) return true;
			return false;
		}
		echo foo($b);
}
?>

---

(program  (expression_statement (assignment_expression (variable_name (name)) (float))) (expression_statement (assignment_expression (variable_name (name)) (string))) (switch_statement (variable_name (name)) (case_statement (float) (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (if_statement (function_call_expression (qualified_name (name)) (arguments (string) (variable_name (name)))) (return_statement (qualified_name (name)))) (return_statement (qualified_name (name))))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))))))

