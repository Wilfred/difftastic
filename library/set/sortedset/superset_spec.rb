require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#superset?" do
  before :each do
    @set = SortedSet[1, 2, 3, 4]
  end

  it "returns true if passed a SortedSet that equals self or self is a proper superset of" do
    @set.superset?(@set).should be_true
    SortedSet[].superset?(SortedSet[]).should be_true

    @set.superset?(SortedSet[]).should be_true
    SortedSet[1, 2, 3].superset?(SortedSet[]).should be_true
    SortedSet["a", "b", "c"].superset?(SortedSet[]).should be_true

    @set.superset?(SortedSet[1, 2, 3]).should be_true
    @set.superset?(SortedSet[1, 3]).should be_true
    @set.superset?(SortedSet[1, 2]).should be_true
    @set.superset?(SortedSet[1]).should be_true

    @set.superset?(SortedSet[5]).should be_false
    @set.superset?(SortedSet[1, 5]).should be_false
    @set.superset?(SortedSet["test"]).should be_false
  end

  it "raises an ArgumentError when passed a non-SortedSet" do
    lambda { SortedSet[].superset?([]) }.should raise_error(ArgumentError)
    lambda { SortedSet[].superset?(1) }.should raise_error(ArgumentError)
    lambda { SortedSet[].superset?("test") }.should raise_error(ArgumentError)
    lambda { SortedSet[].superset?(Object.new) }.should raise_error(ArgumentError)
  end
end
