==========
Test stream_isatty with redirected STDOUT
==========

<?php
require dirname(__FILE__).'/stream_isatty.inc';
testToStdOut();
?>
--EXPECTF--
STDIN (constant): bool(true)
STDIN (fopen): bool(true)
STDIN (php://fd/0): bool(true)
STDOUT (constant): bool(false)
STDOUT (fopen): bool(false)
STDOUT (php://fd/1): bool(false)
STDERR (constant): bool(true)
STDERR (fopen): bool(true)
STDERR (php://fd/2): bool(true)
Not a stream: 
Warning: stream_isatty() expects parameter 1 to be resource, string given in %s on line %d
bool(false)
Invalid stream (php://temp): bool(false)
Invalid stream (php://input): bool(false)
Invalid stream (php://memory): bool(false)
File stream: bool(false)
