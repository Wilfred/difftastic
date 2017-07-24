require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#subset?" do
  before :each do
    @set = SortedSet[1, 2, 3, 4]
  end

  it "returns true if passed a SortedSet that is equal to self or self is a subset of" do
    @set.subset?(@set).should be_true
    SortedSet[].subset?(SortedSet[]).should be_true

    SortedSet[].subset?(@set).should be_true
    SortedSet[].subset?(SortedSet[1, 2, 3]).should be_true
    SortedSet[].subset?(SortedSet["a", "b", "c"]).should be_true

    SortedSet[1, 2, 3].subset?(@set).should be_true
    SortedSet[1, 3].subset?(@set).should be_true
    SortedSet[1, 2].subset?(@set).should be_true
    SortedSet[1].subset?(@set).should be_true

    SortedSet[5].subset?(@set).should be_false
    SortedSet[1, 5].subset?(@set).should be_false
    SortedSet["test"].subset?(@set).should be_false
  end

  it "raises an ArgumentError when passed a non-SortedSet" do
    lambda { SortedSet[].subset?([]) }.should raise_error(ArgumentError)
    lambda { SortedSet[].subset?(1) }.should raise_error(ArgumentError)
    lambda { SortedSet[].subset?("test") }.should raise_error(ArgumentError)
    lambda { SortedSet[].subset?(Object.new) }.should raise_error(ArgumentError)
  end
end
