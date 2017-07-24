module ClassSpecs

  def self.sclass_with_block
    class << self
      yield
    end
  end

  def self.sclass_with_return
    class << self
      return :inner
    end
    return :outer
  end

  class A; end

  def self.string_class_variables(obj)
    obj.class_variables.map { |x| x.to_s }
  end

  def self.string_instance_variables(obj)
    obj.instance_variables.map { |x| x.to_s }
  end

  class B
    @@cvar = :cvar
    @ivar = :ivar

  end

  class C
    def self.make_class_variable
      @@cvar = :cvar
    end

    def self.make_class_instance_variable
      @civ = :civ
    end
  end

  class D
    def make_class_variable
      @@cvar = :cvar
    end
  end

  class E
    def self.cmeth() :cmeth end
    def meth() :meth end

    class << self
      def smeth() :smeth end
    end

    CONSTANT = :constant!
  end

  class F; end
  class F
    def meth() :meth end
  end
  class F
    def another() :another end
  end

  class G
    def override() :nothing end
    def override() :override end
  end

  class Container
    class A; end
    class B; end
  end

  O = Object.new
  class << O
    def smeth
      :smeth
    end
  end

  class H
    def self.inherited(sub)
      track_inherited << sub
    end

    def self.track_inherited
      @inherited_modules ||= []
    end
  end

  class K < H; end

  class I
    class J < self
    end
  end

  class K
    def example_instance_method
    end
    def self.example_class_method
    end
  end

  class L; end

  class M < L; end

  # Can't use a method here because of class definition in method body error
  ANON_CLASS_FOR_NEW = lambda do
    Class.new do
      class NamedInModule
      end

      def self.get_class_name
        NamedInModule.name
      end
    end
  end
end

class Class
  def example_instance_method_of_class; end
  def self.example_class_method_of_class; end
end
class << Class
  def example_instance_method_of_singleton_class; end
  def self.example_class_method_of_singleton_class; end
end
class Object
  def example_instance_method_of_object; end
  def self.example_class_method_of_object; end
end
