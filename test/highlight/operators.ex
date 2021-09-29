a ~>> b = bind(a, b)
# <- variable
#  ^ operator
#     ^ variable
#       ^ operator
#         ^ function
#             ^ punctuation.bracket
#              ^ variable
#               ^ punctuation.delimiter
#                 ^ variable
#                  ^ punctuation.bracket

a ~> b
# ^ operator

a + b
# ^ operator

... == !x && y || z
# <- variable
#   ^ operator
#      ^ operator
#       ^ variable
#         ^ operator
#            ^ variable
#              ^ operator
#                 ^ variable

x = 1 + 2.0 * 3
# <- variable
# ^ operator
#   ^ number
#     ^ operator
#       ^ number
#           ^ operator
#             ^ number

y = true and false
# <- variable
# ^ operator
#   ^ constant
#         ^ keyword
#             ^ constant

{ ^z, a } = {true, x}
# <- punctuation.bracket
# ^ operator
#  ^ variable
#   ^ punctuation.delimiter
#     ^ variable
#         ^ operator
#           ^ punctuation.bracket
#            ^ constant
#                ^ punctuation.delimiter
#                  ^ variable
#                   ^ punctuation.bracket

"hello" |> String.upcase |> String.downcase()
# ^ string
#       ^ operator
#          ^ type
#                ^ operator
#                 ^ function
#                        ^ operator
#                           ^ type
#                                 ^ operator
#                                  ^ function
