require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#<=>" do
  it "returns -1 if self is a subclass of or includes the given module" do
    (ModuleSpecs::Child <=> ModuleSpecs::Parent).should == -1
    (ModuleSpecs::Child <=> ModuleSpecs::Basic).should == -1
    (ModuleSpecs::Child <=> ModuleSpecs::Super).should == -1
    (ModuleSpecs::Super <=> ModuleSpecs::Basic).should == -1
  end

  it "returns 0 if self is the same as the given module" do
    (ModuleSpecs::Child  <=> ModuleSpecs::Child).should == 0
    (ModuleSpecs::Parent <=> ModuleSpecs::Parent).should == 0
    (ModuleSpecs::Basic  <=> ModuleSpecs::Basic).should == 0
    (ModuleSpecs::Super  <=> ModuleSpecs::Super).should == 0
  end

  it "returns +1 if self is a superclas of or included by the given module" do
    (ModuleSpecs::Parent <=> ModuleSpecs::Child).should == +1
    (ModuleSpecs::Basic  <=> ModuleSpecs::Child).should == +1
    (ModuleSpecs::Super  <=> ModuleSpecs::Child).should == +1
    (ModuleSpecs::Basic  <=> ModuleSpecs::Super).should == +1
  end

  it "returns nil if self and the given module are not related" do
    (ModuleSpecs::Parent <=> ModuleSpecs::Basic).should == nil
    (ModuleSpecs::Parent <=> ModuleSpecs::Super).should == nil
    (ModuleSpecs::Basic  <=> ModuleSpecs::Parent).should == nil
    (ModuleSpecs::Super  <=> ModuleSpecs::Parent).should == nil
  end

  it "returns nil if the argument is not a class/module" do
    (ModuleSpecs::Parent <=> mock('x')).should == nil
  end
end
