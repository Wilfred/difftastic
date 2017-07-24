require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Module#<=" do
  it "returns true if self is a subclass of, the same as or includes the given module" do
    (ModuleSpecs::Child  <= ModuleSpecs::Parent).should == true
    (ModuleSpecs::Child  <= ModuleSpecs::Basic).should == true
    (ModuleSpecs::Child  <= ModuleSpecs::Super).should == true
    (ModuleSpecs::Super  <= ModuleSpecs::Basic).should == true
    (ModuleSpecs::Child  <= ModuleSpecs::Child).should == true
    (ModuleSpecs::Parent <= ModuleSpecs::Parent).should == true
    (ModuleSpecs::Basic  <= ModuleSpecs::Basic).should == true
    (ModuleSpecs::Super  <= ModuleSpecs::Super).should == true
  end

  it "returns nil if self is not related to the given module" do
    (ModuleSpecs::Parent <= ModuleSpecs::Basic).should == nil
    (ModuleSpecs::Parent <= ModuleSpecs::Super).should == nil
    (ModuleSpecs::Basic  <= ModuleSpecs::Parent).should == nil
    (ModuleSpecs::Super  <= ModuleSpecs::Parent).should == nil
  end

  it "returns false if self is a superclass of or is included by the given module" do
    (ModuleSpecs::Parent <= ModuleSpecs::Child).should == false
    (ModuleSpecs::Basic  <= ModuleSpecs::Child).should == false
    (ModuleSpecs::Super  <= ModuleSpecs::Child).should == false
    (ModuleSpecs::Basic  <= ModuleSpecs::Super).should == false
  end

  it "raises a TypeError if the argument is not a class/module" do
    lambda { ModuleSpecs::Parent <= mock('x') }.should raise_error(TypeError)
  end
end
