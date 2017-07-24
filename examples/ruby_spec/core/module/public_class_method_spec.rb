require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#public_class_method" do
  before :each do
    class << ModuleSpecs::Parent
      private
      def public_method_1; end
      def public_method_2; end
    end
  end

  after :each do
    class << ModuleSpecs::Parent
      remove_method :public_method_1
      remove_method :public_method_2
    end
  end

  it "makes an existing class method public" do
    lambda { ModuleSpecs::Parent.public_method_1 }.should raise_error(NoMethodError)
    ModuleSpecs::Parent.public_class_method :public_method_1
    ModuleSpecs::Parent.public_method_1.should == nil

    # Technically above we're testing the Singleton classes, class method(right?).
    # Try a "real" class method set public.
    ModuleSpecs::Parent.public_method.should == nil
  end

  it "makes an existing class method public up the inheritance tree" do
    ModuleSpecs::Child.private_class_method :public_method_1
    lambda { ModuleSpecs::Child.public_method_1 }.should raise_error(NoMethodError)
    ModuleSpecs::Child.public_class_method :public_method_1

    ModuleSpecs::Child.public_method_1.should == nil
    ModuleSpecs::Child.public_method.should == nil
  end

  it "accepts more than one method at a time" do
    lambda { ModuleSpecs::Parent.public_method_1 }.should raise_error(NameError)
    lambda { ModuleSpecs::Parent.public_method_2 }.should raise_error(NameError)

    ModuleSpecs::Child.public_class_method :public_method_1, :public_method_2

    ModuleSpecs::Child.public_method_1.should == nil
    ModuleSpecs::Child.public_method_2.should == nil
  end

  it "raises a NameError if class method doesn't exist" do
    lambda do
      ModuleSpecs.public_class_method :no_method_here
    end.should raise_error(NameError)
  end

  it "makes a class method public" do
    c = Class.new do
      def self.foo() "foo" end
      public_class_method :foo
    end

    c.foo.should == "foo"
  end

  it "raises a NameError when the given name is not a method" do
    lambda do
      Class.new do
        public_class_method :foo
      end
    end.should raise_error(NameError)
  end

  it "raises a NameError when the given name is an instance method" do
    lambda do
      Class.new do
        def foo() "foo" end
        public_class_method :foo
      end
    end.should raise_error(NameError)
  end
end
