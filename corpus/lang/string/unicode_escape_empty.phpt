==========
Invalid Unicode escape sequence: Empty
==========

<?php

var_dump("\u{}");
--EXPECTF--
Parse error: Invalid UTF-8 codepoint escape sequence in %s on line %d
