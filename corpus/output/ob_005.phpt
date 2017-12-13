==========
output buffering - ob_end_clean
==========

<?php
ob_start();
echo "foo\n";
ob_start();
echo "bar\n";
ob_end_clean();
echo "baz\n";
?>

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string))))

