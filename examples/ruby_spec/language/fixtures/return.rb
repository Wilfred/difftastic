module ReturnSpecs
  class Blocks
    def yielding_method
      yield
      ScratchPad.record :after_yield
    end

    def enclosing_method
      yielding_method do
        ScratchPad.record :before_return
        return :return_value
        ScratchPad.record :after_return
      end

      ScratchPad.record :after_call
    end
  end

  class NestedCalls < Blocks
    def invoking_method(&b)
      yielding_method(&b)
      ScratchPad.record :after_invoke
    end

    def enclosing_method
      invoking_method do
        ScratchPad.record :before_return
        return :return_value
        ScratchPad.record :after_return
      end
      ScratchPad.record :after_invoke
    end
  end

  class NestedBlocks < Blocks
    def enclosing_method
      yielding_method do
        yielding_method do
          ScratchPad.record :before_return
          return :return_value
          ScratchPad.record :after_return
        end
        ScratchPad.record :after_invoke1
      end
      ScratchPad.record :after_invoke2
    end
  end

  class SavedInnerBlock
    def add(&b)
      @block = b
    end

    def outer
      yield
      @block.call
    end

    def inner
      yield
    end

    def start
      outer do
        inner do
          add do
            ScratchPad.record :before_return
            return :return_value
          end
        end
      end

      ScratchPad.record :bottom_of_start

      return false
    end
  end

  class ThroughDefineMethod
    lamb = proc { |x| x.call }
    define_method :foo, lamb

    def mp(&b); b; end

    def outer
      pr = mp { return :good }

      foo(pr)
      return :bad
    end
  end

  class DefineMethod
    lamb = proc { return :good }
    define_method :foo, lamb

    def outer
      val = :bad

      # This is tricky, but works. If lamb properly returns, then the
      # return value will go into val before we run the ensure.
      #
      # If lamb's return keeps unwinding incorrectly, val will still
      # have it's old value.
      #
      # We can therefore use val to figure out what happened.
      begin
        val = foo()
      ensure
        if val != :good
          return :bad
        end
      end

      return val
    end
  end

  class MethodWithBlock
    def method1
      return [2, 3].inject 0 do |a, b|
        a + b
      end
      nil
    end

    def get_ary(count, &blk)
      count.times.to_a do |i|
        blk.call(i) if blk
      end
    end

    def method2
      return get_ary 3 do |i|
      end
      nil
    end
  end
end
