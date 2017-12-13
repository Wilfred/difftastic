==========
Req #54514 (Get php binary path during script execution)
==========

<?php
if(realpath(getenv('TEST_PHP_EXECUTABLE')) === realpath(PHP_BINARY)) {
	echo "done";
} else {
	var_dump(getenv('TEST_PHP_EXECUTABLE'));
	var_dump(PHP_BINARY);
}

---

(program (script_section (if_statement (binary_expression (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string))))) (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))) (compound_statement (echo_statement (string))) (else_clause (compound_statement (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))))))))
