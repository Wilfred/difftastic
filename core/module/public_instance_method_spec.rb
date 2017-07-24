require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#public_instance_method" do
  it "is a public method" do
    Module.should have_public_instance_method(:public_instance_method, false)
  end

  it "requires an argument" do
    Module.new.method(:public_instance_method).arity.should == 1
  end

  describe "when given a public method name" do
    it "returns an UnboundMethod corresponding to the defined Module" do
      ret = ModuleSpecs::Super.public_instance_method(:public_module)
      ret.should be_an_instance_of(UnboundMethod)
      ret.owner.should equal(ModuleSpecs::Basic)

      ret = ModuleSpecs::Super.public_instance_method(:public_super_module)
      ret.should be_an_instance_of(UnboundMethod)
      ret.owner.should equal(ModuleSpecs::Super)
    end

    it "accepts if the name is a Symbol or String" do
      ret = ModuleSpecs::Basic.public_instance_method(:public_module)
      ModuleSpecs::Basic.public_instance_method("public_module").should == ret
    end
  end

  it "raises a TypeError when given a name is not Symbol or String" do
    lambda { Module.new.public_instance_method(nil) }.should raise_error(TypeError)
  end

  it "raises a NameError when given a protected method name" do
    lambda do
      ModuleSpecs::Basic.public_instance_method(:protected_module)
    end.should raise_error(NameError)
  end

  it "raises a NameError if the method is private" do
    lambda do
      ModuleSpecs::Basic.public_instance_method(:private_module)
    end.should raise_error(NameError)
  end

  it "raises a NameError if the method has been undefined" do
    lambda do
      ModuleSpecs::Parent.public_instance_method(:undefed_method)
    end.should raise_error(NameError)
  end

  it "raises a NameError if the method does not exist" do
    lambda do
      Module.new.public_instance_method(:missing)
    end.should raise_error(NameError)
  end

  it "sets the NameError#name attribute to the name of the missing method" do
    begin
      Module.new.public_instance_method(:missing)
    rescue NameError => e
      e.name.should == :missing
    end
  end
end
