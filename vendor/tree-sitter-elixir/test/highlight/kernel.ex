for x <- 1..10, x < 5, do: {x, x}
# <- keyword
#   ^ variable
#     ^ operator
#        ^ number
#         ^ operator
#           ^ number
#             ^ punctuation.delimiter
#               ^ variable
#                 ^ operator
#                   ^ number
#                    ^ punctuation.delimiter
#                      ^ string.special.symbol
#                          ^ punctuation.bracket
#                           ^ variable
#                            ^ punctuation.delimiter
#                              ^ variable
#                               ^ punctuation.bracket

for << <<r::4, g::4, b::4, a::size(4)>> <- pixels >> do
# <- keyword
#   ^ punctuation.bracket
#      ^ punctuation.bracket
#        ^ variable
#         ^ operator
#           ^ number
#            ^ punctuation.delimiter
#              ^ variable
#               ^ operator
#                 ^ number
#                  ^ punctuation.delimiter
#                    ^ variable
#                     ^ operator
#                       ^ number
#                        ^ punctuation.delimiter
#                          ^ variable
#                           ^ operator
#                             ^ function
#                                 ^ punctuation.bracket
#                                  ^ number
#                                   ^ punctuation.bracket
#                                    ^ punctuation.bracket
#                                       ^ operator
#                                          ^ variable
#                                                 ^ punctuation.bracket
#                                                    ^ keyword
end
# <- keyword

if :this do
# <- keyword
#  ^ string.special.symbol
#        ^ keyword
  :that
  # ^ string.special.symbol
else
# <- keyword
  :otherwise
  # ^ string.special.symbol
end
# <- keyword

receive do
# ^ keyword
#       ^ keyword
  {:EXIT, _} -> :done
  # <- punctuation.bracket
  # ^ string.special.symbol
  #     ^ punctuation.delimiter
  #       ^ comment.unused
  #        ^ punctuation.bracket
  #          ^ operator
  #             ^ string.special.symbol
  { ^pid, :_ } -> nil
  # <- punctuation.bracket
  # ^ operator
  #  ^ variable
  #     ^ punctuation.delimiter
  #       ^ string.special.symbol
  #          ^ punctuation.bracket
  #            ^ operator
  #               ^ constant
  after 100 -> :no_luck
  # ^ keyword
  #     ^ number
  #         ^ operator
  #            ^ string.special.symbol
end
# <- keyword

case __ENV__.line do
# ^ keyword
#    ^ constant.builtin
#           ^ operator
#            ^ function
#                 ^ keyword
  x when is_integer(x) -> x
  # <- variable
  # ^ keyword
  #      ^ function
  #                ^ punctuation.bracket
  #                 ^ variable
  #                  ^ punctuation.bracket
  #                    ^ operator
  #                       ^ variable
  x when x in 1..12 -> -x
  # <- variable
  # ^ keyword
  #      ^ variable
  #        ^ keyword
  #           ^ number
  #            ^ operator
  #              ^ number
  #                 ^ operator
  #                    ^ operator
  #                     ^ variable
end
# <- keyword

cond do
# <- keyword
#    ^ keyword
  false -> "too bad"
  # ^ constant
  #     ^ operator
  #        ^ string
  4 > 5 -> "oops"
  # <- number
  # ^ operator
  #   ^ number
  #     ^ operator
  #        ^ string
  true -> nil
  # ^ constant
  #    ^ operator
  #       ^ constant
end
# <- keyword

raise RuntimeError, message: "This is not an error"
# ^ keyword
#     ^ module
#                 ^ punctuation.delimiter
#                   ^ string.special.symbol
#                            ^ string

import Kernel, except: [spawn: 1, +: 2, /: 2, Unless: 2]
# ^ keyword
#      ^ module
#            ^ punctuation.delimiter
#              ^ string.special.symbol
#                      ^ punctuation.bracket
#                       ^ string.special.symbol
#                              ^ number
#                               ^ punctuation.delimiter
#                                 ^ string.special.symbol
#                                    ^ number
#                                     ^ punctuation.delimiter
#                                       ^ string.special.symbol
#                                          ^ number
#                                           ^ punctuation.delimiter
#                                             ^ string.special.symbol
#                                                     ^ number
#                                                      ^ punctuation.bracket

alias Long.Module.Name, as: N0men123_and4
# ^ keyword
#     ^ module
#                     ^ punctuation.delimiter
#                       ^ string.special.symbol
#                           ^ module

use Bitwise
# ^ keyword
#   ^ module
