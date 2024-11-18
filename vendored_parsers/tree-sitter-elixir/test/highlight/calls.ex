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

map.key1
# ^ variable
#    ^ property

map.key1.key2
# ^ variable
#    ^ property
#         ^ property

DateTime.utc_now.day
# ^ module
#         ^ function
#                 ^ property

arg |> mod.func
# ^ variable
#   ^ operator
#       ^ variable
#           ^ function

Mod.fun do
# ^ module
#   ^ function
#       ^ keyword
end
# ^ keyword

mod.fun do
# ^ variable
#   ^ function
#       ^ keyword
end
# ^ keyword
