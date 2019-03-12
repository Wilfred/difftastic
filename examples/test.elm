module Test.Char exposing (tests)

import Basics exposing (..)
import Char exposing (..)
import Expect
import List
import Test exposing (..)


lower =
    [ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ]


upper =
    [ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' ]


dec =
    [ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' ]


oct =
    List.take 8 dec


hexLower =
    List.take 6 lower


hexUpper =
    List.take 6 upper


hex =
    List.append hexLower hexUpper |> List.append dec


lowerCodes =
    List.range 97 (97 + List.length lower - 1)


upperCodes =
    List.range 65 (65 + List.length upper - 1)


decCodes =
    List.range 48 (48 + List.length dec - 1)


oneOf : List a -> a -> Bool
oneOf list e =
    List.member e list


tests : Test
tests =
    describe "Char"
        [ describe "toCode"
            [ test "a-z" <| \() -> Expect.equal lowerCodes (List.map toCode lower)
            , test "A-Z" <| \() -> Expect.equal upperCodes (List.map toCode upper)
            , test "0-9" <| \() -> Expect.equal decCodes (List.map toCode dec)
            , test "UTF-16" <| \() -> Expect.equal 0x0001D306 (Char.toCode '𝌆')
            ]
        , describe "fromCode"
            [ test "a-z" <| \() -> Expect.equal lower (List.map fromCode lowerCodes)
            , test "A-Z" <| \() -> Expect.equal upper (List.map fromCode upperCodes)
            , test "0-9" <| \() -> Expect.equal dec (List.map fromCode decCodes)
            , test "UTF-16" <| \() -> Expect.equal '𝌆' (Char.fromCode 0x0001D306)
            ]
        , describe "toLocaleLower"
            [ test "a-z" <| \() -> Expect.equal lower (List.map toLocaleLower lower)
            , test "A-Z" <| \() -> Expect.equal lower (List.map toLocaleLower upper)
            , test "0-9" <| \() -> Expect.equal dec (List.map toLocaleLower dec)
            ]
        , describe "toLocaleUpper"
            [ test "a-z" <| \() -> Expect.equal upper (List.map toLocaleUpper lower)
            , test "A-Z" <| \() -> Expect.equal upper (List.map toLocaleUpper upper)
            , test "0-9" <| \() -> Expect.equal dec (List.map toLocaleUpper dec)
            ]
        , describe "toLower"
            [ test "a-z" <| \() -> Expect.equal lower (List.map toLower lower)
            , test "A-Z" <| \() -> Expect.equal lower (List.map toLower upper)
            , test "0-9" <| \() -> Expect.equal dec (List.map toLower dec)
            ]
        , describe "toUpper"
            [ test "a-z" <| \() -> Expect.equal upper (List.map toUpper lower)
            , test "A-Z" <| \() -> Expect.equal upper (List.map toUpper upper)
            , test "0-9" <| \() -> Expect.equal dec (List.map toUpper dec)
            ]
        , describe "isLower"
            [ test "a-z" <| \() -> Expect.equal True (List.all isLower lower)
            , test "A-Z" <| \() -> Expect.equal False (List.any isLower upper)
            , test "0-9" <| \() -> Expect.equal False (List.any isLower dec)
            ]
        , describe "isUpper"
            [ test "a-z" <| \() -> Expect.equal False (List.any isUpper lower)
            , test "A-Z" <| \() -> Expect.equal True (List.all isUpper upper)
            , test "0-9" <| \() -> Expect.equal False (List.any isUpper dec)
            ]
        , describe "isDigit"
            [ test "a-z" <| \() -> Expect.equal False (List.any isDigit lower)
            , test "A-Z" <| \() -> Expect.equal False (List.any isDigit upper)
            , test "0-9" <| \() -> Expect.equal True (List.all isDigit dec)
            ]
        , describe "isHexDigit"
            [ test "a-z" <| \() -> Expect.equal (List.map (oneOf hex) lower) (List.map isHexDigit lower)
            , test "A-Z" <| \() -> Expect.equal (List.map (oneOf hex) upper) (List.map isHexDigit upper)
            , test "0-9" <| \() -> Expect.equal True (List.all isHexDigit dec)
            ]
        , describe "isOctDigit"
            [ test "a-z" <| \() -> Expect.equal False (List.any isOctDigit lower)
            , test "A-Z" <| \() -> Expect.equal False (List.any isOctDigit upper)
            , test "0-9" <| \() -> Expect.equal (List.map (oneOf oct) dec) (List.map isOctDigit dec)
            ]
        ]
