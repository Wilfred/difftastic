@interface("filled")
// <- attribute
//        ^ punctuation.bracket
//         ^ string
//                 ^ punctuation.bracket
@interface("non-filled")
// <- attribute
//        ^ punctuation.bracket
//         ^ string
//                     ^ punctuation.bracket
trait Filled with Deployable, Ownable, {
// <- keyword
//    ^ variable
//           ^ keyword
//                ^ variable
//                          ^ punctuation.delimiter
//                            ^ variable
//                                   ^ punctuation.delimiter
//                                     ^ punctuation.bracket

  const a: Int;
  // <- keyword
  //    ^ property
  //     ^ punctuation.delimiter
  //       ^ type.builtin
  //          ^ punctuation.delimiter

  b  : Int;
  // <- property
  // ^ punctuation.delimiter
  //   ^ type.builtin
  //      ^ punctuation.delimiter

  get fun c(arg1: String): Int {
  // <- keyword
  //  ^ keyword
  //      ^ function
  //       ^ punctuation.bracket
  //        ^ variable.parameter
  //            ^ punctuation.delimiter
  //              ^ type.builtin
  //                    ^ punctuation.bracket
  //                     ^ punctuation.delimiter
  //                       ^ type.builtin
  //                           ^ punctuation.bracket

    return self.b + self.a + arg1;
    // <- keyword
    //     ^ variable.builtin
    //         ^ punctuation.delimiter
    //          ^ property
    //            ^ operator
    //              ^ variable.builtin
    //                  ^ punctuation.delimiter
    //                   ^ property
    //                     ^ operator
    //                       ^ variable.parameter
    //                           ^ punctuation.delimiter

  }
  // <- punctuation.bracket

  override inline abstract fun d() {}
  // <- keyword
  //       ^ keyword
  //              ^ keyword
  //                       ^ keyword
  //                           ^ function
  //                            ^ punctuation.bracket
  //                             ^ punctuation.bracket
  //                               ^ punctuation.bracket
  //                                ^ punctuation.bracket

}
// <- punctuation.bracket
