contract Empty {}
// <- keyword
//       ^ variable
//             ^ punctuation.bracket
//              ^ punctuation.bracket

contract Filled {
 init() {}
 // <- function
 //  ^ punctuation.bracket
 //   ^ punctuation.bracket
 //     ^ punctuation.bracket
 //      ^ punctuation.bracket

 receive() {}
 // <- function

 external() {}
 // <- function

 bounced(msg: Slice) {}
 // <- function
 //      ^ variable.parameter
 //         ^ punctuation.delimiter
 //           ^ type.builtin
}
