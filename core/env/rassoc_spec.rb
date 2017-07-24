require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.rassoc" do
  after :each do
    ENV.delete("foo")
  end

  it "returns an array of the key and value of the environment variable with the given value" do
    ENV["foo"] = "bar"
    ENV.rassoc("bar").should == ["foo", "bar"]
  end

  it "returns nil if no environment variable with the given value exists" do
    ENV.rassoc("bar").should == nil
  end

  it "returns the value element coerced with #to_str" do
    ENV["foo"] = "bar"
    v = mock('value')
    v.should_receive(:to_str).and_return("bar")
    ENV.rassoc(v).should == ["foo", "bar"]
  end
end
