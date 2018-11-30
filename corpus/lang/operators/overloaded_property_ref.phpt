==========
Operators on overlaoded property reference
==========

<?php
class C {
	function __construct() { $this->bar = str_repeat("1", 2); }
	function &__get($x) { return $this->bar; }
	function __set($x, $v) { $this->bar = $v; }
}
$x = new C;
var_dump(++$x->foo);
$x = new C;
var_dump($x->foo++);
$x = new C;
var_dump($x->foo += 2);
?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (formal_parameters) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (function_call_expression (qualified_name (name)) (arguments (string) (integer)))))))) (method_declaration (function_definition (name) (formal_parameters (simple_parameter (variable_name (name)))) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (method_declaration (function_definition (name) (formal_parameters (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name)))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name)))))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (update_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (update_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (expression_statement (assignment_expression (variable_name (name)) (object_creation_expression (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (augmented_assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (integer))))))
