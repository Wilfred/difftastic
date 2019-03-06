
routeToString : Route -> String
routeToString page =
    let
        pieces =
            case page of
                Home ->
                    []

                Root ->
                    []
    in
    "#/" ++ String.join "/" pieces
