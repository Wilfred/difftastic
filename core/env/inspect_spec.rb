require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.inspect" do

  it "returns a String that looks like a Hash with real data" do
    ENV["foo"] = "bar"
    ENV.inspect.should =~ /\{.*"foo"=>"bar".*\}/
    ENV.delete "foo"
  end

end
