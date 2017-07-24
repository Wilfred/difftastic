require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/class', __FILE__)

ClassSpecsNumber = 12

module ClassSpecs
  Number = 12
end

describe "The class keyword" do
  it "creates a new class with semicolon" do
    class ClassSpecsKeywordWithSemicolon; end
    ClassSpecsKeywordWithSemicolon.should be_an_instance_of(Class)
  end

  ruby_version_is "2.3" do
    it "does not raise a SyntaxError when opening a class without a semicolon" do
      eval "class ClassSpecsKeywordWithoutSemicolon end"
      ClassSpecsKeywordWithoutSemicolon.should be_an_instance_of(Class)
    end
  end
end

describe "A class definition" do
  it "creates a new class" do
    ClassSpecs::A.should be_kind_of(Class)
    ClassSpecs::A.new.should be_kind_of(ClassSpecs::A)
  end

  it "has no class variables" do
    ClassSpecs::A.class_variables.should == []
  end

  it "raises TypeError if constant given as class name exists and is not a Module" do
    lambda {
      class ClassSpecsNumber
      end
    }.should raise_error(TypeError)
  end

  # test case known to be detecting bugs (JRuby, MRI)
  it "raises TypeError if the constant qualifying the class is nil" do
    lambda {
      class nil::Foo
      end
    }.should raise_error(TypeError)
  end

  it "raises TypeError if any constant qualifying the class is not a Module" do
    lambda {
      class ClassSpecs::Number::MyClass
      end
    }.should raise_error(TypeError)

    lambda {
      class ClassSpecsNumber::MyClass
      end
    }.should raise_error(TypeError)
  end

  it "inherits from Object by default" do
    ClassSpecs::A.superclass.should == Object
  end

  it "raises an error when trying to change the superclass" do
    module ClassSpecs
      class SuperclassResetToSubclass < L
      end
      lambda {
        class SuperclassResetToSubclass < M
        end
      }.should raise_error(TypeError, /superclass mismatch/)
    end
  end

  it "raises an error when reopening a class with BasicObject as superclass" do
    module ClassSpecs
      class SuperclassReopenedBasicObject < A
      end
      SuperclassReopenedBasicObject.superclass.should == A

      lambda {
        class SuperclassReopenedBasicObject < BasicObject
        end
      }.should raise_error(TypeError, /superclass mismatch/)
      SuperclassReopenedBasicObject.superclass.should == A
    end
  end

  # [Bug #12367] [ruby-core:75446]
  ruby_version_is "2.4" do # Until backported
    it "raises an error when reopening a class with Object as superclass" do
      module ClassSpecs
        class SuperclassReopenedObject < A
        end
        SuperclassReopenedObject.superclass.should == A

        lambda {
          class SuperclassReopenedObject < Object
          end
        }.should raise_error(TypeError, /superclass mismatch/)
        SuperclassReopenedObject.superclass.should == A
      end
    end
  end

  it "allows reopening a class without specifying the superclass" do
    module ClassSpecs
      class SuperclassNotGiven < A
      end
      SuperclassNotGiven.superclass.should == A

      class SuperclassNotGiven
      end
      SuperclassNotGiven.superclass.should == A
    end
  end

  it "does not allow to set the superclass even if it was not specified by the first declaration" do
    module ClassSpecs
      class NoSuperclassSet
      end

      lambda {
        class NoSuperclassSet < String
        end
      }.should raise_error(TypeError, /superclass mismatch/)
    end
  end

  it "allows using self as the superclass if self is a class" do
    ClassSpecs::I::J.superclass.should == ClassSpecs::I

    lambda {
      class ShouldNotWork < self; end
    }.should raise_error(TypeError)
  end

  it "first evaluates the superclass before checking if the class already exists" do
    module ClassSpecs
      class SuperclassEvaluatedFirst
      end
      a = SuperclassEvaluatedFirst

      class SuperclassEvaluatedFirst < remove_const(:SuperclassEvaluatedFirst)
      end
      b = SuperclassEvaluatedFirst
      b.superclass.should == a
    end
  end

  it "raises a TypeError if inheriting from a metaclass" do
    obj = mock("metaclass super")
    meta = obj.singleton_class
    lambda { class ClassSpecs::MetaclassSuper < meta; end }.should raise_error(TypeError)
  end

  it "allows the declaration of class variables in the body" do
    ClassSpecs.string_class_variables(ClassSpecs::B).should == ["@@cvar"]
    ClassSpecs::B.send(:class_variable_get, :@@cvar).should == :cvar
  end

  it "stores instance variables defined in the class body in the class object" do
    ClassSpecs.string_instance_variables(ClassSpecs::B).should include("@ivar")
    ClassSpecs::B.instance_variable_get(:@ivar).should == :ivar
  end

  it "allows the declaration of class variables in a class method" do
    ClassSpecs::C.class_variables.should == []
    ClassSpecs::C.make_class_variable
    ClassSpecs.string_class_variables(ClassSpecs::C).should == ["@@cvar"]
    ClassSpecs::C.remove_class_variable :@@cvar
  end

  it "allows the definition of class-level instance variables in a class method" do
    ClassSpecs.string_instance_variables(ClassSpecs::C).should_not include("@civ")
    ClassSpecs::C.make_class_instance_variable
    ClassSpecs.string_instance_variables(ClassSpecs::C).should include("@civ")
    ClassSpecs::C.remove_instance_variable :@civ
  end

  it "allows the declaration of class variables in an instance method" do
    ClassSpecs::D.class_variables.should == []
    ClassSpecs::D.new.make_class_variable
    ClassSpecs.string_class_variables(ClassSpecs::D).should == ["@@cvar"]
    ClassSpecs::D.remove_class_variable :@@cvar
  end

  it "allows the definition of instance methods" do
    ClassSpecs::E.new.meth.should == :meth
  end

  it "allows the definition of class methods" do
    ClassSpecs::E.cmeth.should == :cmeth
  end

  it "allows the definition of class methods using class << self" do
    ClassSpecs::E.smeth.should == :smeth
  end

  it "allows the definition of Constants" do
    Object.const_defined?('CONSTANT').should == false
    ClassSpecs::E.const_defined?('CONSTANT').should == true
    ClassSpecs::E::CONSTANT.should == :constant!
  end

  it "returns the value of the last statement in the body" do
    class ClassSpecs::Empty; end.should == nil
    class ClassSpecs::Twenty; 20; end.should == 20
    class ClassSpecs::Plus; 10 + 20; end.should == 30
    class ClassSpecs::Singleton; class << self; :singleton; end; end.should == :singleton
  end

  describe "within a block creates a new class in the lexical scope" do
    it "for named classes at the toplevel" do
      klass = Class.new do
        class Howdy
        end

        def self.get_class_name
          Howdy.name
        end
      end

      Howdy.name.should == 'Howdy'
      klass.get_class_name.should == 'Howdy'
    end

    it "for named classes in a module" do
      klass = ClassSpecs::ANON_CLASS_FOR_NEW.call

      ClassSpecs::NamedInModule.name.should == 'ClassSpecs::NamedInModule'
      klass.get_class_name.should == 'ClassSpecs::NamedInModule'
    end

    it "for anonymous classes" do
      klass = Class.new do
        def self.get_class
          Class.new do
            def self.foo
              'bar'
            end
          end
        end

        def self.get_result
          get_class.foo
        end
      end

      klass.get_result.should == 'bar'
    end

    it "for anonymous classes assigned to a constant" do
      klass = Class.new do
        AnonWithConstant = Class.new

        def self.get_class_name
          AnonWithConstant.name
        end
      end

      AnonWithConstant.name.should == 'AnonWithConstant'
      klass.get_class_name.should == 'AnonWithConstant'
    end
  end
end

describe "An outer class definition" do
  it "contains the inner classes" do
    ClassSpecs::Container.constants.should include(:A, :B)
  end
end

describe "A class definition extending an object (sclass)" do
  it "allows adding methods" do
    ClassSpecs::O.smeth.should == :smeth
  end

  it "raises a TypeError when trying to extend numbers" do
    lambda {
      eval <<-CODE
        class << 1
          def xyz
            self
          end
        end
      CODE
    }.should raise_error(TypeError)
  end

  it "allows accessing the block of the original scope" do
    ClassSpecs.sclass_with_block { 123 }.should == 123
  end

  it "can use return to cause the enclosing method to return" do
    ClassSpecs.sclass_with_return.should == :inner
  end
end

describe "Reopening a class" do
  it "extends the previous definitions" do
    c = ClassSpecs::F.new
    c.meth.should == :meth
    c.another.should == :another
  end

  it "overwrites existing methods" do
    ClassSpecs::G.new.override.should == :override
  end

  it "raises a TypeError when superclasses mismatch" do
    lambda { class ClassSpecs::A < Array; end }.should raise_error(TypeError)
  end

  it "adds new methods to subclasses" do
    lambda { ClassSpecs::M.m }.should raise_error(NoMethodError)
    class ClassSpecs::L
      def self.m
        1
      end
    end
    ClassSpecs::M.m.should == 1
    ClassSpecs::L.singleton_class.send(:remove_method, :m)
  end
end

describe "class provides hooks" do
  it "calls inherited when a class is created" do
    ClassSpecs::H.track_inherited.should == [ClassSpecs::K]
  end
end
