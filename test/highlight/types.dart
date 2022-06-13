enum Material {
  //  ^ type
  DENIM,
  CANVAS
}

class Person {
  //   ^ type
  String name;

  Person(String name) {
    // <- type
    //    ^ type
    this.name = name;
    this.pants = new Pants<Pocket>();
    //                ^ type
    //                       ^ type
  }
  String getName() {
    // <- type
    //    ^ method
    // The above used to be 'function.method', not 'method'. Fix it?
    return this.name;

    return Material.DENIM;
  }
}

class Collections {
  static List<T> emptyList<T>() {
    return [];
  }
}

class someClass<T> {
  List<T> someMethod() {
    List<T> list = Collections.emptyList<T>();
    return list;
  }

  void anotherMethod<S>(S arg) {
    List<S> list = Collections.emptyList<S>();
  }
}
