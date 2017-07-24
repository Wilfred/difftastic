module ConstantVisibility
  module ModuleContainer
    module PrivateModule
    end
    private_constant :PrivateModule

    class PrivateClass
    end
    private_constant :PrivateClass
  end

  class ClassContainer
    module PrivateModule
    end
    private_constant :PrivateModule

    class PrivateClass
    end
    private_constant :PrivateClass
  end

  module PrivConstModule
    PRIVATE_CONSTANT_MODULE = true
    private_constant :PRIVATE_CONSTANT_MODULE

    def self.private_constant_from_self
      PRIVATE_CONSTANT_MODULE
    end

    def self.defined_from_self
      defined? PRIVATE_CONSTANT_MODULE
    end

    module Nested
      def self.private_constant_from_scope
        PRIVATE_CONSTANT_MODULE
      end

      def self.defined_from_scope
        defined? PRIVATE_CONSTANT_MODULE
      end
    end
  end

  class PrivConstClass
    PRIVATE_CONSTANT_CLASS = true
    private_constant :PRIVATE_CONSTANT_CLASS

    def self.private_constant_from_self
      PRIVATE_CONSTANT_CLASS
    end

    def self.defined_from_self
      defined? PRIVATE_CONSTANT_CLASS
    end

    module Nested
      def self.private_constant_from_scope
        PRIVATE_CONSTANT_CLASS
      end

      def self.defined_from_scope
        defined? PRIVATE_CONSTANT_CLASS
      end
    end
  end

  class PrivConstModuleChild
    include PrivConstModule

    def private_constant_from_include
      PRIVATE_CONSTANT_MODULE
    end

    def defined_from_include
      defined? PRIVATE_CONSTANT_MODULE
    end
  end

  class PrivConstClassChild < PrivConstClass
    def private_constant_from_subclass
      PRIVATE_CONSTANT_CLASS
    end

    def defined_from_subclass
      defined? PRIVATE_CONSTANT_CLASS
    end
  end

  def self.reset_private_constants
    Object.send :private_constant, :PRIVATE_CONSTANT_IN_OBJECT
  end
end

class Object
  PRIVATE_CONSTANT_IN_OBJECT = true
  private_constant :PRIVATE_CONSTANT_IN_OBJECT
end
