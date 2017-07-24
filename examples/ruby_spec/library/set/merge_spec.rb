require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#merge" do
  it "adds the elements of the passed Enumerable to self" do
    Set[:a, :b].merge(Set[:b, :c, :d]).should == Set[:a, :b, :c, :d]
    Set[1, 2].merge([3, 4]).should == Set[1, 2, 3, 4]
  end

  it "returns self" do
    set = Set[1, 2]
    set.merge([3, 4]).should equal(set)
  end

  it "raises an ArgumentError when passed a non-Enumerable" do
    lambda { Set[1, 2].merge(1) }.should raise_error(ArgumentError)
    lambda { Set[1, 2].merge(Object.new) }.should raise_error(ArgumentError)
  end
end
