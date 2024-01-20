pub type User {
  //     ^ type
  User(name: String)
  // <- constructor
  //    ^ property
  //          ^ type
}

pub fn new(name: String) {
  //        ^ variable.parameter
  User(name: name)
  //    ^ property
  //          ^ variable.parameter
}

let config = Config()
config.connection.host
// ^ variable
//       ^ property
//                 ^ property
