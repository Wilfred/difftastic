require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#minmax_by" do
  it "returns an enumerator if no block" do
    EnumerableSpecs::Numerous.new(42).minmax_by.should be_an_instance_of(Enumerator)
  end

  it "returns nil if #each yields no objects" do
    EnumerableSpecs::Empty.new.minmax_by {|o| o.nonesuch }.should == [nil, nil]
  end

  it "returns the object for whom the value returned by block is the largest" do
    EnumerableSpecs::Numerous.new(*%w[1 2 3]).minmax_by {|obj| obj.to_i }.should == ['1', '3']
    EnumerableSpecs::Numerous.new(*%w[three five]).minmax_by {|obj| obj.length }.should == ['five', 'three']
  end

  it "returns the object that appears first in #each in case of a tie" do
    a, b, c, d = '1', '1', '2', '2'
    mm = EnumerableSpecs::Numerous.new(a, b, c, d).minmax_by {|obj| obj.to_i }
    mm[0].should equal(a)
    mm[1].should equal(c)
  end

  it "uses min/max.<=>(current) to determine order" do
    a, b, c = (1..3).map{|n| EnumerableSpecs::ReverseComparable.new(n)}

    # Just using self here to avoid additional complexity
    EnumerableSpecs::Numerous.new(a, b, c).minmax_by {|obj| obj }.should == [c, a]
  end

  it "is able to return the maximum for enums that contain nils" do
    enum = EnumerableSpecs::Numerous.new(nil, nil, true)
    enum.minmax_by {|o| o.nil? ? 0 : 1 }.should == [nil, true]
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.minmax_by {|e| e.size}.should == [[1, 2], [6, 7, 8, 9]]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :minmax_by
end
