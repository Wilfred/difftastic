public class Me {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
    {
//  ^ punctuation
        if(true){
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
//              ^ punctuation
            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        }
//      ^ punctuation

        if(true)
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation

        if(true) {
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
//               ^ punctuation
            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation

        } else {
//      ^ punctuation
//        ^ keyword
//             ^ punctuation
            Integer j = 2;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        }
//      ^ punctuation

        if(true)
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        else
//      ^ keyword
            Integer j = 2;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation

        if(true)
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        else if(false)
//      ^ keyword
//           ^ keyword
//             ^ punctuation
//              ^ variable.readonly.defaultLibrary
//                   ^ punctuation
            Integer l = 3;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        else
//      ^ keyword
            Integer j = 2;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation

        if(true) {
//      ^ keyword
//        ^ punctuation
//         ^ variable.readonly.defaultLibrary
//             ^ punctuation
//               ^ punctuation

            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        } else if(false) {
//      ^ punctuation
//        ^ keyword
//             ^ keyword
//               ^ punctuation
//                ^ variable.readonly.defaultLibrary
//                     ^ punctuation
//                       ^ punctuation

            Integer l = 3;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        } else {
//      ^ punctuation
//        ^ keyword
//             ^ punctuation

            Integer j = 2;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        }
//      ^ punctuation

        do {
//      ^ keyword
//         ^ punctuation

            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        } while(true);
//      ^ punctuation
//        ^ keyword
//             ^ punctuation
//              ^ variable.readonly.defaultLibrary
//                  ^ punctuation
//                   ^ punctuation

        while (true) {
//      ^ keyword
//            ^ punctuation
//             ^ variable.readonly.defaultLibrary
//                 ^ punctuation
//                   ^ punctuation

            Integer i = 1;
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
        }
//      ^ punctuation

        for(Integer i = 0; i < 3; i++){
//      ^ keyword
//         ^ punctuation
//          ^ type
//                  ^ variable
//                    ^ operator
//                      ^ number
//                       ^ punctuation
//                         ^ variable
//                           ^ operator
//                             ^ number
//                              ^ punctuation
//                                ^ variable
//                                 ^^ operator
//                                   ^ punctuation
//                                    ^ punctuation
            System.debug(i);
//          ^ type
//                ^ punctuation
//                 ^ method
//                      ^ punctuation
//                       ^ variable
//                        ^ punctuation
        }
//      ^ punctuation

        for(Account a : accs){
//      ^ keyword
//         ^ punctuation
//          ^ type
//                  ^ variable
//                    ^ punctuation
//                      ^ variable
//                          ^ punctuation
//                           ^ punctuation

            System.debug(a);
//          ^ type
//                ^ punctuation
//                 ^ method
//                      ^ punctuation
//                       ^ variable
//                        ^ punctuation
        }
//      ^ punctuation

        System.runAs(new User(Id = UserInfo.getUserId())) {}
//      ^^^^^^^^^^^^ method.defaultLibrary
//                  ^ punctuation
//                   ^ keyword
    }
//  ^ punctuation
}
// <- punctuation