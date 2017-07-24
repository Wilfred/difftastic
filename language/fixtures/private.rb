module Private
  class A
    def foo
      "foo"
    end

    private
    def bar
      "bar"
    end
  end

  class B
    def foo
      "foo"
    end

    private

    def self.public_defs_method; 0; end

    class C
      def baz
        "baz"
      end
    end

    class << self
      def public_class_method1; 1; end
      private
      def private_class_method1; 1; end
    end

    def bar
      "bar"
    end
  end

  module D
    private
    def foo
      "foo"
    end
  end

   class E
     include D
   end

   class G
     def foo
       "foo"
     end
   end

   class H < A
     private :foo
   end
end
