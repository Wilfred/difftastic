==========
output buffering - ob_flush
==========

<?php
ob_start();
echo "foo\n";
ob_flush();
echo "bar\n";
ob_flush();
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))))

