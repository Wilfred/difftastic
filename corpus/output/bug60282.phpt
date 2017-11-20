==========
Bug #60282 (Segfault when using ob_gzhandler() with open buffers)
==========

<?php
ob_start();
ob_start();
ob_start('ob_gzhandler');
echo "done";

---
