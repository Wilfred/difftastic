==========
ZE2: set_exception_handler()
==========

<?php
class MyException extends Exception {
	function __construct($_error) {
		$this->error = $_error;
	}

	function getException()
	{
		return $this->error;
	}
}

function ThrowException()
{
	throw new MyException("'This is an exception!'");
}


try {
} catch (MyException $exception) {
	print "There shouldn't be an exception: " . $exception->getException();
	print "\n";
}

try {
	ThrowException();
} catch (MyException $exception) {
	print "There was an exception: " . $exception->getException();
	print "\n";
}
?>

---

(program  (class_declaration (name) (class_base_clause (qualified_name (name))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name)) (simple_variable (variable_name (name)))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name))))))) (function_definition (name) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (string)))))) (try_statement (compound_statement) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (expression_statement (intrinsic (print_intrinsic (binary_expression (string) (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))) (expression_statement (intrinsic (print_intrinsic (string))))))) (try_statement (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (expression_statement (intrinsic (print_intrinsic (binary_expression (string) (member_call_expression (dereferencable_expression (simple_variable (variable_name (name)))) (name) (arguments)))))) (expression_statement (intrinsic (print_intrinsic (string))))))))

