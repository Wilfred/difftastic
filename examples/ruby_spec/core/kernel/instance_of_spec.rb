require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe Kernel, "#instance_of?" do
  before :each do
    @o = KernelSpecs::InstanceClass.new
  end

  it "returns true if given class is object's class" do
    @o.instance_of?(KernelSpecs::InstanceClass).should == true
    [].instance_of?(Array).should == true
    ''.instance_of?(String).should == true
  end

  it "returns false if given class is object's ancestor class" do
    @o.instance_of?(KernelSpecs::AncestorClass).should == false
  end

  it "returns false if given class is not object's class nor object's ancestor class" do
    @o.instance_of?(Array).should == false
  end

  it "returns false if given a Module that is included in object's class" do
    @o.instance_of?(KernelSpecs::MyModule).should == false
  end

  it "returns false if given a Module that is included one of object's ancestors only" do
    @o.instance_of?(KernelSpecs::AncestorModule).should == false
  end

  it "returns false if given a Module that is not included in object's class" do
    @o.instance_of?(KernelSpecs::SomeOtherModule).should == false
  end

  it "raises a TypeError if given an object that is not a Class nor a Module" do
    lambda { @o.instance_of?(Object.new) }.should raise_error(TypeError)
    lambda { @o.instance_of?('KernelSpecs::InstanceClass') }.should raise_error(TypeError)
    lambda { @o.instance_of?(1) }.should raise_error(TypeError)
  end
end
