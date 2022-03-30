pub type User {
  User(name: String)
  // <- type
  //    ^ property
  //          ^ type
}

pub fn new(name: String) {
  //        ^ variable.parameter
  User(name: name)
  //    ^ property
  //          ^ variable.parameter
}
