<?php
class Test {
  function __construct() {
    ob_start(
      array(
        $this, 'transform'
      )
    );
  }

  function transform($buffer) {
    return 'success';
  }
}

$t = new Test;
?>
failure
