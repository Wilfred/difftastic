require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#partition" do
  it "returns two arrays, the first containing elements for which the block is true, the second containing the rest" do
    EnumerableSpecs::Numerous.new.partition { |i| i % 2 == 0 }.should == [[2, 6, 4], [5, 3, 1]]
  end

  it "returns an Enumerator if called without a block" do
    EnumerableSpecs::Numerous.new.partition.should be_an_instance_of(Enumerator)
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.partition {|e| e == [3, 4, 5] }.should == [[[3, 4, 5]], [[1, 2], [6, 7, 8, 9]]]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :partition
end
