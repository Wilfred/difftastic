contract Empty {}
// <- keyword
//       ^ variable
//             ^ punctuation.bracket
//              ^ punctuation.bracket

contract Filled {
 init() {}
 // <- function.method
 //  ^ punctuation.bracket
 //   ^ punctuation.bracket
 //     ^ punctuation.bracket
 //      ^ punctuation.bracket

 receive() {}
 // <- function.method

 external() {}
 // <- function.method

 bounced(msg: Slice) {}
 // <- function.method
 //      ^ variable.parameter
 //         ^ punctuation.delimiter
 //           ^ type.builtin
}
