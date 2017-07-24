require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#inspect" do
  it "returns a String representation of self" do
    SortedSet[].inspect.should be_kind_of(String)
    SortedSet[1, 2, 3].inspect.should be_kind_of(String)
    SortedSet["1", "2", "3"].inspect.should be_kind_of(String)
  end
end
