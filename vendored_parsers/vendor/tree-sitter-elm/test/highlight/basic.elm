module Main exposing (Msg(..), main, update, view)
-- ^ keyword.other.elm
--              ^ keyword.other.elm

import Browser
-- ^ meta.import.elm
import Html exposing (Html, button, div, text)
-- ^ meta.import.elm
import Html.Events exposing (onClick)
-- ^ meta.import.elm


main =
    Browser.sandbox { init = 0, update = update, view = view }


type Msg
-- <- @keyword.type.elm
--    ^ @storage.type.elm
    = Increment
    -- ^ union.elm
    | Decrement
    -- ^ union.elm

update : Msg -> Model
-- <- function.elm
--     ^ keyword.other.elm
--            ^ keyword.operator.arrow.elm

update msg model =
    case msg of
    --       ^ keyword.control.elm
        Increment ->
                -- ^ keyword.operator.arrow.elm
            model + 1
            --    ^ keyword.operator.elm

        Decrement ->
            model - 1
            --      ^ constant.numeric.elm

view model =
    --     ^ keyword.operator.assignment.elm
    div []
        [ button [ onClick Decrement ] [ text "-" ]
        --                                    ^ string.elm
        --                                     ^ string.elm
        , div [] [ text (String.fromInt model) ]
        , button [ onClick Increment ] [ text "+" ]
        ]
