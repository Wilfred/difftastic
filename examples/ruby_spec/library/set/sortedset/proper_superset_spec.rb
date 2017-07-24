require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#proper_superset?" do
  before :each do
    @set = SortedSet[1, 2, 3, 4]
  end

  it "returns true if passed a SortedSet that self is a proper superset of" do
    @set.proper_superset?(SortedSet[]).should be_true
    SortedSet[1, 2, 3].proper_superset?(SortedSet[]).should be_true
    SortedSet["a", "b", "c"].proper_superset?(SortedSet[]).should be_true

    @set.proper_superset?(SortedSet[1, 2, 3]).should be_true
    @set.proper_superset?(SortedSet[1, 3]).should be_true
    @set.proper_superset?(SortedSet[1, 2]).should be_true
    @set.proper_superset?(SortedSet[1]).should be_true

    @set.proper_superset?(SortedSet[5]).should be_false
    @set.proper_superset?(SortedSet[1, 5]).should be_false
    @set.proper_superset?(SortedSet["test"]).should be_false

    @set.proper_superset?(@set).should be_false
    SortedSet[].proper_superset?(SortedSet[]).should be_false
  end

  it "raises an ArgumentError when passed a non-SortedSet" do
    lambda { SortedSet[].proper_superset?([]) }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_superset?(1) }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_superset?("test") }.should raise_error(ArgumentError)
    lambda { SortedSet[].proper_superset?(Object.new) }.should raise_error(ArgumentError)
  end
end
