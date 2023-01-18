object Hello {
// ^ keyword 
//       ^ type
  val x = if (true) (25 * 1.0) else "hello"  
// ^keyword
//    ^variable
//         ^conditional
//             ^boolean
//                   ^number
//                        ^float    
//                                    ^string
//                              ^conditional 

  val y = new lower_case_intentionally
//        ^keyword.operator
//            ^type

  var mutation = "mutant"
//  ^keyword
//    ^variable

  trait Test {
// ^ keyword 
//       ^ type
     def meth(i: Int)(implicit x: Boolean) = ???
//    ^keyword.function  
//                       ^keyword    
//                                  ^type    
//        ^method
//                             ^parameter 
  
  val anonFun: Int => Int = (a: Int) => a
//      ^variable
//             ^type
//                 ^operator
//                    ^type
//                           ^parameter
  }

  protected abstract class Bla(test: String)
//    ^type.qualifier
//                    ^keyword
//            ^type.qualifier 
//                              ^parameter
//                                     ^type

  type Hello = "25"
  // ^keyword
  //    ^type.definition 
  //            ^string

  class A {
// ^ keyword
//      ^ type
    self: X =>
//  ^constant
//        ^type
  }

  type A = { def fly(): Unit }
//            ^keyword.function
//                ^method
//                       ^type

  type A = B[({ type f[x] = M[S, x] })#f]
//               ^keyword
//                   ^type.definition

  val hello = c"some $stuff"
//            ^function.call
//                   ^punctuation.special
}

