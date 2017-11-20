==========
Bug #61000 (Exceeding max nesting level doesn't delete numerical vars)
==========

<?php
print_r($_GET);
print_r($_POST);
--EXPECTF--
Array
(
)
Array
(
)
