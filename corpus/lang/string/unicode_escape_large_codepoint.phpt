==========
Invalid Unicode escape sequence: Large codepoint
==========

<?php

var_dump("\u{110000}"); // U+10FFFF + 1
--EXPECTF--
Parse error: Invalid UTF-8 codepoint escape sequence: Codepoint too large in %s on line %d
