message Empty {}
// <- keyword
//      ^ type
//            ^ punctuation.bracket
//             ^ punctuation.bracket

message(0x42) WithValue {}
// <- keyword
//     ^ punctuation.bracket
//       ^ number
//          ^ punctuation.bracket
//            ^ type
//                      ^ punctuation.bracket
//                       ^ punctuation.bracket
