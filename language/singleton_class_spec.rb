require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/class', __FILE__)

describe "A singleton class" do
  it "is TrueClass for true" do
    true.singleton_class.should == TrueClass
  end

  it "is FalseClass for false" do
    false.singleton_class.should == FalseClass
  end

  it "is NilClass for nil" do
    nil.singleton_class.should == NilClass
  end

  it "raises a TypeError for Fixnum's" do
    lambda { 1.singleton_class }.should raise_error(TypeError)
  end

  it "raises a TypeError for symbols" do
    lambda { :symbol.singleton_class }.should raise_error(TypeError)
  end

  it "is a singleton Class instance" do
    o = mock('x')
    o.singleton_class.should be_kind_of(Class)
    o.singleton_class.should_not equal(Object)
    o.should be_kind_of(o.singleton_class)
  end

  it "is a Class for classes" do
    ClassSpecs::A.singleton_class.should be_kind_of(Class)
  end

  it "inherits from Class for classes" do
    Class.should be_ancestor_of(Object.singleton_class)
  end

  it "is a subclass of Class's singleton class" do
    ec = ClassSpecs::A.singleton_class
    ec.should be_kind_of(Class.singleton_class)
  end

  it "is a subclass of the same level of Class's singleton class" do
    ecec = ClassSpecs::A.singleton_class.singleton_class
    class_ec = Class.singleton_class

    ecec.should be_kind_of(class_ec.singleton_class)
    ecec.should be_kind_of(class_ec)
  end

  it "is a subclass of a superclass's singleton class" do
    ClassSpecs::K.singleton_class.superclass.should ==
      ClassSpecs::H.singleton_class
  end

  it "is a subclass of the same level of superclass's singleton class" do
    ClassSpecs::K.singleton_class.singleton_class.superclass.should ==
      ClassSpecs::H.singleton_class.singleton_class
  end

  it "for BasicObject has Class as it's superclass" do
    BasicObject.singleton_class.superclass.should == Class
  end

  it "for BasicObject has the proper level of superclass for Class" do
    BasicObject.singleton_class.singleton_class.superclass.should ==
      Class.singleton_class
  end

  it "has class String as the superclass of a String instance" do
    "blah".singleton_class.superclass.should == String
  end

  it "doesn't have singleton class" do
    lambda { bignum_value.singleton_class.superclass.should == Bignum }.should raise_error(TypeError)
  end
end

describe "A constant on a singleton class" do
  before :each do
    @object = Object.new
    class << @object
      CONST = self
    end
  end

  it "can be accessed after the singleton class body is reopened" do
    class << @object
      CONST.should == self
    end
  end

  it "can be accessed via self::CONST" do
    class << @object
      self::CONST.should == self
    end
  end

  it "can be accessed via const_get" do
    class << @object
      const_get(:CONST).should == self
    end
  end

  it "is not defined on the object's class" do
    @object.class.const_defined?(:CONST).should be_false
  end

  it "is not defined in the singleton class opener's scope" do
    class << @object
      CONST
    end
    lambda { CONST }.should raise_error(NameError)
  end

  it "cannot be accessed via object::CONST" do
    lambda do
      @object::CONST
    end.should raise_error(TypeError)
  end

  it "raises a NameError for anonymous_module::CONST" do
    @object = Class.new
    class << @object
      CONST = 100
    end

    lambda do
      @object::CONST
    end.should raise_error(NameError)
  end

  it "appears in the singleton class constant list" do
    @object.singleton_class.should have_constant(:CONST)
  end

  it "does not appear in the object's class constant list" do
    @object.class.should_not have_constant(:CONST)
  end

  it "is not preserved when the object is duped" do
    @object = @object.dup

    lambda do
      class << @object; CONST; end
    end.should raise_error(NameError)
  end

  it "is preserved when the object is cloned" do
    @object = @object.clone

    class << @object
      CONST.should_not be_nil
    end
  end
end

describe "Defining instance methods on a singleton class" do
  before :each do
    @k = ClassSpecs::K.new
    class << @k
      def singleton_method; 1 end
    end

    @k_sc = @k.singleton_class
  end

  it "defines public methods" do
    @k_sc.should have_public_instance_method(:singleton_method)
  end
end

describe "Instance methods of a singleton class" do
  before :each do
    k = ClassSpecs::K.new
    @k_sc = k.singleton_class
    @a_sc = ClassSpecs::A.new.singleton_class
    @a_c_sc = ClassSpecs::A.singleton_class
  end

  it "include ones of the object's class" do
    @k_sc.should have_instance_method(:example_instance_method)
  end

  it "does not include class methods of the object's class" do
    @k_sc.should_not have_instance_method(:example_class_method)
  end

  it "include instance methods of Object" do
    @a_sc.should have_instance_method(:example_instance_method_of_object)
  end

  it "does not include class methods of Object" do
    @a_sc.should_not have_instance_method(:example_class_method_of_object)
  end

  describe "for a class" do
    it "include instance methods of Class" do
      @a_c_sc.should have_instance_method(:example_instance_method_of_class)
    end

    it "does not include class methods of Class" do
      @a_c_sc.should_not have_instance_method(:example_class_method_of_class)
    end

    it "does not include instance methods of the singleton class of Class" do
      @a_c_sc.should_not have_instance_method(:example_instance_method_of_singleton_class)
    end

    it "does not include class methods of the singleton class of Class" do
      @a_c_sc.should_not have_instance_method(:example_class_method_of_singleton_class)
    end
  end

  describe "for a singleton class" do
    it "includes instance methods of the singleton class of Class" do
      @a_c_sc.singleton_class.should have_instance_method(:example_instance_method_of_singleton_class)
    end

    it "does not include class methods of the singleton class of Class" do
      @a_c_sc.singleton_class.should_not have_instance_method(:example_class_method_of_singleton_class)
    end
  end
end

describe "Class methods of a singleton class" do
  before :each do
    k = ClassSpecs::K.new
    @k_sc = k.singleton_class
    @a_sc = ClassSpecs::A.new.singleton_class
    @a_c_sc = ClassSpecs::A.singleton_class
  end

  it "include ones of the object's class" do
    @k_sc.should have_method(:example_class_method)
  end

  it "does not include instance methods of the object's class" do
    @k_sc.should_not have_method(:example_instance_method)
  end

  it "include instance methods of Class" do
    @a_sc.should have_method(:example_instance_method_of_class)
  end

  it "does not include class methods of Class" do
    @a_sc.should_not have_method(:example_class_method_of_class)
  end

  describe "for a class" do
    it "include instance methods of Class" do
      @a_c_sc.should have_method(:example_instance_method_of_class)
    end

    it "include class methods of Class" do
      @a_c_sc.should have_method(:example_class_method_of_class)
    end

    it "include instance methods of the singleton class of Class" do
      @a_c_sc.should have_method(:example_instance_method_of_singleton_class)
    end

    it "does not include class methods of the singleton class of Class" do
      @a_c_sc.should_not have_method(:example_class_method_of_singleton_class)
    end
  end

  describe "for a singleton class" do
    it "include instance methods of the singleton class of Class" do
      @a_c_sc.singleton_class.should have_method(:example_instance_method_of_singleton_class)
    end

    it "include class methods of the singleton class of Class" do
      @a_c_sc.singleton_class.should have_method(:example_class_method_of_singleton_class)
    end
  end
end

describe "Instantiating a singleton class" do
  it "raises a TypeError when new is called" do
    lambda {
      Object.new.singleton_class.new
    }.should raise_error(TypeError)
  end

  it "raises a TypeError when allocate is called" do
    lambda {
      Object.new.singleton_class.allocate
    }.should raise_error(TypeError)
  end
end
