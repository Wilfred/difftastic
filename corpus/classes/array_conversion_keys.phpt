==========
Verifies the correct conversion of objects to arrays
==========

<?php
class foo
{
	private $private = 'private';
	protected $protected = 'protected';
	public $public = 'public';
}
var_export((array) new foo);
?>
--EXPECTF--
array (
  '' . "\0" . 'foo' . "\0" . 'private' => 'private',
  '' . "\0" . '*' . "\0" . 'protected' => 'protected',
  'public' => 'public',
)
