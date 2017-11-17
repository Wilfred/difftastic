<?php
interface IA {
	const FOO = 10;
}

interface IB extends IA {
}

class C implements IA, IB {
}

echo "Done\n";
?>
--EXPECTF--
Done
