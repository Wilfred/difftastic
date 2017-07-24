module ComparableSpecs
  class WithOnlyCompareDefined
    attr_reader :value

    def initialize(value)
      @value = value
    end

    def <=>(other)
      self.value <=> other.value
    end
  end

  class Weird < WithOnlyCompareDefined
    include Comparable
  end

  class WithoutCompareDefined
    include Comparable
  end

  class CompareCallingSuper
    include Comparable

    attr_reader :calls

    def initialize
      @calls = 0
    end

    def <=>(other)
      @calls += 1
      super(other)
    end
  end
end
