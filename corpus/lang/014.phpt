==========
Testing eval function inside user-defined function
==========

<?php
function F ($a) {
	eval($a);
}

error_reporting(0);
F("echo \"Hello\";");
?>

---

(program  (function_definition (name) (formal_parameters (simple_parameter (variable_name (name)))) (compound_statement (expression_statement (eval_intrinsic (variable_name (name)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (integer)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))))
