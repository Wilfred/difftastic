import java.time.Instant
//^include
//     ^namespace
//               ^type
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
//                            ^parameter 
  
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
//  ^parameter
//        ^type
  }

  type A = { def fly(): Unit }
//            ^keyword.function
//                ^method
//                       ^type

  type A = B[({ type f[x] = M[S, x] })#f]
//               ^keyword
//                   ^type.definition

  val hello = c"some $mutation ${1}"
//            ^function.call
//                   ^punctuation.special
//                     ^variable
//                               ^number
  def meth = ???
//     ^method
  val hello2 = c"some $meth"
//                      ^method
  val hello3 = s"$$$meth$hello2%"
//               ^string
//                 ^punctuation.special
//                  ^method
//                      ^punctuation.special
//                       ^variable
//                             ^string
  val hello4 = s"$"$hello3"
//               ^string
//                 ^punctuation.special
//                  ^variable
}

