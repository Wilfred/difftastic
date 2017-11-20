==========
Bug #18872 (class constant used as default parameter)
==========

<?php   
class FooBar {   
	const BIFF = 3;   
}   
   
function foo($biff = FooBar::BIFF) {   
	echo $biff . "\n";   
}   
   
foo();   
foo();   
?>   

---
