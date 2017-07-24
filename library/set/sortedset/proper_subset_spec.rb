require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#proper_subset?" do
  before :each do
    @set = SortedSet[1, 2, 3, 4]
  end

  it "returns true if passed a SortedSet that self is a proper subset of" do
    SortedSet[].proper_subset?(@set).should be_true
    SortedSet[].proper_subset?(SortedSet[1, 2, 3]).should be_true
    SortedSet[].proper_subset?(SortedSet["a", "b", "c"]).should be_true

    SortedSet[1, 2, 3].proper_subset?(@set).should be_true
    SortedSet[1, 3].proper_subset?(@set).should be_true
    SortedSet[1, 2].proper_subset?(@set).should be_true
    SortedSet[1].proper_subset?(@set).should be_true

    SortedSet[5].proper_subset?(@set).should be_false
    SortedSet[1, 5].proper_subset?(@set).should be_false
    SortedSet["test"].proper_subset?(@set).should be_false

    @set.proper_subset?(@set).should be_false
    SortedSet[].proper_subset?(SortedSet[]).should be_false
  end

  it "raises an ArgumentError when passed a non-SortedSet" do
    lambda { SortedSet[].proper_subset?([]) }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_subset?(1) }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_subset?("test") }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_subset?(Object.new) }.should raise_error(ArgumentError)
  end
end
