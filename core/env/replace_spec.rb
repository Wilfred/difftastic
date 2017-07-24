require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.replace" do

  it "replaces ENV with a Hash" do
    ENV["foo"] = "bar"
    e = ENV.reject { |k, v| k == "foo" }
    e["baz"] = "bam"
    ENV.replace e
    ENV["foo"].should == nil
    ENV["baz"].should == "bam"
    ENV.delete "baz"
  end

end
