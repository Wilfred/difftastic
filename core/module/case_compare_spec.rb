require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#===" do
  it "returns true when the given Object is an instance of self or of self's descendants" do
    (ModuleSpecs::Child       === ModuleSpecs::Child.new).should == true
    (ModuleSpecs::Parent      === ModuleSpecs::Parent.new).should == true

    (ModuleSpecs::Parent      === ModuleSpecs::Child.new).should == true
    (Object                   === ModuleSpecs::Child.new).should == true

    (ModuleSpecs::Child       === String.new).should == false
    (ModuleSpecs::Child       === mock('x')).should == false
  end

  it "returns true when the given Object's class includes self or when the given Object is extended by self" do
    (ModuleSpecs::Basic === ModuleSpecs::Child.new).should == true
    (ModuleSpecs::Super === ModuleSpecs::Child.new).should == true
    (ModuleSpecs::Basic === mock('x').extend(ModuleSpecs::Super)).should == true
    (ModuleSpecs::Super === mock('y').extend(ModuleSpecs::Super)).should == true

    (ModuleSpecs::Basic === ModuleSpecs::Parent.new).should == false
    (ModuleSpecs::Super === ModuleSpecs::Parent.new).should == false
    (ModuleSpecs::Basic === mock('z')).should == false
    (ModuleSpecs::Super === mock('a')).should == false
  end

  it "does not let a module singleton class interfere when its on the RHS" do
    (Class === ModuleSpecs::CaseCompareOnSingleton).should == false
  end
end
