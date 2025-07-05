void f(T)(string s)  if (is(T : myType)) { }
// <- type.builtin
//                        ^ keyword
//                          ^ type
//                               ^ type

bool g(char *x) { return x is null; }
// <- type.builtin
//                ^ keyword.control
//                       ^ variable
//                         ^ operator
//                            ^ constant.language

bool G(char *x) { return x !is null; }
// <- type.builtin
//                ^ keyword.control
//                       ^ variable
//                          ^ operator
//                             ^ constant.language

bool h(char *y) { return 'x' in y; }
// <- type.builtin
//                        ^ number
//                           ^ operator
//                              ^ variable

bool i(char *y) { return 'x' !in y; }
// <- type.builtin
//                        ^ number
//                            ^ operator
//                               ^ variable

