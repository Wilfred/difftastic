module VariablesSpecs
  class ParAsgn
    attr_accessor :x

    def initialize
      @x = 0
    end

    def inc
      @x += 1
    end

    def to_ary
      [1,2,3,4]
    end
  end

  class OpAsgn
    attr_accessor :a, :b, :side_effect

    def do_side_effect
      self.side_effect = true
      return @a
    end

    def do_more_side_effects
      @a += 5
      self
    end

    def do_bool_side_effects
      @b += 1
      self
    end
  end

  class Hashalike
    def [](k) k end
    def []=(k, v) [k, v] end
  end

  def self.reverse_foo(a, b)
    return b, a
  end

  class ArrayLike
    def initialize(array)
      @array = array
    end

    def to_a
      @array
    end
  end

  class ArraySubclass < Array
  end

  class PrivateMethods
    private

    def to_ary
      [1, 2]
    end

    def to_a
      [3, 4]
    end
  end

  class ToAryNil
    def to_ary
    end
  end

  class Chain
    def self.without_parenthesis a
      a
    end
  end

  def self.false
    false
  end
end
