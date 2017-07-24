require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.delete" do
  after :each do
    ENV.delete("foo")
  end

  it "removes the variable from the environment" do
    ENV["foo"] = "bar"
    ENV.delete("foo")
    ENV["foo"].should == nil
  end

  it "returns the previous value" do
    ENV["foo"] = "bar"
    ENV.delete("foo").should == "bar"
  end

  it "yields the name to the given block if the named environment variable does not exist" do
    ENV.delete("foo")
    ENV.delete("foo") { |name| ScratchPad.record name }
    ScratchPad.recorded.should == "foo"
  end
end
