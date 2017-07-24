require File.expand_path('../../../spec_helper', __FILE__)
require 'set'

describe "Set#inspect" do
  it "returns a String representation of self" do
    Set[].inspect.should be_kind_of(String)
    Set[nil, false, true].inspect.should be_kind_of(String)
    Set[1, 2, 3].inspect.should be_kind_of(String)
    Set["1", "2", "3"].inspect.should be_kind_of(String)
    Set[:a, "b", Set[?c]].inspect.should be_kind_of(String)
  end

  it "correctly handles self-references" do
    (set = Set[]) << set
    set.inspect.should be_kind_of(String)
    set.inspect.should include("#<Set: {...}>")
  end
end
