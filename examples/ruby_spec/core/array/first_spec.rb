require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#first" do
  it "returns the first element" do
    %w{a b c}.first.should == 'a'
    [nil].first.should == nil
  end

  it "returns nil if self is empty" do
    [].first.should == nil
  end

  it "returns the first count elements if given a count" do
    [true, false, true, nil, false].first(2).should == [true, false]
  end

  it "returns an empty array when passed count on an empty array" do
    [].first(0).should == []
    [].first(1).should == []
    [].first(2).should == []
  end

  it "returns an empty array when passed count == 0" do
    [1, 2, 3, 4, 5].first(0).should == []
  end

  it "returns an array containing the first element when passed count == 1" do
    [1, 2, 3, 4, 5].first(1).should == [1]
  end

  it "raises an ArgumentError when count is negative" do
    lambda { [1, 2].first(-1) }.should raise_error(ArgumentError)
  end

  it "raises a RangeError when count is a Bignum" do
    lambda { [].first(bignum_value) }.should raise_error(RangeError)
  end

  it "returns the entire array when count > length" do
    [1, 2, 3, 4, 5, 9].first(10).should == [1, 2, 3, 4, 5, 9]
  end

  it "returns an array which is independent to the original when passed count" do
    ary = [1, 2, 3, 4, 5]
    ary.first(0).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
    ary.first(1).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
    ary.first(6).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.first.should equal(empty)

    ary = ArraySpecs.head_recursive_array
    ary.first.should equal(ary)
  end

  it "tries to convert the passed argument to an Integer using #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(2)
    [1, 2, 3, 4, 5].first(obj).should == [1, 2]
  end

  it "raises a TypeError if the passed argument is not numeric" do
    lambda { [1,2].first(nil) }.should raise_error(TypeError)
    lambda { [1,2].first("a") }.should raise_error(TypeError)

    obj = mock("nonnumeric")
    lambda { [1,2].first(obj) }.should raise_error(TypeError)
  end

  it "does not return subclass instance when passed count on Array subclasses" do
    ArraySpecs::MyArray[].first(0).should be_an_instance_of(Array)
    ArraySpecs::MyArray[].first(2).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].first(0).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].first(1).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].first(2).should be_an_instance_of(Array)
  end

  it "is not destructive" do
    a = [1, 2, 3]
    a.first
    a.should == [1, 2, 3]
    a.first(2)
    a.should == [1, 2, 3]
    a.first(3)
    a.should == [1, 2, 3]
  end
end
