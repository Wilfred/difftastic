==========
Bug #29971 (variables_order behaviour)
==========

<?php
var_dump($_ENV,$_SERVER);
var_dump(ini_get("variables_order"));
?>

---
