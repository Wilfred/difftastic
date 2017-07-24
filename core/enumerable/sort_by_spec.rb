require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#sort_by" do
  it "returns an array of elements ordered by the result of block" do
    a = EnumerableSpecs::Numerous.new("once", "upon", "a", "time")
    a.sort_by { |i| i[0] }.should == ["a", "once", "time", "upon"]
  end

  it "sorts the object by the given attribute" do
    a = EnumerableSpecs::SortByDummy.new("fooo")
    b = EnumerableSpecs::SortByDummy.new("bar")

    ar = [a, b].sort_by { |d| d.s }
    ar.should == [b, a]
  end

  it "returns an Enumerator when a block is not supplied" do
    a = EnumerableSpecs::Numerous.new("a","b")
    a.sort_by.should be_an_instance_of(Enumerator)
    a.to_a.should == ["a", "b"]
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.sort_by {|e| e.size}.should == [[1, 2], [3, 4, 5], [6, 7, 8, 9]]
  end

  it "returns an array of elements when a block is supplied and #map returns an enumerable" do
    b = EnumerableSpecs::MapReturnsEnumerable.new
    b.sort_by{ |x| -x }.should == [3, 2, 1]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :sort_by
end
