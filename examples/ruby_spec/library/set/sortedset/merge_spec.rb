require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#merge" do
  it "adds the elements of the passed Enumerable to self" do
    SortedSet["a", "b"].merge(SortedSet["b", "c", "d"]).should == SortedSet["a", "b", "c", "d"]
    SortedSet[1, 2].merge([3, 4]).should == SortedSet[1, 2, 3, 4]
  end

  it "returns self" do
    set = SortedSet[1, 2]
    set.merge([3, 4]).should equal(set)
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { SortedSet[1, 2].merge(1) }.should raise_error(ArgumentError)
    lambda { SortedSet[1, 2].merge(Object.new) }.should raise_error(ArgumentError)
  end
end
