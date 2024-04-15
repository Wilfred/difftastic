@name(load_int)
// <- attribute
//   ^ punctuation.bracket
//    ^ function
//            ^ punctuation.bracket
extends mutates native loadInt(self: Slice, l: Int, ): Int;
// <- keyword
//      ^ keyword
//              ^ keyword
//                     ^ function
//                            ^ punctuation.bracket
//                             ^ variable.parameter
//                                 ^ punctuation.delimiter
//                                   ^ type.builtin
//                                          ^ variable.parameter
//                                           ^ punctuation.delimiter
//                                             ^ type.builtin
//                                                ^ punctuation.delimiter
//                                                  ^ punctuation.bracket
//                                                   ^ punctuation.delimiter
//                                                     ^ type.builtin
//                                                        ^ punctuation.delimiter
