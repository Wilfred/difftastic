==========
Bug #24908 (super-globals can not be used in __destruct())
==========

<?php
class test {
	function __construct() {
		if (count($_SERVER)) echo "O";
	}
	function __destruct() {
		if (count($_SERVER)) echo "K\n";
	}
}
$test = new test();
?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (if_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))) (echo_statement (string)))))) (method_declaration (function_definition (name) (compound_statement (if_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name)))) (echo_statement (string))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))))
