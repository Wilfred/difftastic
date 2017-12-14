==========
output buffering - ob_start
==========

<?php
ob_start();
echo "foo\n";
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)))

