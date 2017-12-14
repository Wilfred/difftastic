==========
Test that sapi_windows_vt100_support exists only on Windows
==========

<?php
var_dump(function_exists('sapi_windows_vt100_support'));
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))))
