require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#each" do
  before :each do
    @set = SortedSet[1, 2, 3]
  end

  it "yields each Object in self in sorted order" do
    ret = []
    SortedSet["one", "two", "three"].each { |x| ret << x }
    ret.should == ["one", "two", "three"].sort
  end

  it "returns self" do
    @set.each { |x| x }.should equal(@set)
  end

  it "returns an Enumerator when not passed a block" do
    enum = @set.each

    ret = []
    enum.each { |x| ret << x }
    ret.sort.should == [1, 2, 3]
  end
end
