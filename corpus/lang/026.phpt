==========
Testing string scanner confirmance
==========

<?php echo "\"\t\\'" . '\n\\\'a\\\b\\' ?>

---

(program (script_section (echo_statement (binary_expression (string) (string)))))
