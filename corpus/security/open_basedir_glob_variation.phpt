==========
Test open_basedir configuration for glob
==========

<?php
$dir = "globtest1";
$dir2 = "globtest2";
mkdir($dir);
mkdir($dir2);
chdir($dir);
var_dump(glob("../globtest*"));
?>
--CLEAN--
<?php
$dir = "globtest1";
$dir2 = "globtest2";
rmdir($dir);
rmdir($dir2);
?>

---
