require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#replace" do
  before :each do
    @set = SortedSet["a", "b", "c"]
  end

  it "replaces the contents with other and returns self" do
    @set.replace(SortedSet[1, 2, 3]).should == @set
    @set.should == SortedSet[1, 2, 3]
  end

  it "accepts any enumerable as other" do
    @set.replace([1, 2, 3]).should == SortedSet[1, 2, 3]
  end
end
