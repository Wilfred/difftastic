<?php

$strVals = array(
   "0","65","-44", "1.2", "-7.7", "abc", "123abc", "123e5", "123e5xyz", " 123abc", "123 abc", "123abc ", "3.4a",
   "a5.9"
);

error_reporting(E_ERROR);

foreach ($strVals as $strVal) {
   foreach($strVals as $otherVal) {
	  echo "--- testing: '$strVal' << '$otherVal' ---\n";
      try {
        var_dump(strVal<<$otherVal);
      } catch (Throwable $e) {
        echo "Exception: " . $e->getMessage() . "\n";
      }
   }
}
   
?>
===DONE===
