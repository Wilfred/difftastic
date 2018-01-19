==========
Bug #24436 (isset() and empty() produce errors with non-existent variables in objects)
==========

<?php
class test {
	function __construct() {
		if (empty($this->test[0][0])) { print "test1";}
		if (!isset($this->test[0][0])) { print "test2";}
	}
}

$test1 = new test();
?>

---

(program  (class_declaration (name) (method_declaration (function_definition (name) (compound_statement (if_statement (empty_intrinsic (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (float))) (float))) (compound_statement (expression_statement (print_intrinsic (string))))) (if_statement (unary_op_expression (isset_intrinsic (subscript_expression (dereferencable_expression (subscript_expression (dereferencable_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))) (float))) (float)))) (compound_statement (expression_statement (print_intrinsic (string))))))))) (expression_statement (assignment_expression (simple_variable (variable_name (name))) (object_creation_expression (qualified_name (name)) (arguments)))))
