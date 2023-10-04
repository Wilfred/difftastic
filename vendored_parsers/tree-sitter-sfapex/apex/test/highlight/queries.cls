public class Me {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
     {
//   ^ punctuation
          List<Account> accs =
//        ^ type
//            ^ punctuation
//             ^ type
//                    ^ punctuation
//                      ^ variable
//                           ^ operator
          [SELECT Id FROM Account WHERE Name = :('x' + 'xx')];
//        ^ punctuation
//         ^ keyword
//                ^ property
//                   ^ keyword
//                        ^ type
//                                ^ keyword
//                                      ^ property
//                                           ^ operator
//                                             ^ punctuation
//                                              ^ punctuation
//                                               ^ string
//                                                   ^ operator
//                                                      ^ string
//                                                         ^ punctuation
//                                                          ^ punctuation
//                                                           ^ punctuation

          List<Account> accs = [
//        ^ type
//            ^ punctuation
//             ^ type
//                    ^ punctuation
//                      ^ variable
//                           ^ operator
//                             ^ punctuation

               SELECT Id FROM Account
//             ^ keyword
//                    ^ property
//                       ^ keyword
//                            ^ type
                 WHERE Name = :[SELECT Name FROM Account
//               ^ keyword
//                     ^ property
//                          ^ operator
//                            ^ punctuation
//                             ^ punctuation
//                              ^ keyword
//                                     ^ property
//                                          ^ keyword
//                                               ^ type
                     WHERE Id = :A.Id].Name];
//                   ^ keyword
//                         ^ property
//                            ^ operator
//                              ^ punctuation
//                               ^ type
//                                ^ punctuation
//                                 ^ property
//                                   ^ punctuation
//                                    ^ punctuation
//                                     ^ property
//                                         ^ punctuation
//                                          ^ punctuation

          String name = [SELECT Name FROM Account
//        ^ type
//               ^ variable
//                    ^ operator
//                      ^ punctuation
//                       ^ keyword
//                              ^ property
//                                   ^ keyword
//                                        ^ type
                     WHERE Id = :A.Id][0].Name;
//                   ^ keyword
//                         ^ property
//                            ^ operator
//                              ^ punctuation
//                               ^ type
//                                ^ punctuation
//                                 ^ property
//                                   ^ punctuation
//                                    ^ punctuation
//                                     ^ number
//                                      ^ punctuation
//                                       ^ punctuation
//                                        ^ property
//                                            ^ punctuation

          Integer cnt = [SELECT COUNT() FROM Contact ALL ROWS];
//        ^ type
//                ^ variable
//                    ^ operator
//                      ^ punctuation
//                       ^ keyword
//                               ^ function
//                                   ^ punctuation
//                                    ^ punctuation
//                                      ^ keyword
//                                            ^ type
//                                                   ^^^^^^^^ keyword
//                                                           ^ punctuation
//                                                            ^ punctuation

          String a = 'A';
//        ^ type
//               ^ variable
//                 ^ operator
//                   ^ string
//                      ^ punctuation

          List<Account> accs =
//        ^ type
//            ^ punctuation
//             ^ type
//                    ^ punctuation
//                      ^ variable
//                           ^ operator
    [SELECT Id FROM Account WHERE Name = :'N'+a+'M'+'E' AND Name = 'NOPE'];
//  ^ punctuation
//   ^ keyword
//          ^ property
//             ^ keyword
//                  ^ type
//                          ^ keyword
//                                ^ property
//                                     ^ operator
//                                       ^ punctuation
//                                        ^ string
//                                           ^ operator
//                                            ^ variable
//                                             ^ operator
//                                              ^ string
//                                                 ^ operator
//                                                  ^ string
//                                                      ^ operator
//                                                          ^ property
//                                                               ^ operator
//                                                                 ^ string
//                                                                       ^ punctuation
//                                                                        ^ punctuation

          for(Account a : [SELECT Id FROM Account]){
//        ^ keyword
//           ^ punctuation
//            ^ type
//                    ^ variable
//                      ^ punctuation
//                        ^ punctuation
//                         ^ keyword
//                                ^ property
//                                   ^ keyword
//                                        ^ type
//                                               ^ punctuation
//                                                ^ punctuation
//                                                 ^ punctuation

               System.debug(a);
//             ^ type
//                   ^ punctuation
//                    ^ method
//                         ^ punctuation
//                          ^ variable
//                           ^ punctuation
//                            ^ punctuation
          }
//        ^ punctuation

          for(List<Account> accs : [SELECT Id FROM Account]){
//        ^ keyword
//           ^ punctuation
//            ^ type
//                ^ punctuation
//                 ^ type
//                        ^ punctuation
//                          ^ variable
//                               ^ punctuation
//                                 ^ punctuation
//                                  ^ keyword
//                                         ^ property
//                                            ^ keyword
//                                                 ^ type
//                                                        ^ punctuation
//                                                         ^ punctuation
//                                                          ^ punctuation

               for(Account a : accs){
//             ^ keyword
//                ^ punctuation
//                 ^ type
//                         ^ variable
//                           ^ punctuation
//                             ^ variable
//                                 ^ punctuation
//                                  ^ punctuation
                    System.debug(a);
//                  ^ type
//                        ^ punctuation
//                         ^ method
//                              ^ punctuation
//                               ^ variable
//                                ^ punctuation
//                                 ^ punctuation
               }
//             ^ punctuation
          }
//        ^ punctuation

          List<List<SObject>> res =
//        ^ type
//            ^ punctuation
//             ^ type
//                 ^ punctuation
//                  ^ type
//                         ^ punctuation
//                          ^ punctuation
//                            ^ variable
//                                ^ operator

               [FIND :myString1 IN ALL FIELDS
//             ^ punctuation
//              ^ keyword
//                   ^ punctuation
//                    ^variable
//                              ^^^^^^^^^^^^^ keyword
                                  RETURNING
//                                ^ keyword
                                     Account (Id, Name WHERE Name LIKE :myString2
//                                   ^ type
//                                           ^ punctuation
//                                            ^ property
//                                              ^ punctuation
//                                                ^ property
//                                                     ^ keyword
//                                                           ^ property
//                                                                ^ operator
//                                                                     ^ punctuation
//                                                                      ^ variable
                                              LIMIT :myInt3),
//                                            ^ keyword
//                                                  ^ punctuation
//                                                   ^ variable
                                     Contact,
//                                   ^ type
//                                          ^ punctuation
                                     Opportunity,
//                                   ^ type
//                                              ^ punctuation
                                     Lead
//                                   ^ type
                                  WITH DIVISION =:myString4
//                                ^ keyword
//                                     ^ keyword
//                                              ^ operator
//                                               ^ punctuation
//                                                ^ variable
                                  LIMIT :myInt5];
//                                ^ keyword
//                                      ^ punctuation
//                                       ^ variable
//                                             ^ punctuation
//                                              ^ punctuation
     }
//   ^ punctuation
}
// <- punctuation