require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/enumerable_enumeratorized', __FILE__)

describe "Enumerable#each_with_index" do

  before :each do
    @b = EnumerableSpecs::Numerous.new(2, 5, 3, 6, 1, 4)
  end

  it "passes each element and its index to block" do
    @a = []
    @b.each_with_index { |o, i| @a << [o, i] }
    @a.should == [[2, 0], [5, 1], [3, 2], [6, 3], [1, 4], [4, 5]]
  end

  it "provides each element to the block" do
    acc = []
    obj = EnumerableSpecs::EachDefiner.new()
    res = obj.each_with_index {|a,i| acc << [a,i]}
    acc.should == []
    obj.should == res
  end

  it "provides each element to the block and its index" do
    acc = []
    res = @b.each_with_index {|a,i| acc << [a,i]}
    [[2, 0], [5, 1], [3, 2], [6, 3], [1, 4], [4, 5]].should == acc
    res.should eql(@b)
  end

  it "binds splat arguments properly" do
    acc = []
    res = @b.each_with_index { |*b| c,d = b; acc << c; acc << d }
    [2, 0, 5, 1, 3, 2, 6, 3, 1, 4, 4, 5].should == acc
    res.should eql(@b)
  end

  it "returns an enumerator if no block" do
    e = @b.each_with_index
    e.should be_an_instance_of(Enumerator)
    e.to_a.should == [[2, 0], [5, 1], [3, 2], [6, 3], [1, 4], [4, 5]]
  end

  it "passes extra parameters to each" do
    count = EnumerableSpecs::EachCounter.new(:apple)
    e = count.each_with_index(:foo, :bar)
    e.to_a.should == [[:apple, 0]]
    count.arguments_passed.should == [:foo, :bar]
  end

  it_behaves_like :enumerable_enumeratorized_with_origin_size, :each_with_index
end
