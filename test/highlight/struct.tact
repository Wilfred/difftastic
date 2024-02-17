struct Whatever {
// <- keyword
//     ^ type
//              ^ punctuation.bracket

  a  : Int;
  // <- property
  // ^ punctuation.delimiter
  //   ^ type.builtin
  //      ^ punctuation.delimiter

  b  : String = "hello!";
  // <- property
  // ^ punctuation.delimiter
  //   ^ type.builtin
  //                    ^ punctuation.delimiter

  c  : Int as int32;
  // <- property
  // ^ punctuation.delimiter
  //   ^ type.builtin
  //       ^ keyword
  //          ^ type.builtin
  //               ^ punctuation.delimiter

  d  : Int as int256 = 10;
  // <- property
  // ^ punctuation.delimiter
  //   ^ type.builtin
  //       ^ keyword
  //          ^ type.builtin
  //                 ^ operator
  //                   ^ number
  //                     ^ punctuation.delimiter

}
// <- punctuation.bracket

fun TestStruct() {
  Whatever{a: 10, b: "hello!", c: 10, d: 10};
  // <- constructor
  //      ^ punctuation.bracket
  //       ^ property
  //        ^ punctuation.delimiter
  //          ^ number
  //            ^ punctuation.delimiter
  //              ^ property
  //               ^ punctuation.delimiter
  //                 ^ string
  //                         ^ punctuation.delimiter
  //                           ^ property
  //                            ^ punctuation.delimiter
  //                              ^ number
  //                                ^ punctuation.delimiter
  //                                  ^ property
  //                                   ^ punctuation.delimiter
  //                                     ^ number
  //                                       ^ punctuation.bracket
  //                                        ^ punctuation.delimiter
}