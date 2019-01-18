module Main exposing (main)


main : Program () () ()
main =
    Browser.element
        { init = always ( (), Cmd.none )
        , subscriptions = always Sub.none
        , update = always (always ( (), Cmd.none ))
        , view = always (text "Hello World")
        }
