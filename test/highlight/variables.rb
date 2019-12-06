one = 1
# <- variable

def two()
  three = one
  # ^ variable
  #        ^ function.method

  four = three
  # ^ variable
  #       ^ variable

  four.each do |i|
    puts i, three, five
    #    ^ variable.parameter
    #        ^ variable (because blocks are closures)
    #               ^ function.method
  end
end
