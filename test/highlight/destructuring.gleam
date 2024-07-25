fn case_case(x: Option(String)) {
  //         ^ variable.parameter
  //             ^ type
  case #(x, x) {
    //   ^ variable.parameter
    //      ^ variable.parameter
    #(None, None) -> None
    // ^ constructor
    //       ^ constructor
    //                ^ constructor
    #(Some(y), Some(z)) -> #(y, z)
    // ^ constructor
    //     ^ variable
    //          ^ constructor
    //              ^ variable
    //                       ^ variable
    //                          ^ variable
  }

  // this is bound above but no longer in scope,
  // so it should be interpereted as a module
  z.foo()
  // <- module
}

fn shorthand_label_pattern_arg() {
  case todo {
    Wibble(arg1:, arg2:) -> todo
    //      ^ property
    //              ^ property
  }
}
