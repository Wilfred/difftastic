==========
Testing user-defined function in included file
==========

<?php
include "016.inc";
MyFunc("Hello");
?>

---

(program (script_section (expression_statement (include_expression (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string))))))
