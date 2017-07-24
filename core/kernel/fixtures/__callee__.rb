module KernelSpecs
  class CalleeTest
    def f
      __callee__
    end

    alias_method :g, :f

    def in_block
      (1..2).map { __callee__ }
    end

    define_method(:dm) do
      __callee__
    end

    define_method(:dm_block) do
      (1..2).map { __callee__ }
    end

    def from_send
      send "__callee__"
    end

    def from_eval
      eval "__callee__"
    end

    @@method = __callee__
    def from_class_body
      @@method
    end
  end
end
