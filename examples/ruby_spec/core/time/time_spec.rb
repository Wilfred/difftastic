require File.expand_path('../../../spec_helper', __FILE__)

describe "Time" do
  it "includes Comparable" do
    Time.include?(Comparable).should == true
  end
end
