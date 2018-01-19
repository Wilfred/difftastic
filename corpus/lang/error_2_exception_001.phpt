==========
ZE2 errors caught as exceptions
==========

<?php

class MyException extends Exception {
	function __construct($_errno, $_errmsg) {
		$this->errno = $_errno;
		$this->errmsg = $_errmsg;
	}

	function getErrno() {
		return $this->errno;
	}

	function getErrmsg() {
		return $this->errmsg;
	}
}

function ErrorsToExceptions($errno, $errmsg) {
	throw new MyException($errno, $errmsg);
}

set_error_handler("ErrorsToExceptions");

// make sure it isn't catching exceptions that weren't
// thrown...

try {
} catch (MyException $exception) {
	echo "There was an exception: " . $exception->getErrno() . ", '" . $exception->getErrmsg() . "'\n";
}

try {
	trigger_error("I will become an exception", E_USER_ERROR);
} catch (MyException $exception) {
	echo "There was an exception: " . $exception->getErrno() . ", '" . $exception->getErrmsg() . "'\n";
}

?>

---

(program  (class_declaration (name) (class_base_clause (qualified_name (name))) (method_declaration (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name)))) (expression_statement (assignment_expression (member_access_expression (dereferencable_expression (variable_name (name))) (name)) (variable_name (name))))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name)))))) (method_declaration (function_definition (name) (compound_statement (return_statement (member_access_expression (dereferencable_expression (variable_name (name))) (name))))))) (function_definition (name) (simple_parameter (variable_name (name))) (simple_parameter (variable_name (name))) (compound_statement (throw_statement (object_creation_expression (qualified_name (name)) (arguments (variable_name (name)) (variable_name (name))))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (comment) (comment) (try_statement (compound_statement) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))) (try_statement (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (qualified_name (name)))))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (binary_expression (binary_expression (binary_expression (binary_expression (string) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)) (member_call_expression (dereferencable_expression (variable_name (name))) (name) (arguments))) (string)))))))

