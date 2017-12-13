==========
Test basic functionality of flush()
==========

<?php
/*
 * proto void flush(void)
 * Function is implemented in ext/standard/basic_functions.c.
 */

// Verify return type
var_dump(flush());

// Ensure user buffers are not flushed by flush()
ob_start();
echo "Inside a user buffer\n";
flush();
ob_end_clean();

echo "Outside of any user buffers\n";
var_dump(flush());

?>

---

(program (script_section (comment) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments))))) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments)))))))

