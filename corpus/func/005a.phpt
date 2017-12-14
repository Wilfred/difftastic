==========
Testing register_shutdown_function() with timeout. (Bug: #21513)
==========

<?php

ini_set('display_errors', 0);

echo "Start\n";

function boo()
{
	echo "Shutdown\n";
}

register_shutdown_function("boo");

/* not necessary, just to show the error sooner */
set_time_limit(1);

/* infinite loop to simulate long processing */
for (;;) {}

echo "End\n";

?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string) (float)))) (echo_statement (string)) (function_definition (name) (compound_statement (echo_statement (string)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (float)))) (comment) (for_statement (compound_statement)) (echo_statement (string)))
