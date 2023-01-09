enum Test(a: Int) derives Codec:
// ^keyword   
//            ^type
//                   ^keyword
//                          ^type
//    ^type.definition
//        ^parameter
  case Test(b: String)
// ^keyword     
//               ^type
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

inline given Test = new Test {
// ^ keyword
  inline def hello(inline x: Boolean) = 
// ^ keyword
//                   ^ keyword
    inline if x then "hi" else "bye" 
    // ^keyword
    //            ^conditional
    inline x match 
    // ^keyword
      case true => 25 
      case false => 26 
}

object A:
// ^ keyword
//     ^type.definition

  ::(123)
//^function.call
//   ^number

