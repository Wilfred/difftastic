==========
Bug #60322 (ob_get_clean() now raises an E_NOTICE if no buffers exist)
==========

<?php
ob_start();
while(@ob_end_clean());
var_dump(ob_get_clean());

---

(program (script_section (expression_statement (function_call_expression (qualified_name (name)) (arguments))) (while_statement (unary_op_expression (function_call_expression (qualified_name (name)) (arguments)))) (expression_statement (function_call_expression (qualified_name (name)) (arguments (function_call_expression (qualified_name (name)) (arguments)))))))

