==========
Bison weirdness
==========

<?php
error_reporting(E_ALL & ~E_NOTICE);
echo "blah-$foo\n";
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (qualified_name (name)) (unary_op_expression (qualified_name (name))))))) (echo_statement (string)))

