==========
Bug #12647 (Locale settings affecting float parsing)
==========

<?php
# activate the german locale
setlocale(LC_NUMERIC, "de_DE.UTF-8", "de_DE", "de", "german", "ge", "de_DE.ISO-8859-1");

echo (float)"3.14", "\n";
?>

---

(program  (comment) (expression_statement (function_call_expression (qualified_name (name)) (arguments (qualified_name (name)) (string) (string) (string) (string) (string) (string)))) (echo_statement (sequence_expression (cast_expression (cast_type) (string)) (string))))

