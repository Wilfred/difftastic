module FloatSpecs
  class CanCoerce
    def initialize(a)
      @a = a
    end

    def coerce(b)
      [self.class.new(b), @a]
    end

    def /(b)
      @a.to_i % b.to_i
    end
  end
end
