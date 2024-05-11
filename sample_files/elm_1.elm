module Main exposing (blue, green, list, x, y, z)


{- bar
 -}
list : List Int
list =
    [ 1, 2, 3 ]


blue : a -> String
blue =
    always "blue"


green : a -> String
green =
    always "blue"


y : Int


x =
    (*) 2 4


y : Int
y =
    (*) 2 4


z : String
z =
    "abc"


fn : () -> Int -> List String -> String
fn _ n strings =
    let
        foo : List String -> String
        foo =
            String.join (String.fromInt n)
    in
    foo strings
