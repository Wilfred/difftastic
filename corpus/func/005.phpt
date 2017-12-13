==========
Testing register_shutdown_function()
==========

<?php

function foo()
{
	print "foo";
}

register_shutdown_function("foo");

print "foo() will be called on shutdown...\n";

?>

---

(program (script_section (function_definition (name) (compound_statement (expression_statement (intrinsic (print_intrinsic (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (expression_statement (intrinsic (print_intrinsic (string))))))
