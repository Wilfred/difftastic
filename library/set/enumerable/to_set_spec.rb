require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

describe "Emumerable#to_set" do
  it "returns a new Set created from self" do
    [1, 2, 3].to_set.should == Set[1, 2, 3]
    {a: 1, b: 2}.to_set.should == Set[[:b, 2], [:a, 1]]
  end

  it "allows passing an alternate class for Set" do
    sorted_set = [1, 2, 3].to_set(SortedSet)
    sorted_set.should == SortedSet[1, 2, 3]
    sorted_set.instance_of?(SortedSet).should == true
  end

  it "passes down passed blocks" do
    [1, 2, 3].to_set { |x| x * x }.should == Set[1, 4, 9]
  end
end
