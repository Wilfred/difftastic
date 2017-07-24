require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#last" do
  it "returns the last element" do
    [1, 1, 1, 1, 2].last.should == 2
  end

  it "returns nil if self is empty" do
    [].last.should == nil
  end

  it "returns the last count elements if given a count" do
    [1, 2, 3, 4, 5, 9].last(3).should == [4, 5, 9]
  end

  it "returns an empty array when passed a count on an empty array" do
    [].last(0).should == []
    [].last(1).should == []
  end

  it "returns an empty array when count == 0" do
    [1, 2, 3, 4, 5].last(0).should == []
  end

  it "returns an array containing the last element when passed count == 1" do
    [1, 2, 3, 4, 5].last(1).should == [5]
  end

  it "raises an ArgumentError when count is negative" do
    lambda { [1, 2].last(-1) }.should raise_error(ArgumentError)
  end

  it "returns the entire array when count > length" do
    [1, 2, 3, 4, 5, 9].last(10).should == [1, 2, 3, 4, 5, 9]
  end

  it "returns an array which is independent to the original when passed count" do
    ary = [1, 2, 3, 4, 5]
    ary.last(0).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
    ary.last(1).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
    ary.last(6).replace([1,2])
    ary.should == [1, 2, 3, 4, 5]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.last.should equal(empty)

    array = ArraySpecs.recursive_array
    array.last.should equal(array)
  end

  it "tries to convert the passed argument to an Integer usinig #to_int" do
    obj = mock('to_int')
    obj.should_receive(:to_int).and_return(2)
    [1, 2, 3, 4, 5].last(obj).should == [4, 5]
  end

  it "raises a TypeError if the passed argument is not numeric" do
    lambda { [1,2].last(nil) }.should raise_error(TypeError)
    lambda { [1,2].last("a") }.should raise_error(TypeError)

    obj = mock("nonnumeric")
    lambda { [1,2].last(obj) }.should raise_error(TypeError)
  end

  it "does not return subclass instance on Array subclasses" do
    ArraySpecs::MyArray[].last(0).should be_an_instance_of(Array)
    ArraySpecs::MyArray[].last(2).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].last(0).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].last(1).should be_an_instance_of(Array)
    ArraySpecs::MyArray[1, 2, 3].last(2).should be_an_instance_of(Array)
  end

  it "is not destructive" do
    a = [1, 2, 3]
    a.last
    a.should == [1, 2, 3]
    a.last(2)
    a.should == [1, 2, 3]
    a.last(3)
    a.should == [1, 2, 3]
  end
end
