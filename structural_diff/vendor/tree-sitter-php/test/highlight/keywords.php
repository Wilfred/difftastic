<?php
// <- tag

if ($a) {}
// <- keyword

while ($b) {}
// <- keyword

WHILE ($b) {}
// <- keyword

do { } while ($c);
// <- keyword
//     ^ keyword

try {} catch (Exception $e) {}
// <- keyword
//     ^ keyword

function a() {}
// <- keyword

class A {}
// <- keyword

throw new Exception("oh");
// <- keyword
//    ^ keyword

function b(
  int $a,
  // <- type.builtin

  string $b,
  // <- type.builtin

  Person $e
  // ^ type
): Dog {}
// ^ type

interface T {}
// ^ keyword

trait T {}
// ^ keyword
