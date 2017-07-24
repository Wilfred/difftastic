require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#each" do
  before :each do
    @set = Set[1, 2, 3]
  end

  it "yields each Object in self" do
    ret = []
    @set.each { |x| ret << x }
    ret.sort.should == [1, 2, 3]
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
