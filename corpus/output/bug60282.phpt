==========
Bug #60282 (Segfault when using ob_gzhandler() with open buffers)
==========

<?php
ob_start();
ob_start();
ob_start('ob_gzhandler');
echo "done";

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (string))))

