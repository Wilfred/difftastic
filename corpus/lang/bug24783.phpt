<?php
error_reporting(E_ALL);
	$arr = array ("foo\0bar" => "foo\0bar");
	foreach ($arr as $key => $val) {
		echo strlen($key), ': ';
		echo urlencode($key), ' => ', urlencode($val), "\n";
	}
?>
