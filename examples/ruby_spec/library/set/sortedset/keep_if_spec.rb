require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#keep_if" do
  before :each do
    @set = SortedSet["one", "two", "three"]
  end

  it "yields each Object in self in sorted order" do
    ret = []
    @set.keep_if { |x| ret << x }
    ret.should == ["one", "two", "three"].sort
  end

  it "keeps every element from self for which the passed block returns true" do
    @set.keep_if { |x| x.size != 3 }
    @set.to_a.should == ["three"]
  end

  it "returns self" do
    @set.keep_if {}.should equal(@set)
  end

  it "returns an Enumerator when passed no block" do
    enum = @set.keep_if
    enum.should be_an_instance_of(Enumerator)

    enum.each { |x| x.size != 3 }
    @set.to_a.should == ["three"]
  end
end
