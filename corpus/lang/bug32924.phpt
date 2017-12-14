==========
Bug #32924 (prepend does not add file to included files)
==========

<?php
include_once(dirname(__FILE__).'/inc.inc');
require_once(dirname(__FILE__).'/inc.inc');
?>
END

---

(program  (expression_statement (include_once_expression (binary_expression (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)))) (string)))) (expression_statement (require_once_expression (binary_expression (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)))) (string)))) (text))

