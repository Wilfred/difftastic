module ModuleSpecs::Autoload::FromThread
  module A
    class B
      class C
        def self.foo
          :foo
        end
      end
    end
  end
end
