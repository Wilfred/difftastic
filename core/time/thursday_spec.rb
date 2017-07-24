require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#thursday?" do
  it "returns true if time represents Thursday" do
    Time.local(2000, 1, 6).thursday?.should == true
  end

  it "returns false if time doesn't represent Thursday" do
    Time.local(2000, 1, 1).thursday?.should == false
  end
end
