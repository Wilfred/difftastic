require File.expand_path('../../../spec_helper', __FILE__)

describe "NilClass#to_s" do
  it "returns the string ''" do
    nil.to_s.should == ""
  end
end
