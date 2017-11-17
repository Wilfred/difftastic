<?php
require_once('nonexisiting.php');
?>
--EXPECTF--
<br />
<b>Warning</b>:  require_once(nonexisiting.php) [<a href='/function.require-once.html'>function.require-once.html</a>]: failed to open stream: No such file or directory in <b>%sbug35176.php</b> on line <b>2</b><br />
<br />
<b>Fatal error</b>:  require_once() [<a href='/function.require.html'>function.require.html</a>]: Failed opening required 'nonexisiting.php' (%s) in <b>%sbug35176.php</b> on line <b>2</b><br />
