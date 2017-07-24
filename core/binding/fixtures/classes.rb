module BindingSpecs
  class Demo
    def initialize(n)
      @secret = n
    end

    def square(n)
      n * n
    end

    def get_binding_and_line
      a = true
      [binding, __LINE__]
    end

    def get_binding
      get_binding_and_line[0]
    end

    def get_line_of_binding
      get_binding_and_line[1]
    end

    def get_file_of_binding
      __FILE__
    end

    def get_empty_binding
      binding
    end

    def get_binding_in_block
      a = true
      1.times do
        b = false
        return binding
      end
    end
  end
end
