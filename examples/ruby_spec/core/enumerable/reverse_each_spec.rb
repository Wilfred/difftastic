require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#reverse_each" do
  it "traverses enum in reverse order and pass each element to block" do
    a=[]
    EnumerableSpecs::Numerous.new.reverse_each { |i| a << i }
    a.should == [4, 1, 6, 3, 5, 2]
  end

  it "returns an Enumerator if no block given" do
    enum = EnumerableSpecs::Numerous.new.reverse_each
    enum.should be_an_instance_of(Enumerator)
    enum.to_a.should == [4, 1, 6, 3, 5, 2]
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    yielded = []
    multi.reverse_each {|e| yielded << e }
    yielded.should == [[6, 7, 8, 9], [3, 4, 5], [1, 2]]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :reverse_each
end
