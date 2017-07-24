require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.invert" do
  before :each do
    ENV["foo"] = "bar"
  end

  after :each do
    ENV.delete "foo"
  end

  it "returns a hash with ENV.keys as the values and vice versa" do
    ENV.invert["bar"].should == "foo"
    ENV["foo"].should == "bar"
  end
end
