module EnumerableSpecs

  class Numerous
    include Enumerable
    def initialize(*list)
      @list = list.empty? ? [2, 5, 3, 6, 1, 4] : list
    end

    def each
      @list.each { |i| yield i }
    end
  end

  class NumerousWithSize < Numerous
    def size
      @list.size
    end
  end

  class EachCounter < Numerous
    attr_reader :times_called, :times_yielded, :arguments_passed
    def initialize(*list)
      super(*list)
      @times_yielded = @times_called = 0
    end

    def each(*arg)
      @times_called += 1
      @times_yielded = 0
      @arguments_passed = arg
      @list.each do |i|
        @times_yielded +=1
        yield i
      end
    end
  end

  class Empty
    include Enumerable
    def each
    end
  end

  class EmptyWithSize
    include Enumerable
    def each
    end
    def size
      0
    end
  end

  class ThrowingEach
    include Enumerable
    def each
      raise "from each"
    end
  end

  class NoEach
    include Enumerable
  end

  # (Legacy form rubycon)
  class EachDefiner

    include Enumerable

    attr_reader :arr

    def initialize(*arr)
      @arr = arr
    end

    def each
      i = 0
      loop do
        break if i == @arr.size
        yield @arr[i]
        i += 1
      end
    end

  end

  class SortByDummy
    def initialize(s)
      @s = s
    end

    def s
      @s
    end
  end

  class ComparesByVowelCount

    attr_accessor :value, :vowels

    def self.wrap(*args)
      args.map {|element| ComparesByVowelCount.new(element)}
    end

    def initialize(string)
      self.value = string
      self.vowels = string.gsub(/[^aeiou]/, '').size
    end

    def <=>(other)
      self.vowels <=> other.vowels
    end

  end

  class InvalidComparable
    def <=>(other)
      "Not Valid"
    end
  end

  class ArrayConvertable
    attr_accessor :called
    def initialize(*values)
      @values = values
    end

    def to_a
      self.called = :to_a
      @values
    end

    def to_ary
      self.called = :to_ary
      @values
    end
  end

  class EnumConvertable
    attr_accessor :called
    attr_accessor :sym
    def initialize(delegate)
      @delegate = delegate
    end

    def to_enum(sym)
      self.called = :to_enum
      self.sym = sym
      @delegate.to_enum(sym)
    end

    def respond_to_missing?(*args)
      @delegate.respond_to?(*args)
    end
  end

  class Equals
    def initialize(obj)
      @obj = obj
    end
    def ==(other)
      @obj == other
    end
  end

  class YieldsMulti
    include Enumerable
    def each
      yield 1,2
      yield 3,4,5
      yield 6,7,8,9
    end
  end

  class YieldsMultiWithFalse
    include Enumerable
    def each
      yield false,2
      yield false,4,5
      yield false,7,8,9
    end
  end

  class YieldsMultiWithSingleTrue
    include Enumerable
    def each
      yield false,2
      yield true,4,5
      yield false,7,8,9
    end
  end

  class YieldsMixed
    include Enumerable
    def each
      yield 1
      yield [2]
      yield 3,4
      yield 5,6,7
      yield [8,9]
      yield nil
      yield []
    end
  end

  class YieldsMixed2
    include Enumerable

    def self.first_yields
      [nil, 0, 0, 0, 0, nil, :default_arg, [], [], [0], [0, 1], [0, 1, 2]]
    end

    def self.gathered_yields
      [nil, 0, [0, 1], [0, 1, 2], [0, 1, 2], nil, :default_arg, [], [], [0], [0, 1], [0, 1, 2]]
    end

    def self.gathered_yields_with_args(arg, *args)
      [nil, 0, [0, 1], [0, 1, 2], [0, 1, 2], nil, arg, args, [], [0], [0, 1], [0, 1, 2]]
    end

    def self.greedy_yields
      [[], [0], [0, 1], [0, 1, 2], [0, 1, 2], [nil], [:default_arg], [[]], [[]], [[0]], [[0, 1]], [[0, 1, 2]]]
    end

    def each(arg=:default_arg, *args)
      yield
      yield 0
      yield 0, 1
      yield 0, 1, 2
      yield(*[0, 1, 2])
      yield nil
      yield arg
      yield args
      yield []
      yield [0]
      yield [0, 1]
      yield [0, 1, 2]
    end
  end

  class ReverseComparable
    include Comparable
    def initialize(num)
      @num = num
    end

    attr_accessor :num

    # Reverse comparison
    def <=>(other)
      other.num <=> @num
    end
  end

  class ComparableWithFixnum
    include Comparable
    def initialize(num)
      @num = num
    end

    def <=>(fixnum)
      @num <=> fixnum
    end
  end

  class Uncomparable
    def <=>(obj)
      nil
    end
  end

  class Undupable
    attr_reader :initialize_called, :initialize_dup_called
    def dup
      raise "Can't, sorry"
    end

    def clone
      raise "Can't, either, sorry"
    end

    def initialize
      @initialize_dup = true
    end

    def initialize_dup(arg)
      @initialize_dup_called = true
    end
  end

  class Freezy
    include Enumerable

    def each
      yield 1
      yield 2
    end

    def to_a
      super.freeze
    end
  end

  class MapReturnsEnumerable
    include Enumerable

    class EnumerableMapping
      include Enumerable

      def initialize(items, block)
        @items = items
        @block = block
      end

      def each
        @items.each do |i|
          yield @block.call(i)
        end
      end
    end

    def each
      yield 1
      yield 2
      yield 3
    end

    def map(&block)
      EnumerableMapping.new(self, block)
    end
  end
end # EnumerableSpecs utility classes
