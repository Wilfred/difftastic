require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "SortedSet#initialize" do
  it "is private" do
    SortedSet.should have_private_instance_method("initialize")
  end

  it "adds all elements of the passed Enumerable to self" do
    s = SortedSet.new([1, 2, 3])
    s.size.should eql(3)
    s.should include(1)
    s.should include(2)
    s.should include(3)
  end

  it "preprocesses all elements by a passed block before adding to self" do
    s = SortedSet.new([1, 2, 3]) { |x| x * x }
    s.size.should eql(3)
    s.should include(1)
    s.should include(4)
    s.should include(9)
  end
end
