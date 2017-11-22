==========
Bug #74815 crash with a combination of INI entries at startup
==========

<?php

$php = getenv("TEST_PHP_EXECUTABLE");

echo shell_exec("$php -n -d error_log=errors.log -d error_reporting=E_ALL -d log_errors=On -d track_errors=On -v");

?>
==DONE==
--EXPECTF--
Deprecated: Directive 'track_errors' is deprecated in Unknown on line 0
%A
==DONE==
