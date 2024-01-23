fun empty();
// <- keyword
//  ^ function
//       ^ punctuation.bracket
//        ^ punctuation.bracket
//         ^ punctuation.delimiter

abstract fun abstract();
// <- keyword

abstract fun abstractType(): Int;
//                         ^ punctuation.delimiter
//                           ^ type.builtin

abstract fun abstractWithParam(param1: Int);
//                             ^ variable.parameter
//                                   ^ punctuation.delimiter
//                                     ^ type.builtin

abstract fun abstractTypeWithParam(param1: Int): Int;
//                                 ^ variable.parameter
//                                       ^ punctuation.delimiter
//                                         ^ type.builtin
//                                             ^ punctuation.delimiter
//                                               ^ type.builtin

fun basic(): Int {
//         ^ punctuation.delimiter
//           ^ type.builtin
  return 0;
  // <- keyword
  //     ^ number
  //      ^ punctuation.delimiter
}

extends fun extendsType(self: String): String {
  //                    ^ variable.parameter
  //                        ^ punctuation.delimiter
  //                          ^ type.builtin
  return self;
  //     ^ variable.parameter
}

extends mutates fun extendsMutatesType(self: String) {
  //                                   ^ variable.parameter
  self = self + self;
  // <- variable.parameter
  //     ^ variable.parameter
  //            ^ variable.parameter
}

get mutates extends virtual override inline abstract fun allAttr();
// <- keyword
//  ^ keyword
//          ^ keyword
//                  ^ keyword
//                          ^ keyword
//                                   ^ keyword
//                                          ^ keyword
//                                                   ^ keyword

not_a_keyword fun broken();
// <- variable
