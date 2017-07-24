require File.expand_path('../../../../spec_helper', __FILE__)
require 'set'

# Note: Flatten make little sens on sorted sets, because SortedSets are not (by default)
# comparable. For a SortedSet to be both valid and nested, we need to define a comparison operator:
module SortedSet_FlattenSpecs
  class ComparableSortedSet < SortedSet
    def <=>(other)
      return puts "#{other} vs #{self}" unless other.is_a?(ComparableSortedSet)
      to_a <=> other.to_a
    end
  end
end

describe "SortedSet#flatten" do
  it "returns a copy of self with each included SortedSet flattened" do
    klass = SortedSet_FlattenSpecs::ComparableSortedSet
    set = klass[klass[1,2], klass[3,4], klass[5,6,7], klass[8]]
    flattened_set = set.flatten

    flattened_set.should_not equal(set)
    flattened_set.should == klass[1, 2, 3, 4, 5, 6, 7, 8]
  end
end

describe "SortedSet#flatten!" do
  it "flattens self" do
    klass = SortedSet_FlattenSpecs::ComparableSortedSet
    set = klass[klass[1,2], klass[3,4], klass[5,6,7], klass[8]]
    set.flatten!
    set.should == klass[1, 2, 3, 4, 5, 6, 7, 8]
  end

  it "returns self when self was modified" do
    klass = SortedSet_FlattenSpecs::ComparableSortedSet
    set = klass[klass[1,2], klass[3,4]]
    set.flatten!.should equal(set)
  end

  it "returns nil when self was not modified" do
    set = SortedSet[1, 2, 3, 4]
    set.flatten!.should be_nil
  end
end
