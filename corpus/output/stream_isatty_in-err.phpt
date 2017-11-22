==========
Test stream_isatty with redirected STDIN/STDERR
==========

<?php
require dirname(__FILE__).'/stream_isatty.inc';
testToStdErr();
?>
--EXPECTF--
STDIN (constant): bool(false)
STDIN (fopen): bool(false)
STDIN (php://fd/0): bool(false)
STDOUT (constant): bool(true)
STDOUT (fopen): bool(true)
STDOUT (php://fd/1): bool(true)
STDERR (constant): bool(false)
STDERR (fopen): bool(false)
STDERR (php://fd/2): bool(false)
Not a stream: 
Warning: stream_isatty() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
Invalid stream (php://temp): bool(false)
Invalid stream (php://input): bool(false)
Invalid stream (php://memory): bool(false)
File stream: bool(false)
