==========
Bug #21849 (self::constant doesn't work as method's default parameter)
==========

<?php
class foo {
	const bar = "fubar\n";

	function __construct($arg = self::bar) {
		echo $arg;
	}
}

new foo();
?>

---

(program  (class_declaration (name) (class_const_declaration (const_element (name) (string))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name)) (default_argument_specifier (class_constant_access_expression (relative_scope) (name)))) (compound_statement (echo_statement (variable_name (name))))))) (expression_statement (object_creation_expression (qualified_name (name)) (arguments))))
