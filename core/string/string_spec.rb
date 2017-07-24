require File.expand_path('../../../spec_helper', __FILE__)

describe "String" do
  it "includes Comparable" do
    String.include?(Comparable).should == true
  end
end
