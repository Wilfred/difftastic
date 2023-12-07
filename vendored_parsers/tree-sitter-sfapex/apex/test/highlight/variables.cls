public class Me {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
  {
//^ punctuation
    List<Integer> ints = new List<Integer>();
//  ^ type
//      ^ punctuation
//       ^ type
//              ^ punctuation
//                ^ variable
//                     ^ operator
//                       ^ keyword
//                           ^ type
//                               ^ punctuation
//                                ^ type
//                                       ^ punctuation
//                                        ^ punctuation
//                                         ^ punctuation
//                                          ^ punctuation

    List<Integer> ints = new List<Integer>{1,2,3};
//  ^ type
//      ^ punctuation
//       ^ type
//              ^ punctuation
//                ^ variable
//                     ^ operator
//                       ^ keyword
//                           ^ type
//                               ^ punctuation
//                                ^ type
//                                       ^ punctuation
//                                        ^ punctuation
//                                         ^ number
//                                          ^ punctuation
//                                           ^ number
//                                            ^ punctuation
//                                             ^ number
//                                              ^ punctuation
//                                               ^ punctuation

    List<Integer> ints = new Integer[0];
//  ^ type
//      ^ punctuation
//       ^ type
//              ^ punctuation
//                ^ variable
//                     ^ operator
//                       ^ keyword
//                           ^ type
//                                  ^ punctuation
//                                   ^ number
//                                    ^ punctuation
//                                     ^ punctuation

    List<Integer> ints = new Integer[]{1,2,3};
//  ^ type
//      ^ punctuation
//       ^ type
//              ^ punctuation
//                ^ variable
//                     ^ operator
//                       ^ keyword
//                           ^ type
    Integer[] ints = new Integer[0];
//  ^ type
//         ^ punctuation
//          ^ punctuation
//            ^ variable
//                 ^ operator
//                   ^ keyword
//                       ^ type
//                              ^ punctuation
//                               ^ number
//                                ^ punctuation
//                                 ^ punctuation

    Set<Integer> ints = new Set<Integer>();
//  ^ type
//     ^ punctuation
//      ^ type
//             ^ punctuation
//               ^ variable
//                    ^ operator
//                      ^ keyword
//                          ^ type
//                             ^ punctuation
//                              ^ type
//                                     ^ punctuation
//                                      ^ punctuation
//                                       ^ punctuation
//                                        ^ punctuation

    Set<Integer> ints = new Set<Integer>{1,2,3};
//  ^ type
//     ^ punctuation
//      ^ type
//             ^ punctuation
//               ^ variable
//                    ^ operator
//                      ^ keyword
//                          ^ type
//                             ^ punctuation
//                              ^ type
//                                     ^ punctuation
//                                      ^ punctuation
//                                       ^ number
//                                        ^ punctuation
//                                         ^ number
//                                          ^ punctuation
//                                           ^ number
//                                            ^ punctuation
//                                             ^ punctuation

    Map<String,Integer> intsBymap = new Map<String,Integer>();
//  ^ type
//     ^ punctuation
//      ^ type
//            ^ punctuation
//             ^ type
//                    ^ punctuation
//                      ^ variable
//                                ^ operator
//                                  ^ keyword
//                                      ^ type
//                                         ^ punctuation
//                                          ^ type
//                                                ^ punctuation
//                                                 ^ type
//                                                        ^ punctuation
//                                                         ^ punctuation
//                                                          ^ punctuation
//                                                           ^ punctuation
    Map<String,Integer> intsBymap = new Map<String,Integer>{'hello' => 1, 'world' => 2};
//  ^ type
//     ^ punctuation
//      ^ type
//            ^ punctuation
//             ^ type
//                    ^ punctuation
//                      ^ variable
//                                ^ operator
//                                  ^ keyword
//                                      ^ type
//                                         ^ punctuation
//                                          ^ type
//                                                ^ punctuation
//                                                 ^ type
//                                                        ^ punctuation
//                                                         ^ punctuation
//                                                          ^ string
//                                                                  ^^ operator
//                                                                     ^ number
//                                                                      ^ punctuation
//                                                                        ^string
//                                                                                ^^ operator
//                                                                                   ^ number
//                                                                                    ^ punctuation
//                                                                                     ^ punctuation
    Integer i,j,k;
//  ^ type
//          ^ variable
//           ^ punctuation
//            ^ variable
//             ^ punctuation
//              ^ variable
//               punctuation
    Integer i = 0, j, k = 1;
//  ^ type
//          ^ variable
//            ^ operator
//              ^ number
//               ^ punctuation
//                 ^ variable
//                  ^ punctuation
//                    ^ variable
//                      ^ operator
//                        ^ number
//                         ^ punctuation
  }
//^ punctuation
}
// <- punctuation