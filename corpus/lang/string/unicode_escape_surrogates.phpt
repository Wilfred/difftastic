==========
Valid Unicode escape sequences: Surrogate halves
==========

<?php

// Surrogate pairs are non-well-formed UTF-8 - however, it is sometimes useful
// to be able to produce these (e.g. CESU-8 handling)

var_dump(bin2hex("\u{D801}"));
var_dump(bin2hex("\u{DC00}"));
var_dump(bin2hex("\u{D801}\u{DC00}")); // CESU-8 encoding of U+10400


---

(program (script_section (comment) (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string)))))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments (string))))))) (comment))

