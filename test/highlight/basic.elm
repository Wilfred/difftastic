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
    -- ^ constant.type-constructor.elm
    | Decrement
    -- ^ constant.type-constructor.elm

update : Msg -> Model
-- <- entity.name.function.elm
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
        --                                    ^ punctuation.definition.string.begin.elm
        --                                     ^ string.elm
        , div [] [ text (String.fromInt model) ]
        , button [ onClick Increment ] [ text "+" ]
        ]
