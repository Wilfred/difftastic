==========
ZE2 type hinting
==========

<?php
class P { }
class T {
	function f(P $p = NULL) {
		var_dump($p);
		echo "-\n";
	}
}

$o=new T();
$o->f(new P);
$o->f();
$o->f(NULL);
?>

---

(program  (class_declaration (name)) (class_declaration (name) (method_declaration (function_definition (name) (simple_parameter (type_declaration (base_type_declaration (qualified_name (name)))) (variable_name (name)) (default_argument_specifier (qualified_name (name)))) (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (variable_name (name))))) (echo_statement (string)))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name)) (arguments)))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments (object_creation_expression (qualified_name (name)))))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (expression_statement (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments (qualified_name (name))))))

