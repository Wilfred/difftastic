require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "UnboundMethod#super_method" do
  it "returns the method that would be called by super in the method" do
    meth = UnboundMethodSpecs::C.instance_method(:overridden)
    meth = meth.super_method
    meth.should == UnboundMethodSpecs::B.instance_method(:overridden)
    meth = meth.super_method
    meth.should == UnboundMethodSpecs::A.instance_method(:overridden)
  end

  it "returns nil when there's no super method in the parent" do
    method = Kernel.instance_method(:method)
    method.super_method.should == nil
  end

  it "returns nil when the parent's method is removed" do
    parent = Class.new { def foo; end }
    child = Class.new(parent) { def foo; end }

    method = child.instance_method(:foo)

    parent.send(:undef_method, :foo)

    method.super_method.should == nil
  end
end
