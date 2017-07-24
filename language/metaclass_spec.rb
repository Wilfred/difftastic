require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/class', __FILE__)
require File.expand_path('../fixtures/metaclass', __FILE__)

describe "self in a metaclass body (class << obj)" do
  it "is TrueClass for true" do
    class << true; self; end.should == TrueClass
  end

  it "is FalseClass for false" do
    class << false; self; end.should == FalseClass
  end

  it "is NilClass for nil" do
    class << nil; self; end.should == NilClass
  end

  it "raises a TypeError for numbers" do
    lambda { class << 1; self; end }.should raise_error(TypeError)
  end

  it "raises a TypeError for symbols" do
    lambda { class << :symbol; self; end }.should raise_error(TypeError)
  end

  it "is a singleton Class instance" do
    cls = class << mock('x'); self; end
    cls.is_a?(Class).should == true
    cls.should_not equal(Object)
  end
end

describe "A constant on a metaclass" do
  before :each do
    @object = Object.new
    class << @object
      CONST = self
    end
  end

  it "can be accessed after the metaclass body is reopened" do
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

  it "is not defined in the metaclass opener's scope" do
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

  it "appears in the metaclass constant list" do
    constants = class << @object; constants; end
    constants.should include(:CONST)
  end

  it "does not appear in the object's class constant list" do
    @object.class.constants.should_not include(:CONST)
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

describe "calling methods on the metaclass" do

  it "calls a method on the metaclass" do
    MetaClassSpecs::A.cheese.should == 'edam'
    MetaClassSpecs::B.cheese.should == 'stilton'
  end

  it "calls a method on the instance's metaclass" do
    b = MetaClassSpecs::B.new
    b_meta = MetaClassSpecs.metaclass_of b
    b_meta.send(:define_method, :cheese) {'cheshire'}
    b.cheese.should == 'cheshire'
  end

  it "calls a method in deeper chains of metaclasses" do
    b = MetaClassSpecs::B.new
    b_meta = MetaClassSpecs.metaclass_of b
    b_meta_meta = MetaClassSpecs.metaclass_of b_meta
    b_meta_meta.send(:define_method, :cheese) {'gouda'}
    b_meta.cheese.should == 'gouda'

    b_meta_meta_meta = MetaClassSpecs.metaclass_of b_meta_meta
    b_meta_meta_meta.send(:define_method, :cheese) {'wensleydale'}
    b_meta_meta.cheese.should == 'wensleydale'
  end

  it "calls a method defined on the metaclass of the metaclass" do
    d_meta = MetaClassSpecs::D.singleton_class
    d_meta.ham.should == 'iberico'
  end
end
