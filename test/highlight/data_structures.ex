<<1, 2, 3>>
# <- punctuation.bracket
# ^ number
#  ^ punctuation.delimiter
#    ^ number
#     ^ punctuation.delimiter
#       ^ number
#        ^ punctuation.bracket

<< header :: size(8), data :: binary >>
# <- punctuation.bracket
#  ^ variable
#         ^ operator
#            ^ function
#                ^ punctuation.bracket
#                 ^ number
#                  ^ punctuation.bracket
#                   ^ punctuation.delimiter
#                     ^ variable
#                           ^ operator
#                              ^ variable
#                                     ^ punctuation.bracket

<<"hello"::binary, c :: utf8, x::[4, unit(2)]>> = "hello™1"
# <- punctuation.bracket
# ^ string
#        ^ operator
#          ^ variable
#                ^ punctuation.delimiter
#                  ^ variable
#                    ^ operator
#                       ^ variable
#                           ^ punctuation.delimiter
#                             ^ variable
#                              ^ operator
#                                ^ punctuation.bracket
#                                 ^ number
#                                  ^ punctuation.delimiter
#                                    ^ function
#                                        ^ punctuation.bracket
#                                         ^ number
#                                          ^ punctuation.bracket
#                                           ^ punctuation.bracket
#                                            ^ punctuation.bracket
#                                               ^ operator
#                                                   ^ string

[1, :a, 'hello'] ++ [2, 3]
# <- punctuation.bracket
# ^ punctuation.delimiter
#   ^ string.special.symbol
#     ^ punctuation.delimiter
#       ^ string
#              ^ punctuation.bracket
#                ^ operator
#                   ^ punctuation.bracket
#                    ^ number
#                     ^ punctuation.delimiter
#                       ^ number
#                        ^ punctuation.bracket

[:head | [?t, ?a]]
# <- punctuation.bracket
# ^ string.special.symbol
#      ^ operator
#        ^ punctuation.bracket
#          ^ constant
#           ^ punctuation.delimiter
#              ^ constant
#               ^ punctuation.bracket
#                ^ punctuation.bracket

{:one, 2.0, "three"}
# <- punctuation.bracket
# ^ string.special.symbol
#    ^ punctuation.delimiter
#      ^ number
#         ^ punctuation.delimiter
#           ^ string
#                  ^ punctuation.bracket

[option: "value", key: :word]
# <- punctuation.bracket
# ^ string.special.symbol
#        ^ string
#               ^ punctuation.delimiter
#                 ^ string.special.symbol
#                       ^ string.special.symbol
#                           ^ punctuation.bracket

[++: "operator", ~~~: :&&&]
# <- punctuation.bracket
# ^ string.special.symbol
#    ^ string
#              ^ punctuation.delimiter
#                ^ string.special.symbol
#                     ^ string.special.symbol
#                         ^ punctuation.bracket

[...: 1, <<>>: 2, %{}: 3, %: 4, {}: 5]
# <- punctuation.bracket
# ^ string.special.symbol
#     ^ number
#      ^ punctuation.delimiter
#        ^ string.special.symbol
#              ^ number
#               ^ punctuation.delimiter
#                  ^ string.special.symbol
#                      ^ number
#                       ^ punctuation.delimiter
#                          ^ string.special.symbol
#                            ^ number
#                             ^ punctuation.delimiter
#                                ^ string.special.symbol
#                                   ^ number
#                                    ^ punctuation.bracket

["this is an atom too": 1, "so is #{1} this": 2]
# <- punctuation.bracket
# ^ string.special.symbol
#                       ^ number
#                        ^ punctuation.delimiter
#                          ^ string.special.symbol
#                                 ^ punctuation.special
#                                   ^ number
#                                    ^ punctuation.special
#                                             ^ number
#                                              ^ punctuation.bracket

%{shortcut: "syntax"}
#<- punctuation
#^ punctuation.bracket
# ^ string.special.symbol
#           ^ string
#                   ^ punctuation.bracket

%{map | "update" => "me"}
#<- punctuation
#^ punctuation.bracket
# ^ variable
#     ^ operator
#       ^ string
#                ^ operator
#                   ^ string
#                       ^ punctuation.bracket

%{ 12 => 13, :weird => ['thing'] }
#<- punctuation
#^ punctuation.bracket
#  ^ number
#     ^ operator
#        ^ number
#          ^ punctuation.delimiter
#             ^ string.special.symbol
#                   ^ operator
#                      ^ punctuation.bracket
#                       ^ string
#                              ^ punctuation.bracket
#                                ^ punctuation.bracket

%Long.Module.Name{name: "Silly"}
# <- punctuation
# ^ type
#    ^ type
#                ^ punctuation.bracket
#                 ^ string.special.symbol
#                       ^ string
#                              ^ punctuation.bracket

%Long.Module.Name{s | height: {192, :cm}}
# <- punctuation
# ^ type
#                ^ punctuation.bracket
#                 ^ variable
#                   ^ operator
#                     ^ string.special.symbol
#                             ^ punctuation.bracket
#                              ^ number
#                                 ^ punctuation.delimiter
#                                   ^ string.special.symbol
#                                      ^ punctuation.bracket
#                                       ^ punctuation.bracket

".. #{%Long.Module.Name{s | height: {192, :cm}}} .."
# ^ string
#   ^ punctuation.special
#     ^ punctuation
#      ^ type
#                      ^ punctuation.bracket
#                       ^ variable
#                         ^ operator
#                           ^ string.special.symbol
#                                   ^ punctuation.bracket
#                                    ^ number
#                                       ^ punctuation.delimiter
#                                         ^ string.special.symbol
#                                            ^ punctuation.bracket
#                                             ^ punctuation.bracket
#                                              ^ punctuation.special
#                                               ^ string
