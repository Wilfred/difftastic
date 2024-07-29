int fun(void) {
// <- type.builtin
//  ^ function
//     ^ punctuation.bracket
//       ^ type.builtin
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
