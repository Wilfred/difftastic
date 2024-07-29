
int i = 1234;
// <- type.builtin
//  ^ variable
//    ^ operator
//       ^ number

string s = "abcd";
// <- type.builtin
//     ^ variable
//       ^ operator
//          ^ string

string qs = q{one two};
// <- type.builtin
//     ^ variable
//        ^ operator
//           ^ string

float f = 1.2e24;
// <- type.builtin
//    ^ variable
//      ^ operator
//          ^ number

wchar esc = '\x1b';
// <- type.builtin
//    ^ variable
//        ^ operator
//           ^ number
