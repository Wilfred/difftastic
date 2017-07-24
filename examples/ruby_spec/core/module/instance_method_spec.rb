require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#instance_method" do
  before :all do
    @parent_um = ModuleSpecs::InstanceMeth.instance_method(:foo)
    @child_um = ModuleSpecs::InstanceMethChild.instance_method(:foo)
    @mod_um = ModuleSpecs::InstanceMethChild.instance_method(:bar)
  end

  it "is a public method" do
    Module.should have_public_instance_method(:instance_method, false)
  end

  it "requires an argument" do
    Module.new.method(:instance_method).arity.should == 1
  end

  it "returns an UnboundMethod corresponding to the given name" do
    @parent_um.should be_kind_of(UnboundMethod)
    @parent_um.bind(ModuleSpecs::InstanceMeth.new).call.should == :foo
  end

  it "returns an UnboundMethod corresponding to the given name from a superclass" do
    @child_um.should be_kind_of(UnboundMethod)
    @child_um.bind(ModuleSpecs::InstanceMethChild.new).call.should == :foo
  end

  it "returns an UnboundMethod corresponding to the given name from an included Module" do
    @mod_um.should be_kind_of(UnboundMethod)
    @mod_um.bind(ModuleSpecs::InstanceMethChild.new).call.should == :bar
  end

  it "returns an UnboundMethod when given a protected method name" do
    ModuleSpecs::Basic.instance_method(:protected_module).should be_an_instance_of(UnboundMethod)
  end

  it "returns an UnboundMethod when given a private method name" do
    ModuleSpecs::Basic.instance_method(:private_module).should be_an_instance_of(UnboundMethod)
  end

  it "gives UnboundMethod method name, Module defined in and Module extracted from" do
    @parent_um.inspect.should =~ /\bfoo\b/
    @parent_um.inspect.should =~ /\bModuleSpecs::InstanceMeth\b/
    @parent_um.inspect.should =~ /\bModuleSpecs::InstanceMeth\b/
    @child_um.inspect.should =~ /\bfoo\b/
    @child_um.inspect.should =~ /\bModuleSpecs::InstanceMeth\b/
    @child_um.inspect.should =~ /\bModuleSpecs::InstanceMethChild\b/
    @mod_um.inspect.should =~ /\bbar\b/
    @mod_um.inspect.should =~ /\bModuleSpecs::InstanceMethMod\b/
    @mod_um.inspect.should =~ /\bModuleSpecs::InstanceMethChild\b/
  end

  it "raises a TypeError if not passed a symbol" do
    lambda { Object.instance_method([]) }.should raise_error(TypeError)
    lambda { Object.instance_method(0)  }.should raise_error(TypeError)
  end

  it "raises a TypeError if the given name is not a string/symbol" do
    lambda { Object.instance_method(nil)       }.should raise_error(TypeError)
    lambda { Object.instance_method(mock('x')) }.should raise_error(TypeError)
  end

  it "raises a NameError if the method has been undefined" do
    child = Class.new(ModuleSpecs::InstanceMeth)
    child.send :undef_method, :foo
    um = ModuleSpecs::InstanceMeth.instance_method(:foo)
    um.should == @parent_um
    lambda do
      child.instance_method(:foo)
    end.should raise_error(NameError)
  end

  it "raises a NameError if the method does not exist" do
    lambda { Object.instance_method(:missing) }.should raise_error(NameError)
  end

  it "sets the NameError#name attribute to the name of the missing method" do
    begin
      Object.instance_method(:missing)
    rescue NameError => e
      e.name.should == :missing
    end
  end
end
