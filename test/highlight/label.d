int fun(void) {
// <- type
//  ^ function
//     ^ punctuation.bracket
//       ^ type
//          ^ punctuation.bracket
//            ^ punctuation.bracket

my_label:
//  ^ label

goto    my_label;
// ^ keyword.control
//        ^ label
//              ^ punctuation.delimiter
   }
// ^ punctuation.bracket
