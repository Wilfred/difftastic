==========
output buffering - ob_get_contents
==========

<?php
ob_start();
echo "foo\n";
echo ob_get_contents();
?>

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (echo_statement (string)) (echo_statement (function_call_expression (qualified_name (name)) (arguments)))))

