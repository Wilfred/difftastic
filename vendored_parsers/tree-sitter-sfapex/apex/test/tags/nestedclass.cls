global class ParentClass {
//           ^ definition.class

    private String method1(Integer i){
//                 ^ definition.method
        return i;
    }

    public class InnerClass1 {
//               ^ definition.class
        public void innerMethod1(){}
//                  ^ definition.method

        private void innerMethod2(){}
//                   ^ definition.method
    }

    private class InnerClass2 {
//                ^ definition.class
        public void innerMethod1(){}
//                  ^ definition.method

        private void innerMethod3(){}
//                   ^ definition.method
    }

}