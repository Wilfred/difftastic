require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#empty?" do
  it "returns true if self is empty" do
    SortedSet[].empty?.should be_true
    SortedSet[1].empty?.should be_false
    SortedSet[1,2,3].empty?.should be_false
  end
end
