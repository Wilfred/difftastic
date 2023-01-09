enum Test(a: Int) derives Codec:
// ^keyword   
//            ^type
//                   ^keyword
//                          ^type
//    ^type.definition
//        ^parameter
  case Test(b: String)
// ^keyword     ^type
//      ^type.definition
//          ^parameter
  case Hello, Bla
//      ^type.definition
//             ^type.definition
  case Bla extends Test(256)
//          ^keyword

opaque type Blow <: Int = 25
// ^type.qualifier
//      ^keyword     
//                   ^type     
//            ^type.definition
