==========
output buffering - ob_clean
==========

<?php
ob_start();
echo "foo\n";
ob_clean();
echo "bar\n";
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)))

