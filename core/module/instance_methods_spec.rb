require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#instance_methods" do
  it "does not return methods undefined in a superclass" do
    methods = ModuleSpecs::Parent.instance_methods(false)
    methods.should_not include(:undefed_method)
  end

  it "only includes module methods on an included module" do
    methods = ModuleSpecs::Basic.instance_methods(false)
    methods.should include(:public_module)
    # Child is an including class
    methods = ModuleSpecs::Child.instance_methods(false)
    methods.should include(:public_child)
    methods.should_not include(:public_module)
  end

  it "does not return methods undefined in a subclass" do
    methods = ModuleSpecs::Grandchild.instance_methods
    methods.should_not include(:parent_method, :another_parent_method)
  end

  it "does not return methods undefined in the current class" do
    class ModuleSpecs::Child
      def undefed_child
      end
    end
    ModuleSpecs::Child.send(:undef_method, :undefed_child)
    methods = ModuleSpecs::Child.instance_methods
    methods.should_not include(:undefed_method, :undefed_child)
  end

  it "does not return methods from an included module that are undefined in the class" do
    ModuleSpecs::Grandchild.instance_methods.should_not include(:super_included_method)
  end

  it "returns the public and protected methods of self if include_super is false" do
    methods = ModuleSpecs::Parent.instance_methods(false)
    methods.should include(:protected_parent, :public_parent)

    methods = ModuleSpecs::Child.instance_methods(false)
    methods.should include(:protected_child, :public_child)
  end

  it "returns the public and protected methods of self and it's ancestors" do
    methods = ModuleSpecs::Basic.instance_methods
    methods.should include(:protected_module, :public_module)

    methods = ModuleSpecs::Super.instance_methods
    methods.should include(:protected_module, :protected_super_module,
                           :public_module, :public_super_module)
  end

  it "makes a private Object instance method public in Kernel" do
    methods = Kernel.instance_methods
    methods.should include(:module_specs_private_method_on_object_for_kernel_public)
    methods = Object.instance_methods
    methods.should_not include(:module_specs_private_method_on_object_for_kernel_public)
  end
end
