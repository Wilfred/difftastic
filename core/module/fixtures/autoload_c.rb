module ModuleSpecs::Autoload
  class DynClass
    class C
      def loaded
        :dynclass_c
      end
    end
  end
end

ScratchPad.record :loaded
