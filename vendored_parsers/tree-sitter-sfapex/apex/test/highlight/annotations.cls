@Annotation(param1=false, param2='hello')
// <- operator
// ^ decorator
//         ^ punctuation
//          ^ variable
//                ^ operator
//                 ^ variable.readonly.defaultLibrary
//                      ^ punctuation
//                        ^ variable
//                              ^ operator
//                               ^ string
//                                      ^ punctuation

public class Me {{
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
//               ^ punctuation
    @InvocableVariable(required=true label='Old User')
//  ^ operator
//   ^ decorator
//                    ^ punctuation
//                     ^ variable
//                             ^ operator
//                              ^ variable.readonly.defaultLibrary
//                                   ^ variable
//                                        ^ operator
//                                         ^ string
//                                                   ^ punctuation

    public Id oldUserId;// TODO: this isn't a local variable declaration, it should be a field declaration
//  ^ keyword
//         ^ type
//            ^ variable
  }
//^ punctuation

  @Annotation('this is a test of \' strings')
//^ operator
// ^ decorator
//           ^ punctuation
//            ^ string
//                                          ^ punctuation

  public class Me {
// ^ keyword
//       ^ keyword
//             ^ class
//                ^ punctuation

  }
//^ punctuation
}
// <- punctuation