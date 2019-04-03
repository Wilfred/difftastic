enum =
    \stringList ->
        case stringList of
            [ str ] ->
                get str dict

            _ ->
                Nothing
