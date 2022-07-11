fn record_with_fun_field(record) {
  let foo = Bar(baz: fn(x) { x + 1 })
  //         ^ reference.constructor
  foo.baz(41)
  record.foobar("hello")

  string.replace("hello", "l", "o")
  // ^ reference.module
  //     ^ reference.function
}
