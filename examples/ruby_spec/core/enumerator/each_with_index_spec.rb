require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../shared/enumerator/with_index', __FILE__)
require File.expand_path('../../enumerable/shared/enumeratorized', __FILE__)

describe "Enumerator#each_with_index" do
  it_behaves_like(:enum_with_index, :each_with_index)
  it_behaves_like(:enumeratorized_with_origin_size, :each_with_index, [1,2,3].select)

  it "returns a new Enumerator when no block is given" do
    enum1 = [1,2,3].select
    enum2 = enum1.each_with_index
    enum2.should be_an_instance_of(Enumerator)
    enum1.should_not === enum2
  end

  it "raises an ArgumentError if passed extra arguments" do
    lambda do
      [1].to_enum.each_with_index(:glark)
    end.should raise_error(ArgumentError)
  end

  it "passes on the given block's return value" do
    arr = [1,2,3]
    arr.delete_if.with_index { |a,b| false }
    arr.should == [1,2,3]
  end

  it "returns the iterator's return value" do
    [1,2,3].select.with_index { |a,b| false }.should == []
  end
end

describe "Enumerator#each_with_index" do
  it "returns the correct value if chained with itself" do
    [:a].each_with_index.each_with_index.to_a.should == [[[:a,0],0]]
    [:a].each.with_index.with_index.to_a.should == [[[:a,0],0]]
  end
end
