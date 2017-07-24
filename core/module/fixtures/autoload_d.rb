module ModuleSpecs::Autoload
  module DynModule
    class D
      def loaded
        :dynmodule_d
      end
    end
  end
end

ScratchPad.record :loaded
