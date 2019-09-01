enum key dict =
  custom key <| \stringList ->
    case stringList of
      [str] ->
        Dict.get str dict

      _ ->
        Nothing
