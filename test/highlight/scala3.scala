enum Test(a: Int):
// ^keyword   ^type
//    ^type.definition
//        ^parameter
  case Test(b: String)
// ^keyword     ^type
//      ^type.definition
//          ^parameter
  case Hello, Bla
//      ^type.definition
//             ^type.definition

opaque type Blow <: Int = 25
// ^type.qualifier
//      ^keyword     
//                   ^type     
//            ^type.definition
