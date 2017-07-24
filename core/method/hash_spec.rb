require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Method#hash" do
  it "needs to be reviewed for spec completeness"

  it "returns the same value for user methods that are eql?" do
    obj = MethodSpecs::Methods.new
    obj.method(:foo).hash.should == obj.method(:bar).hash
  end

  # See also redmine #6048
  it "returns the same value for builtin methods that are eql?" do
    obj = [42]
    obj.method(:to_s).hash.should == obj.method(:inspect).hash
  end
end
