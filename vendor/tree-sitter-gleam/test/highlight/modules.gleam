import gleam/io
//     ^ module
//          ^ module
//           ^ module
import animal/cat as kitty
//      ^ module
//                    ^ module

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
