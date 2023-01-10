1234 ; 01234
# ^ number
#    ^ punctuation.delimiter
#       ^ number

1.23 ; 1.23e10 ; 1.23e-10
# ^ number
#       ^ number
#                 ^ number

0xab ; 0o171 ; 0b01001
# ^ number
#       ^ number
#               ^ number

100_000_000 ; 0b1111_0000
#  ^ number
#                   ^ number

?a ; ?1 ; ?\n ; ?\s ; ?\c ; ? ; ?,
# <- constant
#    ^ constant
#          ^ constant
#                ^ constant
#                       ^ constant
#                           ^ constant
#                            ^ constant
#                                ^ constant

true ; false ; nil
# ^ constant
#       ^ constant
#               ^ constant

:this ; :that
# ^ string.special.symbol
#       ^ string.special.symbol

:'complex atom'
#  ^ string.special.symbol

:"with' \" 'quotes \u0301"
# ^ string.special.symbol
#       ^ string.escape
#        ^ string.escape
#         ^ string.special.symbol
#                   ^ string.escape
#                       ^ string.escape

:"with #{1 + 1} interpol"
#      ^ punctuation.special
#        ^ number
#          ^ operator
#            ^ number
#             ^ punctuation.special

:... ; :<<>> ; :%{} ; :% ; :{}
# ^ string.special.symbol
#      ^ string.special.symbol
#               ^ string.special.symbol
#                      ^ string.special.symbol
#                           ^ string.special.symbol

:++ ; :-- ; :* ; :~~~ ; :::
# ^ string.special.symbol
#      ^ string.special.symbol
#            ^ string.special.symbol
#                 ^ string.special.symbol
#                        ^ string.special.symbol

:% ; :. ; :<-
# <- string.special.symbol
#     ^ string.special.symbol
#          ^ string.special.symbol

"simple string"
#  ^ string
#      ^ string

"with \x{ff} code"
# ^ string
#       ^ string.escape
#        ^ string.escape
#              ^ string

"with \7 \016 \t \\s"
# ^ string
#      ^ string.escape
#         ^ string.escape
#          ^ string
#              ^ string.escape
#               ^ string
#                 ^ string.escape
#                  ^ string

"with #{inspect "inner"} interpolation"
# ^ string
#     ^ punctuation.special
#       ^ function
#               ^ string
#                      ^ punctuation.special
#                       ^ string

"Multiline
   string"
# <- string
#    ^ string

"""
Heredoc
"""
# ^ string

'charlist'
# ^ string

~s(string sigil #{1})
# <- string
# ^ string
#          ^ string
#                 ^ number

~S/string #{1}/
#         ^ string

~r/x?/iu
# <- string.regex
#  ^ string.regex
#      ^ string.regex

~R{noescapes\}[a-z]*}
# ^ string.regex
#            ^ string.escape
#             ^ string.regex

~w(hello #{ ["has" <> "123", '\c\d', "\123 interpol" | []] } world)s
#<- string.special
#  ^ string.special
#        ^ punctuation.special
#           ^ punctuation.bracket
#            ^ string
#                  ^ operator
#                     ^ string
#                          ^ punctuation.delimiter
#                            ^ string
#                             ^ string.escape
#                               ^ string.escape
#                                 ^ string
#                                  ^ punctuation.delimiter
#                                    ^ string
#                                     ^ string.escape
#                                       ^ string
#                                                    ^ operator
#                                                      ^ punctuation.bracket
#                                                       ^ punctuation.bracket
#                                                        ^ punctuation.bracket
#                                                          ^ punctuation.special
#                                                           ^ string.special

~w/yoo \\ \/ =)/
# ^ string.special
#       ^ string.escape
#          ^ string.escape
#           ^ string.special

~W/yoo \\ \/ =)/
# ^ string.special
#       ^ string.special
#          ^ string.escape
#           ^ string.special

~D/2020-01-01/d
#       ^ string.special
