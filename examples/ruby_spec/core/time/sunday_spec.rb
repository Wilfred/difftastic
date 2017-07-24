require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#sunday?" do
  it "returns true if time represents Sunday" do
    Time.local(2000, 1, 2).sunday?.should == true
  end

  it "returns false if time doesn't represent Sunday" do
    Time.local(2000, 1, 1).sunday?.should == false
  end
end
