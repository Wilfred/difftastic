public class Me {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
    {
//  ^ punctuation
        SObject a = new Account();
//      ^ type
//              ^ variable
//                ^ operator
//                  ^ keyword
//                      ^ type
//                             ^ punctuation
//                              ^ punctuation
//                               ^ punctuation
        if(a instanceof Account) {
//      ^ keyword
//        ^ punctuation
//         ^ variable
//           ^ keyword
//                      ^ type
//                             ^ punctuation
//                               ^ punctuation
            Account p = (Account)a;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ punctuation
//                       ^ type
//                              ^ punctuation
//                               ^ variable
//                                ^ punctuation
        } else {
//      ^ punctuation
//        ^ keyword
//             ^ punctuation
            // something else...
        }
//      ^ punctuation
    }
//  ^ punctuation
}
// <- punctuation