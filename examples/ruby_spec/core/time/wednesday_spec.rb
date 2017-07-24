require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#wednesday?" do
  it "returns true if time represents Wednesday" do
    Time.local(2000, 1, 5).wednesday?.should == true
  end

  it "returns false if time doesn't represent Wednesday" do
    Time.local(2000, 1, 1).wednesday?.should == false
  end
end
