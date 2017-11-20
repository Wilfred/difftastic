==========
Bug #30726 (-.1 like numbers are not being handled correctly)
==========

<?php
echo (int) is_float('-.1' * 2), "\n";
?>

---
