require File.expand_path('../../../spec_helper', __FILE__)

describe "TrueClass#to_s" do
  it "returns the string 'true'" do
    true.to_s.should == "true"
  end
end
