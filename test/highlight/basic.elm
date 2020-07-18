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
-- <- local.definition
    Browser.sandbox { init = 0, update = update, view = view }
--      ^ local.reference
--              ^ local.reference
--                                          ^ local.reference


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
--        ^ local.reference
--            ^ keyword.operator.arrow.elm
--                ^ local.reference

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
-- ^ local.definition
--     ^ local.definition
    --     ^ keyword.operator.assignment.elm
    div []
        [ button [ onClick Decrement ] [ text "-" ]
        --                                    ^ punctuation.definition.string.begin.elm
        --                                     ^ string.elm
        , div [] [ text (String.fromInt model) ]
        , button [ onClick Increment ] [ text "+" ]
        ]
