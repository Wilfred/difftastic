require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Kernel#inspect" do
  it "returns a String" do
    Object.new.inspect.should be_an_instance_of(String)
  end

  it "returns a tainted string if self is tainted" do
    Object.new.taint.inspect.tainted?.should be_true
  end

  it "returns an untrusted string if self is untrusted" do
    Object.new.untrust.inspect.untrusted?.should be_true
  end

  it "does not call #to_s if it is defined" do
    # We must use a bare Object here
    obj = Object.new
    inspected = obj.inspect

    obj.stub!(:to_s).and_return("to_s'd")

    obj.inspect.should == inspected
  end

  it "returns a String with the object class and object_id encoded" do
    obj = Object.new
    obj.inspect.should =~ /^#<Object:0x[0-9a-f]+>$/
  end
end
