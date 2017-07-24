module RationalSpecs
  class SubNumeric < Numeric
    def initialize(value)
      @value = Rational(value)
    end

    def to_r
      @value
    end
  end
end
