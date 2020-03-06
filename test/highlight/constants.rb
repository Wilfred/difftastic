class MyClass
  #   ^ constructor

  ELEMENT8 = 8
  # ^ constant

  ELEMENT16 = 16
  # ^ constant

  def OtherClass
    #  ^ function.method

    @other.OtherClass(Something.new).inspect
    # ^ property
    #      ^ function.method
    #                 ^ constructor
    #                           ^ function.method
    #                                ^ function.method
  end
end
