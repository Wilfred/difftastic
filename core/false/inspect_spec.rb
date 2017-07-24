require File.expand_path('../../../spec_helper', __FILE__)

describe "FalseClass#inspect" do
  it "returns the string 'false'" do
    false.inspect.should == "false"
  end
end
