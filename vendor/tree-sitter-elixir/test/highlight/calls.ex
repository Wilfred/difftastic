Path.expand("..", __DIR__)
# ^ module
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
# ^ module
#     ^ operator
#      ^ function
#           ^ punctuation.bracket
#            ^ keyword
#               ^ operator
#                  ^ string.special.symbol
#                      ^ keyword
#                         ^ punctuation.bracket

IO.ANSI.black
# ^ module
#      ^ operator
#       ^ function

Kernel.-(number)
# ^ module
#     ^ operator
#      ^ operator
#       ^ punctuation.bracket
#        ^ variable
#              ^ punctuation.bracket

Enum.map([1, 2], fn x ->
# ^ module
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
# ^ module
#      ^ operator
#       ^ function
#          ^ punctuation.bracket
#           ^ operator
#            ^ number
#             ^ punctuation.bracket
