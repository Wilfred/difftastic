require File.expand_path('../../../spec_helper', __FILE__)

describe "TrueClass#inspect" do
  it "returns the string 'true'" do
    true.inspect.should == "true"
  end
end
