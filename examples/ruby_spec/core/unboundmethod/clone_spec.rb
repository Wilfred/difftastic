require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "UnboundMethod#clone" do
  it "returns a copy of the UnboundMethod" do
    um1 = UnboundMethodSpecs::Methods.instance_method(:foo)
    um2 = um1.clone

    (um1 == um2).should == true
    um1.bind(UnboundMethodSpecs::Methods.new).call.should == um2.bind(UnboundMethodSpecs::Methods.new).call
  end
end
