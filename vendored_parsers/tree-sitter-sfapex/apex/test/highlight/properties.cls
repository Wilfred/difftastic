public class TestObject2 {
// ^ keyword
//     ^ keyword
//           ^ class
//                       ^ punctuation


   public Integer test1;
// ^ keyword
//        ^ type
//                ^ property
//                     ^ punctuation
   private Integer test1;
// ^ keyword
//         ^ type
//                 ^ property
//                      ^ punctuation
   protected Integer test1;
// ^ keyword
//           ^ type
//                   ^ property
//                        ^ punctuation
   global Integer test1;
// ^ keyword
//        ^ type
//                ^ property
//                     ^ punctuation
   Integer test1;
// ^ type
//         ^ property
//              ^ punctuation


   final Integer test1;
// ^ keyword
//       ^ type
//               ^ property
//                    ^ punctuation
   static Integer test1;
// ^ keyword
//        ^ type
//                ^ property
//                     ^ punctuation
   transient Integer test1;
// ^ keyword
//           ^ type
//                   ^ property
//                        ^ punctuation
   static transient Integer test1;
// ^ keyword
//        ^ keyword
//                  ^ type
//                          ^ property
//                               ^ punctuation
   final static Integer test1;
// ^ keyword
//       ^ keyword
//              ^ type
//                      ^ variable.readonly
//                           ^ punctuation

   public integer X { private get; set; }
// ^ keyword
//        ^ type
//                ^ property
//                  ^ punctuation
//                    ^ keyword
//                            ^ keyword
//                               ^ punctuation
//                                 ^ keyword
//                                    ^ punctuation
//                                      ^ punctuation
   global integer Y { get; public set; }
// ^ keyword
//        ^ type
//                ^ property
//                  ^ punctuation
//                    ^ keyword
//                       ^ punctuation
//                         ^ keyword
//                                ^ keyword
//                                   ^ punctuation
//                                     ^ punctuation

   public integer Z { get; protected set; }
// ^ keyword
//        ^ type
//                ^ property
//                  ^ punctuation
//                    ^ keyword
//                       ^ punctuation
//                         ^ keyword
//                                   ^ keyword
//                                      ^ punctuation
//                                        ^ punctuation

   public integer prop {
// ^ keyword
//        ^ type
//                ^ property
//                     ^ punctuation
      get { return prop; }
//    ^ keyword
//        ^ punctuation
//          ^ keyword
//                 ^ property
//                     ^ punctuation
//                       ^ punctuation
      set { prop = value; }
//    ^ keyword
//        ^ punctuation
//          ^ property
//               ^ operator
//                 ^ variable
//                      ^ punctuation
//                        ^ punctuation
   }
// ^ punctuation

   public integer prop {
// ^ keyword
//        ^ type
//                ^ property
//                     ^
      get { return prop; }
//    ^ keyword
//        ^ punctuation
//          ^ keyword
//                 ^ property
//                     ^ punctuation
//                       ^ punctuation
      set;
//    ^ keyword
//       ^ punctuation
   }
// ^ punctuation

   private static final Integer TestConst = 10;
// ^ keyword
//         ^ keyword
//                ^ keyword
//                      ^ type
//                              ^ variable.readonly
//                                        ^ operator
//                                          ^ number
//                                            ^ punctuation

   {
// ^ punctuation
       Integer i = TestConst;
//     ^ type
//             ^ variable
//               ^ operator
//                 ^ variable.readonly
   }
// ^ punctuation
}
// <- punctuation