fun c() {
  false || true;
  // <- constant.builtin
  //    ^ operator
  //       ^ constant.builtin
  //           ^ punctuation.delimiter

  true && true;
  //   ^ operator

  true != true;
  //   ^ operator

  true == true;
  //   ^ operator

  2  > 1;
  // ^ operator

  2  >= 2;
  // ^ operator

  1  < 2;
  // ^ operator

  2  <= 2;
  // ^ operator

  5  >> 1;
  // ^ operator

  1  << 5;
  // ^ operator

  0  ^ 1;
  // ^ operator

  0  & 1;
  // ^ operator

  0  | 1;
  // ^ operator

  0  + 1 - 2;
  // ^ operator
  //     ^ operator

  0  * 1 / 5 % 10;
  // ^ operator
  //     ^ operator
  //         ^ operator

  +0;
  // <- operator

  -0;
  // <- operator
  
  !0;
  // <- operator
  
  null!!;
  //  ^ operator

  (0 );
  // <- punctuation.bracket 
  // ^ punctuation.bracket
}
