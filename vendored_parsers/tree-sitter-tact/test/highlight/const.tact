const declared: String;
// <- keyword
//    ^ constant
//            ^ punctuation.delimiter
//              ^ type.builtin
//                    ^ punctuation.delimiter

override virtual abstract const theAnswer: Int = 42;
// <- keyword
//       ^ keyword
//               ^ keyword
//                        ^ keyword
//                              ^ constant
//                                       ^ punctuation.delimiter
//                                         ^ type.builtin
//                                             ^ operator
//                                               ^ number
//                                                 ^ punctuation.delimiter

fun refTest(): Int {
    return theAnswer + 0;
    //     ^ constant
}
