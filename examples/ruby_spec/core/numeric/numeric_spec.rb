require File.expand_path('../../../spec_helper', __FILE__)

describe "Numeric" do
  it "includes Comparable" do
    Numeric.include?(Comparable).should == true
  end
end
