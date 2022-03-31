fn case_case(x: Option(String)) {
  //         ^ variable.parameter
  //             ^ type
  case #(x, x) {
  //     ^ variable.parameter
  //        ^ variable.parameter
    #(None, None) -> None
    // ^ type
    //       ^ type
    //                ^ type
    #(Some(y), Some(z)) -> #(y, z)
    // ^ type
    //     ^ variable
    //          ^ type
    //              ^ variable
    //                       ^ variable
    //                          ^ variable
  }

  // this is bound above but no longer in scope,
  // so it should be interpereted as a module
  z.foo()
  // <- module
}
