require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#subtract" do
  before :each do
    @set = SortedSet["a", "b", "c"]
  end

  it "deletes any elements contained in other and returns self" do
    @set.subtract(SortedSet["b", "c"]).should == @set
    @set.should == SortedSet["a"]
  end

  it "accepts any enumerable as other" do
    @set.subtract(["c"]).should == SortedSet["a", "b"]
  end
end
