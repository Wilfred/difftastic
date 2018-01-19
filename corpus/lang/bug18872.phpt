==========
Bug #18872 (class constant used as default parameter)
==========

<?php
class FooBar {
	const BIFF = 3;
}

function foo($biff = FooBar::BIFF) {
	echo $biff . "\n";
}

foo();
foo();
?>

---

(program  (class_declaration (name) (class_const_declaration (const_element (name) (float)))) (function_definition (name) (simple_parameter (variable_name (name)) (default_argument_specifier (class_constant_access_expression (qualified_name (name)) (name)))) (compound_statement (echo_statement (binary_expression (variable_name (name)) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))

