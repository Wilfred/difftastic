public class Me extends You {
// <- keyword
//     ^ keyword
//           ^ class
//              ^ keyword
//                      ^ class
//                          ^ punctuation

  private String world;
//^ keyword
//        ^ type
//               ^ property

  public Me() {
//^ keyword
//       ^ class
//         ^ punctuation
//          ^ punctuation

    this('foo');
//  ^ variable.defaultLibrary
//      ^ punctuation
//       ^ string
//            ^ punctuation
//             ^ punctuation
  }
//^ punctuation

  private Me(String hello){
//^ keyword
//        ^ class
//          ^ punctuation
//           ^ type
//                  ^ variable
//                       ^ punctuation
//                        ^ punctuation
    super(hello);
//  ^ function.defaultLibrary
//       ^ punctuation
//        ^ variable
//             ^ punctuation
//              ^ punctuation

    this.world = hello;
//  ^ variable.defaultLibrary
//      ^ punctuation
//       ^ property
//             ^ operator
//               ^ variable
  }
//^ punctuation
}
// <- punctuation