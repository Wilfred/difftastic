==========
Test header_register_callback
==========

<?php
header_register_callback(function() { echo "sent";});
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (anonymous_function_creation_expression (compound_statement (echo_statement (string))))))))
