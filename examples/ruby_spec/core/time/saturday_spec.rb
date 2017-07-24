require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#saturday?" do
  it "returns true if time represents Saturday" do
    Time.local(2000, 1, 1).saturday?.should == true
  end

  it "returns false if time doesn't represent Saturday" do
    Time.local(2000, 1, 2).saturday?.should == false
  end
end
