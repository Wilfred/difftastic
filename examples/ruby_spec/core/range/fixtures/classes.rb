module RangeSpecs
  class TenfoldSucc
    include Comparable

    attr_reader :n

    def initialize(n)
      @n = n
    end

    def <=>(other)
      @n <=> other.n
    end

    def succ
      self.class.new(@n * 10)
    end
  end

  # Custom Range classes Xs and Ys
  class Custom
    include Comparable
    attr_reader :length

    def initialize(n)
      @length = n
    end

    def eql?(other)
      inspect.eql? other.inspect
    end
    alias :== :eql?

    def inspect
      'custom'
    end

    def <=>(other)
      @length <=> other.length
    end
  end

  class Xs < Custom # represent a string of 'x's
    def succ
      Xs.new(@length + 1)
    end

    def inspect
      'x' * @length
    end
  end

  class Ys < Custom # represent a string of 'y's
    def succ
      Ys.new(@length + 1)
    end

    def inspect
      'y' * @length
    end
  end

  class MyRange < Range
  end
end
