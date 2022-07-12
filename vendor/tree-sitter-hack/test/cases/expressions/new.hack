// https://github.com/facebook/hhvm/blob/a114ef79b4673c35755297ed570d23a72969ba5f/hphp/hack/test/full_fidelity/cases/test_object_creation_errors.php

$p1 = new Point();
$p1 = new Point(12);
$p1 = new $PointClassVar->$pointClassName();

// Fails in Hack but not in Tree-sitter. Should fail in Tree-sitter.
// $p1 = new Point::Point(12);

$p1 = new Point::$pointVar(12);
$p1 = new self::$pointVar(12);
$p1 = new $point(12);
$p1 = new Point<int>(12);
$p1 = new (function_that_returns_class_name())(12);
$p1 = "Point" |> new $$(12);
