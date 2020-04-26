enum Material {
  //  ^ type
  DENIM,
  CANVAS
}

class Person {
  //   ^ type

  Person(string name) {
    // <- type
    //    ^ type
    this.name = name;
    this.pants = new Pants<Pocket>();
    //                ^ type
    //                       ^ type
  }
  string getName() {
    // <- type
    //    ^ function.method
    return this.name;

    return Material.DENIM;
    //      ^ type
  }
}
class Collections {
  static List<T> emptyList<T>() {
    return [];
  }
}
class someClass <T> {
  List<T> someMethod() {
    List< T > list = Collections.emptyList<T>();
    return list;
  }
  void anotherMethod<S>(S arg) {
  List< S > list = Collections.emptyList<S>();
  }
}
