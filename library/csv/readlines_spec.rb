require File.expand_path('../../../spec_helper', __FILE__)
require 'csv'

describe "CSV.readlines" do
  it "needs to be reviewed for spec completeness"
end

describe "CSV#readlines" do
  it "returns an Array of Array containing each element in a one-line CSV file" do
    file = CSV.new "a, b, c"
    file.readlines.should == [["a", " b", " c"]]
  end

  it "returns an Array of Arrays containing each element in a multi-line CSV file" do
    file = CSV.new "a, b, c\nd, e, f"
    file.readlines.should == [["a", " b", " c"], ["d", " e", " f"]]
  end

  it "returns nil for a missing value" do
    file = CSV.new "a,, b, c"
    file.readlines.should == [["a", nil, " b", " c"]]
  end
end
