module Main exposing
    ( blue
    , list
    , x
    , y
    )


{- foo
 -}
list : List Int
list =
    [ 1
    , 2
    , 3
    , 4
    ]


blue : a -> String
blue =
    \_ -> "blue"


green : String
green =
    "yellow" ++ "blue"


x : Int
x =
    (*) 2 <| 4


y : Int
y =
    4 |> (*) 2


fn :
    ()
    -> Int
    -> List String
    -> ()
    -> String
fn () n strings () =
    String.join (String.fromInt n) strings
