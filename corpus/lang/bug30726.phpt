==========
Bug #30726 (-.1 like numbers are not being handled correctly)
==========

<?php
echo (int) is_float('-.1' * 2), "\n";
?>

---

(program  (echo_statement (sequence_expression (cast_expression (cast_type) (function_call_expression (qualified_name (name)) (arguments (binary_expression (string) (integer))))) (string))))

