trigger myAccountTrigger on Account (
// <- keyword
//      ^ type
//                       ^ keyword
//                          ^ type
//                                  ^ punctuation
    before insert,
//  ^^^^^^^^^^^^^ keyword
//               ^ punctuation
    before update,
//  ^^^^^^^^^^^^^ keyword
//               ^ punctuation
    before delete,
//  ^^^^^^^^^^^^^ keyword
//               ^ punctuation
    after insert,
//  ^^^^^^^^^^^^ keyword
//              ^ punctuation
    after update,
//  ^^^^^^^^^^^^ keyword
//              ^ punctuation
    after delete,
//  ^^^^^^^^^^^^ keyword
//              ^ punctuation
    after undelete) {
//  ^^^^^^^^^^^^^^ keyword
//                ^ punctuation
//                  ^ punctuation
    Integer i = 1;
//  ^ type
//          ^ variable
//            ^ operator
//              ^ number
//               ^ punctuation
}
// <- punctuation