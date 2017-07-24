require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#friday?" do
  it "returns true if time represents Friday" do
    Time.local(2000, 1, 7).friday?.should == true
  end

  it "returns false if time doesn't represent Friday" do
    Time.local(2000, 1, 1).friday?.should == false
  end
end
