==========
Bug #60321 (ob_get_status(true) no longer returns an array when buffer is empty)
==========

<?php
$return = ob_get_status(true);                                                  
var_dump($return);

---
