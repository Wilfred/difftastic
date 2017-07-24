require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Enumerable#sort" do
  it "sorts by the natural order as defined by <=>" do
    EnumerableSpecs::Numerous.new.sort.should == [1, 2, 3, 4, 5, 6]
    sorted = EnumerableSpecs::ComparesByVowelCount.wrap("a" * 1, "a" * 2, "a"*3, "a"*4, "a"*5)
    EnumerableSpecs::Numerous.new(sorted[2],sorted[0],sorted[1],sorted[3],sorted[4]).sort.should == sorted
  end

  it "yields elements to the provided block" do
    EnumerableSpecs::Numerous.new.sort { |a, b| b <=> a }.should == [6, 5, 4, 3, 2, 1]
    EnumerableSpecs::Numerous.new(2,0,1,3,4).sort { |n, m| -(n <=> m) }.should == [4,3,2,1,0]
  end

  it "raises a NoMethodError if elements do not define <=>" do
    lambda do
      EnumerableSpecs::Numerous.new(BasicObject.new, BasicObject.new, BasicObject.new).sort
    end.should raise_error(NoMethodError)
  end

  it "sorts enumerables that contain nils" do
    arr = EnumerableSpecs::Numerous.new(nil, true, nil, false, nil, true, nil, false, nil)
    arr.sort { |a, b|
      x = a ? -1 : a.nil? ? 0 : 1
      y = b ? -1 : b.nil? ? 0 : 1
      x <=> y
    }.should == [true, true, nil, nil, nil, nil, nil, false, false]
  end

  it "compare values returned by block with 0" do
    EnumerableSpecs::Numerous.new.sort { |n, m| -(n+m) * (n <=> m) }.should == [6, 5, 4, 3, 2, 1]
    EnumerableSpecs::Numerous.new.sort { |n, m|
      EnumerableSpecs::ComparableWithFixnum.new(-(n+m) * (n <=> m))
    }.should == [6, 5, 4, 3, 2, 1]
    lambda {
      EnumerableSpecs::Numerous.new.sort { |n, m| (n <=> m).to_s }
    }.should raise_error(ArgumentError)
  end

  it "raises an error if objects can't be compared" do
    a=EnumerableSpecs::Numerous.new(EnumerableSpecs::Uncomparable.new, EnumerableSpecs::Uncomparable.new)
    lambda {a.sort}.should raise_error(ArgumentError)
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.sort {|a, b| a.first <=> b.first}.should == [[1, 2], [3, 4, 5], [6, 7, 8, 9]]
  end

  it "doesn't raise an error if #to_a returns a frozen Array" do
    EnumerableSpecs::Freezy.new.sort.should == [1,2]
  end
end
