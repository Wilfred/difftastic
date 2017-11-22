==========
Bug #29944 (function defined in switch crashes PHP)
==========

<?PHP
$a = 1;
$b = "1";
switch ($a) {
	case 1:
		function foo($bar) {
			if (preg_match('/\d/', $bar)) return true;
			return false;
		}
		echo foo($b);
}		
?>

===DONE===

---
