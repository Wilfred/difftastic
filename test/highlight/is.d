void f(T)(string s)  if (is(T : myType)) { }
// <- type
//                        ^ keyword
//                          ^ type
//                               ^ type

bool g(char *x) { return x is null; }
// <- type
//                ^ keyword.control
//                       ^ variable
//                         ^ operator
//                            ^ constant.language

bool G(char *x) { return x !is null; }
// <- type
//                ^ keyword.control
//                       ^ variable
//                          ^ operator
//                             ^ constant.language

bool h(char *y) { return 'x' in y; }
// <- type
//                        ^ number
//                           ^ operator
//                              ^ variable

bool i(char *y) { return 'x' !in y; }
// <- type
//                        ^ number
//                            ^ operator
//                               ^ variable

