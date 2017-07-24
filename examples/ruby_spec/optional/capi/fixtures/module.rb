class Object
  autoload :CApiModuleSpecsAutoload, File.expand_path('../const_get_object.rb', __FILE__)

  module CApiModuleSpecsModuleA
    X = 1
  end
end

class CApiModuleSpecs
  class A
    autoload :B, File.expand_path('../const_get_at.rb', __FILE__)
    autoload :C, File.expand_path('../const_get_from.rb', __FILE__)
    autoload :D, File.expand_path('../const_get.rb', __FILE__)

    X = 1
  end

  class B < A
    Y = 2
  end

  class C
    Z = 3
  end

  module M
  end

  class Super
  end

  autoload :ModuleUnderAutoload, "#{object_path}/module_under_autoload_spec"
  autoload :RubyUnderAutoload, File.expand_path('../module_autoload', __FILE__)

end
