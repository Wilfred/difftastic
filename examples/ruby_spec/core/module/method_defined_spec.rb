require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#method_defined?" do
  it "returns true if a public or private method with the given name is defined in self, self's ancestors or one of self's included modules" do
    # Defined in Child
    ModuleSpecs::Child.method_defined?(:public_child).should == true
    ModuleSpecs::Child.method_defined?("private_child").should == false
    ModuleSpecs::Child.method_defined?(:accessor_method).should == true

    # Defined in Parent
    ModuleSpecs::Child.method_defined?("public_parent").should == true
    ModuleSpecs::Child.method_defined?(:private_parent).should == false

    # Defined in Module
    ModuleSpecs::Child.method_defined?(:public_module).should == true
    ModuleSpecs::Child.method_defined?(:protected_module).should == true
    ModuleSpecs::Child.method_defined?(:private_module).should == false

    # Defined in SuperModule
    ModuleSpecs::Child.method_defined?(:public_super_module).should == true
    ModuleSpecs::Child.method_defined?(:protected_super_module).should == true
    ModuleSpecs::Child.method_defined?(:private_super_module).should == false
  end

  # unlike alias_method, module_function, public, and friends,
  it "does not search Object or Kernel when called on a module" do
    m = Module.new

    m.method_defined?(:module_specs_public_method_on_kernel).should be_false
  end

  it "raises a TypeError when the given object is not a string/symbol/fixnum" do
    c = Class.new
    o = mock('123')

    lambda { c.method_defined?(o) }.should raise_error(TypeError)

    o.should_receive(:to_str).and_return(123)
    lambda { c.method_defined?(o) }.should raise_error(TypeError)
  end

  it "converts the given name to a string using to_str" do
    c = Class.new { def test(); end }
    (o = mock('test')).should_receive(:to_str).and_return("test")

    c.method_defined?(o).should == true
  end
end
