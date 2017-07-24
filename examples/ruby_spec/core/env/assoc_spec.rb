require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.assoc" do
  after :each do
    ENV.delete("foo")
  end

  it "returns an array of the key and value of the environment variable with the given key" do
    ENV["foo"] = "bar"
    ENV.assoc("foo").should == ["foo", "bar"]
  end

  it "returns nil if no environment variable with the given key exists" do
    ENV.assoc("foo").should == nil
  end

  it "returns the key element coerced with #to_str" do
    ENV["foo"] = "bar"
    k = mock('key')
    k.should_receive(:to_str).and_return("foo")
    ENV.assoc(k).should == ["foo", "bar"]
  end
end
