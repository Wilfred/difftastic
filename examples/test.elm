getFirstMatch state =
    case state.unvisited of
      [] ->
        Just state.value

      [""] ->
        Just state.value

      _ ->
        getFirstMatch rest

