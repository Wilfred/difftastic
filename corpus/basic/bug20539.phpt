<?php
	print "good :)\n";
	$filename = __DIR__ . '/sess_' . session_id();
	var_dump(file_exists($filename));
	@unlink($filename);
?>
