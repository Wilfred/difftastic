require File.expand_path('../../../spec_helper', __FILE__)

describe "Time#to_f" do
  it "returns the float number of seconds + usecs since the epoch" do
    Time.at(100, 100).to_f.should == 100.0001
  end
end
