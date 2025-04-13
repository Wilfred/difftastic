pub fn replace(
  // <- keyword
  // <- keyword
  //   ^ function
  //          ^ punctuation.bracket
  in original: String,
  // <- property
  // ^ variable.parameter
  //            ^ type
  //                 ^ punctuation.delimiter
  each pattern: String,
  // <- property
  //   ^ variable.parameter
  //             ^ type
  //                  ^ punctuation.delimiter
  with replacement: String,
  // <- property
  //   ^ variable.parameter
  //                ^ type
  //                      ^ punctuation.delimiter
) -> String {
  // <- punctuation.delimiter
  // ^ type
  //        ^ punctuation.bracket
  string.replace(in: original, each: pattern, with: replacement)
  // <- module
  //        ^ function
  //              ^ property
  //                  ^ variable.parameter
  //                            ^ property
  //                                  ^ variable.parameter
  //                                           ^ property
  //                                                 ^ variable.parameter
  original
  // ^ variable.parameter
  |> string.replace(pattern, replacement)
  // <- operator
  // ^ module
  //        ^ function
  //                ^ variable.parameter
  //                         ^ variable.parameter
}

fn record_with_fun_field(record) {
  let foo = Bar(baz: fn(x) { x + 1 })
  //        ^ constructor
  foo.baz(41)
  // <- variable
  //  ^ property
  record.foobar("hello")
  // ^ variable.parameter
  //     ^ property
  string.replace("hello", "l", "o")
  // ^ module
  //     ^ function
}

fn trial(uri) {
  //      ^ variable.parameter
  case uri {
    //  ^ variable.parameter
    Uri(scheme: None) -> True
    // <- constructor
    //  ^ property
    //          ^ constructor
    //                   ^ constructor
    _ -> False
    // <- comment.unused
  }
}

fn my_uri_to_string(my_uri) -> String {
  uri.to_string(my_uri)
  // <- module
  //   ^ function
  //             ^ variable.parameter
}

fn myfun(argument) {
  let local_fun = fn(x) { x + 1 }
  //   ^ variable
  //                 ^ variable.parameter
  //                      ^ variable.parameter

  argument
  // ^ variable.parameter
  |> local_fun
  // <- operator
  // ^ variable
  |> module_fun
  // ^ function

  module_fun(local_fun(argument))
  // ^ function
  //         ^ variable
  //                   ^ variable.parameter
}

fn negate(arg) {
  !arg
  // <- operator
  // ^ variable.parameter
}

fn comment_string_test() {
  io.println("// hello world!")
  // <- module
  // ^ function
  //            ^ string
}

fn let_assert_test() {
  let assert #(x, _) = #(1, 2)
  // <- keyword
  //  ^ keyword
}

fn assert_test() {
  assert x == add(1, 4)
  // <- keyword
  //          ^ function
}

fn punned_call_arg_test() {
  wibble(arg:, arg2:)
  // ^ function
  //      ^ property
  //            ^ property
}
