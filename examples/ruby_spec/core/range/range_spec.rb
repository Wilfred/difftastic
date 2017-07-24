require File.expand_path('../../../spec_helper', __FILE__)

describe "Range" do
  it "includes Enumerable" do
    Range.include?(Enumerable).should == true
  end
end
