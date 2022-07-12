<<A1>>
newtype T1 = ?shape(
  ?'int' => int
);

<<A3(1), A2(2,3,)>>
type T2 = (function(T1): string);

<<A4(1), A5, A6(1,3,4)>>
newtype T3 as int = int;
