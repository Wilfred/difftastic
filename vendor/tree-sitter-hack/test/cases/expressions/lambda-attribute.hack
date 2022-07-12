// HHVM requires parens to parse correctly 🤔 Tree-sitter doesn't.
(<<A3(1), A2(2,3,)>>(int $x): int ==> $x + 1);

(<<Attr, Bttr(1)>> $x ==> {});
