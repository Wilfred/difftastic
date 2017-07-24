module YieldSpecs
  class Yielder
    def z
      yield
    end

    def ze(&block)
      block = proc { block }
      yield
    end

    def s(a)
      yield(a)
    end

    def m(a, b, c)
      yield(a, b, c)
    end

    def r(a)
      yield(*a)
    end

    def rs(a, b, c)
      yield(a, b, *c)
    end

    def self.define_deep(&inned_block)
      define_method 'deep' do |v|
        # should yield to inner_block
        yield v
      end
    end

    define_deep { |v| v * 2}
  end
end
