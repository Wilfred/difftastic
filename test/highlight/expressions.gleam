case "12345" {
  "123" <> rest -> rest
  // <- string
  //    ^ operator
  //        ^ variable
  _ -> ""
  //   ^ string
}
