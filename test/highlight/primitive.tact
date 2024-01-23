primitive map<Int as int32, Address as remaining>;
// <- keyword
//        ^ type.builtin
//           ^ punctuation.bracket
//            ^ type.builtin
//                ^ keyword
//                   ^ type.builtin
//                        ^ punctuation.delimiter
//                          ^ type.builtin
//                                  ^ keyword
//                                     ^ type.builtin
//                                              ^ punctuation.bracket
//                                               ^ punctuation.delimiter 

primitive bounced<Message>;
// <- keyword
//        ^ type.builtin
//               ^ punctuation.bracket
//                ^ type
//                       ^ punctuation.bracket
//                        ^ punctuation.delimiter

primitive Int?;
// <- keyword
//        ^ type.builtin
//           ^ punctuation.delimiter
//            ^ punctuation.delimiter
