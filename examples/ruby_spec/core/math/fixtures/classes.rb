class IncludesMath
  include Math
end

module MathSpecs
  class Float < Numeric
    def initialize(value=1.0)
      @value = value
    end

    def to_f
      @value
    end
  end

  class Integer
    def to_int
      2
    end
  end

  class UserClass
  end

  class StringSubClass < String
  end

end
