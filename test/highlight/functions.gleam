pub fn replace(
  // <- keyword
  // <- keyword
  //   ^ function
  //          ^ punctuation.bracket
  in string: String,
  // <- property
  // ^ variable.parameter
  //         ^ type
  //               ^ punctuation.delimeter
  each pattern: String,
  // <- property
  //   ^ variable.parameter
  //             ^ type
  //                  ^ punctuation.delimeter
  with replacement: String,
  // <- property
  //   ^ variable.parameter
  //                ^ type
  //                      ^ punctuation.delimeter
) -> String {
  // <- punctuation.delimeter
  // ^ type
  //        ^ punctuation.bracket 
  string.replace(in: string, each: pattern, with: replacement)
  // <- variable
  //     ^ property
  //             ^ property
  //                 ^ variable
  //                         ^ property
  //                               ^ variable
  //                                        ^ property
  //                                              ^ variable
}
