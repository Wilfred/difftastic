==========
Bug #12647 (Locale settings affecting float parsing)
==========

<?php 
# activate the german locale
setlocale(LC_NUMERIC, "de_DE.UTF-8", "de_DE", "de", "german", "ge", "de_DE.ISO-8859-1");

echo (float)"3.14", "\n";
?>

---
