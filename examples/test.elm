isBadProjectName : String -> Bool
isBadProjectName project =
  case String.uncons project of
    Nothing ->
      True

    Just (c,_) ->
      String.contains "--" project
      || String.any isBadChar project
      || String.startsWith "-" project
      || not (Char.isLower c)
