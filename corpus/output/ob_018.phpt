==========
output buffering - error message nirvana bug #37714
==========

<?php
ob_start('ob_gzhandler');
?>
--EXPECTF--
�%a
