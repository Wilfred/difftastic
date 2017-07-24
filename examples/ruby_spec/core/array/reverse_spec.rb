require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#reverse" do
  it "returns a new array with the elements in reverse order" do
    [].reverse.should == []
    [1, 3, 5, 2].reverse.should == [2, 5, 3, 1]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.reverse.should == empty

    array = ArraySpecs.recursive_array
    array.reverse.should == [array, array, array, array, array, 3.0, 'two', 1]
  end

  it "does not return subclass instance on Array subclasses" do
    ArraySpecs::MyArray[1, 2, 3].reverse.should be_an_instance_of(Array)
  end
end

describe "Array#reverse!" do
  it "reverses the elements in place" do
    a = [6, 3, 4, 2, 1]
    a.reverse!.should equal(a)
    a.should == [1, 2, 4, 3, 6]
    [].reverse!.should == []
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.reverse!.should == [empty]

    array = ArraySpecs.recursive_array
    array.reverse!.should == [array, array, array, array, array, 3.0, 'two', 1]
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { ArraySpecs.frozen_array.reverse! }.should raise_error(RuntimeError)
  end
end
