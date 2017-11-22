==========
Bug #32924 (prepend does not add file to included files)
==========

<?php 
include_once(dirname(__FILE__).'/inc.inc');
require_once(dirname(__FILE__).'/inc.inc');
?>
END

---
