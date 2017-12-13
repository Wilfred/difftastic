==========
Bug #25145 (SEGV on recpt of form input with name like "123[]")
==========

<?php

var_dump($_REQUEST);
echo "Done\n";

?>

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments (simple_variable (variable_name (name)))))) (echo_statement (string))))
