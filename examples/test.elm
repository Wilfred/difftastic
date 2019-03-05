isUpper : Char -> Bool
isUpper char =
  let
    code =
      toCode char
  in
    code <= 0x5A && 0x41 <= code