/* Function/method calls     @reference.call */

extends fun callRef(self: String) {
    staticFun();
    // <- reference.call

    self.toInt();
    //   ^ reference.call
}


/* Class reference           @reference.class */

fun classRef() {
    EmptyMessage {};
    // <- @reference.class
}
