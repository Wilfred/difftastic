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

pub fn access() {
  let config = Config()
  config.connection.host
  // ^ variable
  //       ^ property
  //                 ^ property
}

pub fn record_update_shorthand_label() {
  User(..user, name:)
  // ^ constructor
  //           ^ property
}
