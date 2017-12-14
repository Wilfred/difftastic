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

(program  (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (intrinsic (eval_intrinsic (simple_variable (variable_name (name)))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))))
