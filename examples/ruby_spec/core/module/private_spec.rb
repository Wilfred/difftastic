require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_visibility', __FILE__)

describe "Module#private" do
  it_behaves_like :set_visibility, :private

  it "makes the target method uncallable from other types" do
    obj = Object.new
    class << obj
      def foo; true; end
    end

    obj.foo.should == true

    class << obj
      private :foo
    end

    lambda { obj.foo }.should raise_error(NoMethodError)
  end

  it "makes a public Object instance method private in a new module" do
    m = Module.new do
      private :module_specs_public_method_on_object
    end

    m.should have_private_instance_method(:module_specs_public_method_on_object)

    # Ensure we did not change Object's method
    Object.should_not have_private_instance_method(:module_specs_public_method_on_object)
  end

  it "makes a public Object instance method private in Kernel" do
    Kernel.should have_private_instance_method(
                  :module_specs_public_method_on_object_for_kernel_private)
    Object.should_not have_private_instance_method(
                  :module_specs_public_method_on_object_for_kernel_private)
  end

  it "returns self" do
    (class << Object.new; self; end).class_eval do
      def foo; end
      private(:foo).should equal(self)
      private.should equal(self)
    end
  end

  it "raises a NameError when given an undefined name" do
    lambda do
      Module.new.send(:private, :undefined)
    end.should raise_error(NameError)
  end
end
