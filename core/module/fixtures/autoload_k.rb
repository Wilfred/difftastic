module ModuleSpecs::Autoload
  class KHash < Hash
    K = :autoload_k
  end
end

ScratchPad.record :loaded
