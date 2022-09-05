<<3>>
// <- punctuation.bracket
//^ number
// ^ punctuation.bracket
<<3:8>>
//^ number
// ^ punctuation.delimiter
//  ^ number
<<3:size(8)>>
//^ number
// ^ punctuation.delimiter
//   ^ function.builtin
//      ^ punctuation.bracket
//       ^ number
//        ^ punctuation.bracket
<<code:int-size(8)-unit(2), reason:utf8>>
// ^ variable
//      ^ function.builtin
//        ^ punctuation.delimiter
//          ^ function.builtin
//              ^ number
//                  ^ function.builtin
//                      ^ number
//                             ^ variable
//                                   ^ function.builtin
