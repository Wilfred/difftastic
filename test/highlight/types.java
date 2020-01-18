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
