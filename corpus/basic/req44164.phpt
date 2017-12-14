==========
Req #44164 (Handle "Content-Length" HTTP header when zlib.output_compression active)
==========

<?php
header("Content-length: 200");
echo str_repeat("a", 200);

---

 (program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))) (echo_statement (function_call_expression (qualified_name (name)) (arguments (string) (integer)))))
