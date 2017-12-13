==========
Catching an exception thrown from an included file
==========

<?php

try {
	include "inc_throw.inc";
} catch (Exception $e) {
	echo "caught exception\n";
}

?>

---

(program (script_section (try_statement (compound_statement (expression_statement (include_expression (string)))) (catch_clause (qualified_name (name)) (variable_name (name)) (compound_statement (echo_statement (string)))))))

