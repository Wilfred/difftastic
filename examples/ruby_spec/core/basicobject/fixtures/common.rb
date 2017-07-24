module BasicObjectSpecs
  class BOSubclass < BasicObject
    def self.kernel_defined?
      defined?(Kernel)
    end

    include ::Kernel
  end
end
