fn x, y, z ->
# <- keyword
#  ^ variable
#   ^ punctuation.delimiter
#     ^ variable
#      ^ punctuation.delimiter
#        ^ variable
#          ^ operator
  fn(a, b, c) ->
  # <- keyword
  # ^ punctuation.bracket
  #  ^ variable
  #   ^ punctuation.delimiter
  #     ^ variable
  #      ^ punctuation.delimiter
  #        ^ variable
  #         ^ punctuation.bracket
  #           ^ operator
    &(x + y - z * a / &1 + b + div(&2, c))
    #<- operator
    #^ punctuation.bracket
    # ^ variable
    #   ^ operator
    #     ^ variable
    #       ^ operator
    #         ^ variable
    #           ^ operator
    #             ^ variable
    #               ^ operator
    #                 ^ operator
    #                    ^ operator
    #                      ^ variable
    #                        ^ operator
    #                          ^ function
    #                             ^ punctuation.bracket
    #                              ^ operator
    #                                ^ punctuation.delimiter
    #                                  ^ variable
    #                                   ^ punctuation.bracket
    #                                    ^ punctuation.bracket
  end
end

fn ->
# <- keyword
#   ^ operator
end
# <- keyword

&Set.put(&1, &2)
# <- operator
# ^ module
#   ^ operator
#    ^ function
#       ^ punctuation.bracket
#        ^ operator
#          ^ punctuation.delimiter
#            ^ operator
#              ^ punctuation.bracket

&( Set.put(&1, &1) )
#<- operator
#^ punctuation.bracket
#  ^ module
#     ^ operator
#      ^ function
#         ^ punctuation.bracket
#          ^ operator
#            ^ punctuation.delimiter
#              ^ operator
#                ^ punctuation.bracket
#                  ^ punctuation.bracket
