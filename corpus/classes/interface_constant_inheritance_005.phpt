==========
Ensure a interface can have public constants
==========

<?php
interface IA {
	public const FOO = 10;
}

echo "Done\n";
?>

---

(program  (interface_declaration (name) (class_const_declaration (visibility_modifier) (const_element (name) (integer)))) (echo_statement (string)))
