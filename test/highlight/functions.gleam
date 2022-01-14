pub fn replace(
  // <- keyword
  // <- keyword
  //   ^ function
  //          ^ punctuation.bracket
  in original: String,
  // <- property
  // ^ variable.parameter
  //            ^ type
  //                 ^ punctuation.delimeter
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
  string.replace(in: original, each: pattern, with: replacement)
  // <- module
  //        ^ property
  //              ^ property
  //                  ^ variable.parameter
  //                            ^ property
  //                                  ^ variable.parameter
  //                                           ^ property
  //                                                 ^ variable.parameter
}

fn trial(uri) {
  case uri {
    Uri(scheme: None) -> True
    // <- type
    //  ^ property
    //          ^ type
    //                   ^ type
    _ -> False
  }
}
