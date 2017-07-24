module ConstantSpecs

  CS_SINGLETON1 = Object.new
  class << CS_SINGLETON1
    CONST = 1
    def foo
      CONST
    end
  end

  CS_SINGLETON2 = [Object.new, Object.new]
  2.times do |i|
    obj = CS_SINGLETON2[i]
    $spec_i = i
    class << obj
      CONST = ($spec_i + 1)
      def foo
        CONST
      end
    end
  end

  CS_SINGLETON3 = [Object.new, Object.new]
  2.times do |i|
    obj = CS_SINGLETON3[i]
    class << obj
      class X
        # creates <singleton class::X>
      end

      def x
        X
      end
    end
  end

  CS_SINGLETON4 = [Object.new, Object.new]
  CS_SINGLETON4_CLASSES = []
  2.times do |i|
    obj = CS_SINGLETON4[i]
    $spec_i = i
    class << obj
      class X
        CS_SINGLETON4_CLASSES << self
        CONST = ($spec_i + 1)

        def foo
          CONST
        end
      end
    end
  end

end
