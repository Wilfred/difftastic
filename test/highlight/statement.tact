extends fun c(self: SomeMessage): Int {
// <- keyword
//      ^ keyword
//          ^ function
//           ^ punctuation.bracket
//            ^ variable.parameter
//                ^ punctuation.delimiter
//                  ^ type
//                             ^ punctuation.bracket
//                              ^ punctuation.delimiter
//                                ^ type.builtin
//                                    ^ punctuation.bracket
    let a: map<Int, Int> = null;
    // <- keyword
    //  ^ variable
    //   ^ punctuation.delimiter
    //     ^ type.builtin
    //        ^ punctuation.bracket
    //         ^ type.builtin
    //            ^ punctuation.delimiter
    //              ^ type.builtin
    //                 ^ punctuation.bracket
    //                   ^ operator
    //                     ^ constant.builtin
    //                         ^ punctuation.delimiter

    {  }
    // <- punctuation.bracket
    // ^ punctuation.bracket
    
    {
        let b: Int = 20;
        // <- keyword
        //  ^ variable
        //   ^ punctuation.delimiter
        //     ^ type.builtin
        //         ^ operator
        //           ^ number
        //             ^ punctuation.delimiter

        b  = 15;
        // <- variable
        // ^ operator
        //   ^ number
        //     ^ punctuation.delimiter

        b += 32;
        // <- variable
        // ^ operator

    }

    self.description = "Tact is awesome!";
    // <- variable.parameter
    //  ^ punctuation.delimiter
    //   ^ property
    //               ^ operator
    //                 ^ string
    //                      ^ string
    //                                   ^ punctuation.delimiter

    self.description.description = "It really is!";
    // <- variable.parameter
    //   ^ property
    //               ^ property

    if (true) {}
    // <- keyword
    // ^ punctuation.bracket
    //  ^ constant.builtin
    //      ^ punctuation.bracket
    //        ^ punctuation.bracket
    //         ^ punctuation.bracket
    
    if (false) {}
    //  ^ constant.builtin
    else {}
    // <- keyword
    //   ^ punctuation.bracket
    //    ^ punctuation.bracket

    if (false) {}
    else if (true) {}
    //   ^ keyword
    //      ^ punctuation.bracket
    //       ^ constant.builtin
    //           ^ punctuation.bracket
    //             ^ punctuation.bracket
    //              ^ punctuation.bracket

    while (false) {}
    // <- keyword
    //    ^ punctuation.bracket
    //     ^ constant.builtin
    //          ^ punctuation.bracket
    //            ^ punctuation.bracket
    //             ^ punctuation.bracket

    repeat (5) {}
    // <- keyword
    //     ^ punctuation.bracket
    //      ^ number
    //       ^ punctuation.bracket
    //         ^ punctuation.bracket
    //          ^ punctuation.bracket

    do {}
    // <- keyword
    // ^ punctuation.bracket
    //  ^ punctuation.bracket
    until (false);
    // <- keyword
    //    ^ punctuation.bracket
    //     ^ constant.builtin
    //          ^ punctuation.bracket
    //           ^ punctuation.delimiter

    try {}
    // <- keyword
    //  ^ punctuation.bracket
    //   ^ punctuation.bracket

    try {} catch (e) {}
    // <- keyword
    //  ^ punctuation.bracket
    //   ^ punctuation.bracket
    //     ^ keyword
    //           ^ punctuation.bracket
    //            ^ variable
    //             ^ punctuation.bracket
    //               ^ punctuation.bracket
    //                ^ punctuation.bracket

    foreach (k, v in a) {}
    // <- keyword
    //      ^ punctuation.bracket
    //       ^ variable
    //        ^ punctuation.delimiter
    //          ^ variable
    //            ^ keyword
    //               ^ variable
    //                ^ punctuation.bracket
    //                  ^ punctuation.bracket
    //                   ^ punctuation.bracket

    0  ;
    // <- number
    // ^ punctuation.delimiter

    return 0;
    // <- keyword
    //     ^ number
    //      ^ punctuation.delimiter
}
// <- punctuation.bracket
