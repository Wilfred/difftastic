public class Me {
//           ^ definition.class
    {
        Database.insert(null);
//               ^^^^^^ reference.call

        You y = new You();
//      ^ reference.class
//                  ^^^ reference.class

        y.method1();
//        ^ reference.call
    }
}