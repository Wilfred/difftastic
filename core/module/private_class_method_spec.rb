require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#private_class_method" do
  before :each do
    # This is not in classes.rb because after marking a class method private it
    # will stay private.
    class << ModuleSpecs::Parent
      public
      def private_method_1; end
      def private_method_2; end
    end
  end

  after :each do
    class << ModuleSpecs::Parent
      remove_method :private_method_1
      remove_method :private_method_2
    end
  end

  it "makes an existing class method private" do
    ModuleSpecs::Parent.private_method_1.should == nil
    ModuleSpecs::Parent.private_class_method :private_method_1
    lambda { ModuleSpecs::Parent.private_method_1  }.should raise_error(NoMethodError)

    # Technically above we're testing the Singleton classes, class method(right?).
    # Try a "real" class method set private.
    lambda { ModuleSpecs::Parent.private_method }.should raise_error(NoMethodError)
  end

  it "makes an existing class method private up the inheritance tree" do
    ModuleSpecs::Child.public_class_method :private_method_1
    ModuleSpecs::Child.private_method_1.should == nil
    ModuleSpecs::Child.private_class_method :private_method_1

    lambda { ModuleSpecs::Child.private_method_1 }.should raise_error(NoMethodError)
    lambda { ModuleSpecs::Child.private_method   }.should raise_error(NoMethodError)
  end

  it "accepts more than one method at a time" do
    ModuleSpecs::Parent.private_method_1.should == nil
    ModuleSpecs::Parent.private_method_2.should == nil

    ModuleSpecs::Child.private_class_method :private_method_1, :private_method_2

    lambda { ModuleSpecs::Child.private_method_1 }.should raise_error(NoMethodError)
    lambda { ModuleSpecs::Child.private_method_2 }.should raise_error(NoMethodError)
  end

  it "raises a NameError if class method doesn't exist" do
    lambda do
      ModuleSpecs.private_class_method :no_method_here
    end.should raise_error(NameError)
  end

  it "makes a class method private" do
    c = Class.new do
      def self.foo() "foo" end
      private_class_method :foo
    end
    lambda { c.foo }.should raise_error(NoMethodError)
  end

  it "raises a NameError when the given name is not a method" do
    lambda do
      Class.new do
        private_class_method :foo
      end
    end.should raise_error(NameError)
  end

  it "raises a NameError when the given name is an instance method" do
    lambda do
      Class.new do
        def foo() "foo" end
        private_class_method :foo
      end
    end.should raise_error(NameError)
  end
end
