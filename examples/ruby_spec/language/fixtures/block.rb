module BlockSpecs
  class Yielder
    def z
      yield
    end

    def m(*a)
      yield(*a)
    end

    def s(a)
      yield(a)
    end

    def r(a)
      yield(*a)
    end
  end

  # TODO: rewrite all specs that use Yield to use Yielder

  class Yield
    def splat(*args)
      yield(*args)
    end

    def two_args
      yield 1, 2
    end

    def two_arg_array
      yield [1, 2]
    end

    def yield_splat_inside_block
      [1, 2].send(:each_with_index) {|*args| yield(*args)}
    end

    def yield_this(obj)
      yield obj
    end
  end

  class OverwriteBlockVariable
    def initialize
      @y = Yielder.new
    end

    def method_missing(method, *args, &block)
      self.class.send :define_method, method do |*a, &b|
        @y.send method, *a, &b
      end

      send method, *args, &block
    end
  end
end
