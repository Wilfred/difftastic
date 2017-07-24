require File.expand_path('../../../spec_helper', __FILE__)

describe "Float#hash" do
  it "is provided" do
    0.0.respond_to?(:hash).should == true
  end

  it "is stable" do
    1.0.hash.should == 1.0.hash
  end
end
