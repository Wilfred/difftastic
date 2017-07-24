require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#eql?" do
  it "returns true when the passed argument is a SortedSet and contains the same elements" do
    SortedSet[].should eql(SortedSet[])
    SortedSet[1, 2, 3].should eql(SortedSet[1, 2, 3])
    SortedSet[1, 2, 3].should eql(SortedSet[3, 2, 1])

#    SortedSet["a", :b, ?c].should eql(SortedSet[?c, :b, "a"])

    SortedSet[1, 2, 3].should_not eql(SortedSet[1.0, 2, 3])
    SortedSet[1, 2, 3].should_not eql(SortedSet[2, 3])
    SortedSet[1, 2, 3].should_not eql(SortedSet[])
  end
end
