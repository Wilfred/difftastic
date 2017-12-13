==========
Test << operator : numbers as strings, simple
==========

<?php

error_reporting(E_ERROR);

var_dump("12" << "0");
var_dump("34" << "1");
var_dump("56" << "2");

?>
===DONE===

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (string) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (string) (string))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (binary_expression (string) (string)))))) (text))

