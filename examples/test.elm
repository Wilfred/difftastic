        toStringTests =
            describe "toString Tests"
                [ test "toString Int" <| \() -> Expect.equal "42" (toString 42)
                , test "toString Float" <| \() -> Expect.equal "42.52" (toString 42.52)
                , test "toString Char" <| \() -> Expect.equal "'c'" (toString 'c')
                , test "toString Char single quote" <| \() -> Expect.equal "'\\''" (toString '\'')
                , test "toString Char double quote" <| \() -> Expect.equal "'\"'" (toString '"')
                , test "toString String single quote" <| \() -> Expect.equal "\"not 'escaped'\"" (toString "not 'escaped'")
                , test "toString String double quote" <| \() -> Expect.equal "\"are \\\"escaped\\\"\"" (toString "are \"escaped\"")
                , test "toString record" <| \() -> Expect.equal "{ field = [0] }" (toString { field = [ 0 ] })
                  -- TODO
                  --, test "toString record, special case" <| \() -> Expect.equal "{ ctor = [0] }" (toString { ctor = [ 0 ] })
                ]