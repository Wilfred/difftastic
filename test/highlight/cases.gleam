pub fn case_with_remainder() {
  case todo {
    _ if 1 % 2 == 0 -> todo
    //   ^ number
    //     ^ operator
    //       ^ number
    //         ^ operator
    //            ^ number
    _ -> todo
  }
}
