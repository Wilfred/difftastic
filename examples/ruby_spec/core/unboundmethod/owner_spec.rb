require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "UnboundMethod#owner" do
  it "returns the owner of the method" do
    String.instance_method(:upcase).owner.should == String
  end

  it "returns the same owner when aliased in the same classes" do
    UnboundMethodSpecs::Methods.instance_method(:foo).owner.should == UnboundMethodSpecs::Methods
    UnboundMethodSpecs::Methods.instance_method(:bar).owner.should == UnboundMethodSpecs::Methods
  end

  it "returns the class/module it was defined in" do
    UnboundMethodSpecs::C.instance_method(:baz).owner.should == UnboundMethodSpecs::A
    UnboundMethodSpecs::Methods.instance_method(:from_mod).owner.should == UnboundMethodSpecs::Mod
  end

  it "returns the new owner for aliased methods on singleton classes" do
    parent_singleton_class = UnboundMethodSpecs::Parent.singleton_class
    child_singleton_class  = UnboundMethodSpecs::Child3.singleton_class

    child_singleton_class.instance_method(:class_method).owner.should == parent_singleton_class
    child_singleton_class.instance_method(:another_class_method).owner.should == child_singleton_class
  end
end
