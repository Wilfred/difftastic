require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#monday?" do
  it "returns true if time represents Monday" do
    Time.local(2000, 1, 3).monday?.should == true
  end

  it "returns false if time doesn't represent Monday" do
    Time.local(2000, 1, 1).monday?.should == false
  end
end
