==========
Bug #27443 (defined() returns wrong type)
==========

<?php
echo gettype(defined('test'));
?>

---

(program (script_section (echo_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string))))))))

