module BreakSpecs
  class Driver
    def initialize(ensures=false)
      @ensures = ensures
    end

    def note(value)
      ScratchPad << value
    end
  end

  class Block < Driver
    def break_nil
      note :a
      note yielding {
        note :b
        break
        note :c
      }
      note :d
    end

    def break_value
      note :a
      note yielding {
        note :b
        break :break
        note :c
      }
      note :d
    end

    def yielding
      note :aa
      note yield
      note :bb
    end

    def create_block
      note :za
      b = capture_block do
        note :zb
        break :break
        note :zc
      end
      note :zd
      b
    end

    def capture_block(&b)
      note :xa
      b
    end

    def break_in_method_captured
      note :a
      create_block.call
      note :b
    end

    def break_in_yield_captured
      note :a
      yielding(&create_block)
      note :b
    end

    def break_in_method
      note :a
      b = capture_block {
        note :b
        break :break
        note :c
      }
      note :d
      note b.call
      note :e
    end

    def call_method(b)
      note :aa
      note b.call
      note :bb
    end

    def break_in_nested_method
      note :a
      b = capture_block {
        note :b
        break :break
        note :c
      }
      note :cc
      note call_method(b)
      note :d
    end

    def break_in_yielding_method
      note :a
      b = capture_block {
        note :b
        break :break
        note :c
      }
      note :cc
      note yielding(&b)
      note :d
    end

    def method(v)
      yield v
    end

    def invoke_yield_in_while
      looping = true
      while looping
        note :aa
        yield
        note :bb
        looping = false
      end
      note :should_not_reach_here
    end

    def break_in_block_in_while
      invoke_yield_in_while do
        note :break
        break :value
        note :c
      end
    end
  end

  class Lambda < Driver
    # Cases for the invocation of the scope defining the lambda still active
    # on the call stack when the lambda is invoked.
    def break_in_defining_scope(value=true)
      note :a
      note lambda {
        note :b
        if value
          break :break
        else
          break
        end
        note :c
      }.call
      note :d
    end

    def break_in_nested_scope
      note :a
      l = lambda do
        note :b
        break :break
        note :c
      end
      note :d

      invoke_lambda l

      note :e
    end

    def invoke_lambda(l)
      note :aa
      note l.call
      note :bb
    end

    def break_in_nested_scope_yield
      note :a
      l = lambda do
        note :b
        break :break
        note :c
      end
      note :d

      invoke_yield(&l)

      note :e
    end

    def note_invoke_yield
      note :aa
      note yield
      note :bb
    end

    def break_in_nested_scope_block
      note :a
      l = lambda do
        note :b
        break :break
        note :c
      end
      note :d

      invoke_lambda_block l

      note :e
    end

    def invoke_yield
      note :aaa
      yield
      note :bbb
    end

    def invoke_lambda_block(b)
      note :aa
      invoke_yield do
        note :bb

        note b.call

        note :cc
      end
      note :dd
    end

    # Cases for the invocation of the scope defining the lambda NOT still
    # active on the call stack when the lambda is invoked.
    def create_lambda
      note :la
      l = lambda do
        note :lb
        break :break
        note :lc
      end
      note :ld
      l
    end

    def break_in_method
      note :a

      note create_lambda.call

      note :b
    end

    def break_in_block_in_method
      note :a
      invoke_yield do
        note :b

        note create_lambda.call

        note :c
      end
      note :d
    end

    def break_in_method_yield
      note :a

      invoke_yield(&create_lambda)

      note :b
    end
  end
end
