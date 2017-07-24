require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#classify" do
  before :each do
    @set = SortedSet["one", "two", "three", "four"]
  end

  it "yields each Object in self in sorted order" do
    res = []
    @set.classify { |x| res << x }
    res.should == ["one", "two", "three", "four"].sort
  end

  it "returns an Enumerator when passed no block" do
    enum = @set.classify
    enum.should be_an_instance_of(Enumerator)

    classified = enum.each { |x| x.length }
    classified.should == { 3 => SortedSet["one", "two"], 4 => SortedSet["four"], 5 => SortedSet["three"] }
  end

  it "classifies the Objects in self based on the block's return value" do
    classified = @set.classify { |x| x.length }
    classified.should == { 3 => SortedSet["one", "two"], 4 => SortedSet["four"], 5 => SortedSet["three"] }
  end
end
