require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "UnboundMethod#hash" do
  it "needs to be reviewed for spec completeness"

  it "returns the same value for user methods that are eql?" do
    foo, bar = UnboundMethodSpecs::Methods.instance_method(:foo), UnboundMethodSpecs::Methods.instance_method(:bar)
    foo.hash.should == bar.hash
  end

  # See also redmine #6048
  it "returns the same value for builtin methods that are eql?" do
    to_s, inspect = Array.instance_method(:to_s), Array.instance_method(:inspect)
    to_s.hash.should == inspect.hash
  end
end
