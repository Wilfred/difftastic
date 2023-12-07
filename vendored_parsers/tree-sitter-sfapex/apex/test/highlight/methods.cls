public class Me {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ punctuation
    public void method1(String param1, Integer param2){
//  ^ keyword
//         ^ type.defaultLibrary
//              ^ method
//                     ^ punctuation
//                      ^ type
//                             ^ parameter
//                                   ^ punctuation
//                                     ^ type
//                                             ^ parameter
//                                                   ^ punctuation
//                                                    ^ punctuation

        param1 = '1';
//      ^ parameter
//             ^ operator
//               ^ string
//                  ^ punctuation
        param2 = 2;
//      ^ parameter
//             ^ operator
//               ^ number
//                ^ punctuation
    }
//  ^ punctuation
    global Integer method1(Integer param1){
//  ^ keyword
//         ^ type
//                 ^ method
//                        ^ punctuation
//                         ^ type
//                                 ^ parameter
//                                       ^ punctuation
//                                        ^ punctuation
        return param1;
//      ^ keyword
//             ^ parameter
//                   ^ punctuation
    }
//  ^ punctuation
    public void helloWorld(final Integer i){
//  ^ keyword
//         ^ type.defaultLibrary
//              ^ method
//                        ^ punctuation
//                         ^ keyword
//                               ^ type
//                                       ^ parameter
//                                        ^ punctuation
//                                         ^ punctuation
        System.debug(i);
//      ^ type
//            ^ punctuation
//                  ^ punctuation
//                   ^ parameter
//                    ^ punctuation
//                     ^ punctuation
    }
//  ^ punctuation
    public testMethod void helloWorld(){
//  ^ keyword
//         ^ keyword
//                    ^ type.defaultLibrary
//                         ^ method
//                                   ^ punctuation
//                                    ^ punctuation
//                                     ^ punctuation

        System.debug(i);
    }
//  ^ punctuation
}
// <- punctuation