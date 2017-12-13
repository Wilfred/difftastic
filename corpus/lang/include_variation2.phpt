==========
Including a file in the current script directory from an included function
==========

<?php
require_once 'include_files/function.inc';
test();
?>

---

(program (script_section (expression_statement (require_once_expression (string))) (expression_statement (function_call_expression (qualified_name (name)) (arguments)))))

