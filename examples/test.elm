toIntResult s =
    case String.toInt s of
        Just i ->
            Ok i

        Nothing ->
            Err <| "could not convert string '" ++ s ++ "' to an Int"