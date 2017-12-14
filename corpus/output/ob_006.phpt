==========
output buffering - ob_end_flush
==========

<?php
ob_start();
echo "foo\n";
ob_end_flush();
var_dump(ob_get_level());
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments))))))

