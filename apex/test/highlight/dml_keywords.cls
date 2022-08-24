private virtual with sharing class Me {
// <- keyword
//      ^ keyword
//              ^^^^^^^^^^^^ keyword
//                           ^ keyword
//                                 ^ class
//                                    ^ punctuation
    {
//  ^ punctuation
        update a;
//      ^ function.defaultLibrary
//             ^ variable
//              ^ punctuation
        insert a;
//      ^ function.defaultLibrary
//             ^ variable
//              ^ punctuation
        upsert a;
//      ^ function.defaultLibrary
//             ^ variable
//              ^ punctuation
        upsert a Account.Id;
//      ^ function.defaultLibrary
//             ^ variable
//               ^ type
//                      ^ punctuation
//                       ^ type
//                         ^ punctuation
        delete a;
//      ^ function.defaultLibrary
//             ^ variable
//              ^ punctuation
        delete a.Id;
//      ^ function.defaultLibrary
//             ^ type
//              ^ punctuation
//               ^ property
//                 ^ punctuation
        undelete a.Id;
//      ^ function.defaultLibrary
//               ^ type
//                ^ punctuation
//                 ^ property
//                   ^ punctuation
        merge a b;
//      ^ function.defaultLibrary
//            ^ variable
//              ^ variable
//               ^ punctuation
    }
//  ^ punctuation
}
// <- punctuation