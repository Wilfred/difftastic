module ModuleSpecs
  module Modules
    class Klass
    end

    A = "Module"
    B = 1
    C = nil
    D = true
    E = false
  end

  module Anonymous
  end

  module IncludedInObject
    module IncludedModuleSpecs
    end
  end
end

class Object
  include ModuleSpecs::IncludedInObject
end
