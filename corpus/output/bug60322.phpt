==========
Bug #60322 (ob_get_clean() now raises an E_NOTICE if no buffers exist)
==========

<?php
ob_start();
while(@ob_end_clean());
var_dump(ob_get_clean());

---
