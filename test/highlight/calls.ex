Path.expand("..", __DIR__)
# ^ type
#   ^ operator
#    ^ function
#          ^ punctuation.bracket
#           ^ string
#               ^ punctuation.delimiter
#                 ^ constant.builtin
#                        ^ punctuation.bracket

func.(1)
# ^ variable
#   ^ operator
#    ^ punctuation.bracket
#     ^ number
#      ^ punctuation.bracket

arg |> func
# ^ variable
#   ^ operator
#      ^ function

func 1
# ^ function
#    ^ number

hd([1,2])
# <- function
# ^ punctuation.bracket
#  ^ punctuation.bracket
#   ^ number
#    ^ punctuation.delimiter
#     ^ number
#      ^ punctuation.bracket
#       ^ punctuation.bracket

Kernel.spawn(fn -> :ok end)
# ^ type
#     ^ operator
#      ^ function
#           ^ punctuation.bracket
#            ^ keyword
#               ^ operator
#                  ^ string.special.symbol
#                      ^ keyword
#                         ^ punctuation.bracket

IO.ANSI.black
# ^ type
#      ^ operator
#       ^ function

Kernel.-(number)
# ^ type
#     ^ operator
#      ^ operator
#       ^ punctuation.bracket
#        ^ variable
#              ^ punctuation.bracket

Enum.map([1, 2], fn x ->
# ^ type
#   ^ operator
#    ^ function
#       ^ punctuation.bracket
#        ^ punctuation.bracket
#         ^ number
#          ^ punctuation.delimiter
#            ^ number
#             ^ punctuation.bracket
#              ^ punctuation.delimiter
#                ^ keyword
#                   ^ variable
#                     ^ operator
  x * 2
  # <- variable
  # ^ operator
  #   ^ number
end)
# <- keyword
#  ^ punctuation.bracket

:erlang.abs(-1)
# ^ type
#      ^ operator
#       ^ function
#          ^ punctuation.bracket
#           ^ operator
#            ^ number
#             ^ punctuation.bracket
