import gleam/io
//     ^ module
//          ^ module
//           ^ module
import animal/cat as kitty
//      ^ module
//                    ^ module

import animal/cat.{Cat, type Cat}
//                  ^ constructor
//                        ^ keyword
//                            ^ type

import wibble.{wobble} as _
//      ^ module
//              ^ function
//                        ^ comment.unused

pub fn main() {
  io.println("hello world")
  // <- module
}

type MyType {
  MyType(func: fn() -> Int)
}

fn record_access_case(param: MyType) {
  let binding = MyType(func: fn() { 42 })
  let _ = binding.func()
  //  ^ comment.unused
  //       ^ variable
  let _ = param.func()
  //  ^ comment.unused
  //       ^ variable.parameter
}

fn pipe_operator_case(string: String) {
  string
  // <- variable.parameter
  |> iodata.new
  // ^ module
  |> iodata.reverse
  // ^ module
}

fn remote_type_case() {
  gleam.Ok(1)
  // <- module
  //   ^ punctuation.delimiter
  //     ^ constructor
}

fn make_cat() -> kitty.Cat {
  //             ^ module
  //                   ^ type
  kitty.Cat(name: "Nubi")
  // ^ module
  //    ^ constructor
}

@target(erlang)
// <- attribute
// ^ attribute
//        ^ constant
pub external fn display() -> Bool = "erlang" "display"

@target(erlang)
@external(erlang, "wobble", "main")
// <- attribute
// ^ attribute
//         ^ constant
//                   ^ string
//                            string
pub fn main() -> Int

@deprecated(since: "1.2.0", replacement: wobble)
// <- attribute
// ^ attribute
//           ^ property
//                  ^ string
//                            ^ property
//                                        ^constant
pub fn wibble() { todo }
