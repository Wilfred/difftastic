==========
openbase_dir runtime tightning
==========

<?php
var_dump(ini_set("open_basedir", "/usr/local/bin"));
var_dump(ini_get("open_basedir"));
var_dump(ini_set("open_basedir", "/usr"));
var_dump(ini_get("open_basedir"));
?>

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string) (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string))))))))

