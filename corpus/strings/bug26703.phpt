==========
Bug #26703 (Certain characters inside strings incorrectly treated as keywords)
==========

<?php
	highlight_string('<?php echo "foo[] $a \n"; ?>');
?>

---

(program  (expression_statement (function_call_expression (qualified_name (name)) (arguments (string)))))

