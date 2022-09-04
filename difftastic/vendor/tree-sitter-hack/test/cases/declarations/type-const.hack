class C {
  const type T1;
  const type T2 = int;
  <<A3(1), A2(2,3,)>>
  const type T3 as int;
  const type T4<<<Attr>> T3> as int = arraykey;
  abstract const type T5 as ?int = ?arraykey;
}
