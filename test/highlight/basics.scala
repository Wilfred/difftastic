object Hello {
// ^ keyword 
//       ^ type.definition
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

  trait Test {
// ^ keyword 
//       ^ type.definition
     def meth(i: Int)(implicit x: Boolean) = ???
//    ^keyword.function  
//                       ^keyword    
//                                  ^type    
//        ^method
//                             ^parameter 
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
//      ^ type.definition
    self: X =>
//  ^constant
//        ^type
  }
}

