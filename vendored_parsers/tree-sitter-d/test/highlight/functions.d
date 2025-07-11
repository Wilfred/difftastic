int fun(void) {
// <- type.builtin
//  ^ function
//     ^ punctuation.bracket
//       ^ type.builtin
//          ^ punctuation.bracket
//            ^ punctuation.bracket


    func();
//  ^ function

    func!tparm();
//  ^function
//       ^variable.parameter

    func!uint();
//  ^function
//       ^type.builtin

    func!int();
//  ^function
//       ^type.builtin

}
