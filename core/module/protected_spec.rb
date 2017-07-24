require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/set_visibility', __FILE__)

describe "Module#protected" do
  before :each do
    class << ModuleSpecs::Parent
      def protected_method_1; 5; end
    end
  end

  it_behaves_like :set_visibility, :protected

  it "makes an existing class method protected" do
    ModuleSpecs::Parent.protected_method_1.should == 5

    class << ModuleSpecs::Parent
      protected :protected_method_1
    end

    lambda { ModuleSpecs::Parent.protected_method_1 }.should raise_error(NoMethodError)
  end

  it "makes a public Object instance method protected in a new module" do
    m = Module.new do
      protected :module_specs_public_method_on_object
    end

    m.should have_protected_instance_method(:module_specs_public_method_on_object)

    # Ensure we did not change Object's method
    Object.should_not have_protected_instance_method(:module_specs_public_method_on_object)
  end

  it "makes a public Object instance method protected in Kernel" do
    Kernel.should have_protected_instance_method(
                  :module_specs_public_method_on_object_for_kernel_protected)
    Object.should_not have_protected_instance_method(
                  :module_specs_public_method_on_object_for_kernel_protected)
  end

  it "returns self" do
    (class << Object.new; self; end).class_eval do
      def foo; end
      protected(:foo).should equal(self)
      protected.should equal(self)
    end
  end

  it "raises a NameError when given an undefined name" do
    lambda do
      Module.new.send(:protected, :undefined)
    end.should raise_error(NameError)
  end
end

