require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#==" do
  it "returns true when the passed Object is a SortedSet and self and the Object contain the same elements" do
    SortedSet[].should == SortedSet[]
    SortedSet[1, 2, 3].should == SortedSet[1, 2, 3]
    SortedSet["1", "2", "3"].should == SortedSet["1", "2", "3"]

    SortedSet[1, 2, 3].should_not == SortedSet[1.0, 2, 3]
    SortedSet[1, 2, 3].should_not == [1, 2, 3]
  end
end
