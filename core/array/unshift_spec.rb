require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#unshift" do
  it "prepends object to the original array" do
    a = [1, 2, 3]
    a.unshift("a").should equal(a)
    a.should == ['a', 1, 2, 3]
    a.unshift().should equal(a)
    a.should == ['a', 1, 2, 3]
    a.unshift(5, 4, 3)
    a.should == [5, 4, 3, 'a', 1, 2, 3]

    # shift all but one element
    a = [1, 2]
    a.shift
    a.unshift(3, 4)
    a.should == [3, 4, 2]

    # now shift all elements
    a.shift
    a.shift
    a.shift
    a.unshift(3, 4)
    a.should == [3, 4]
  end

  it "quietly ignores unshifting nothing" do
    [].unshift().should == []
    [].unshift(*[]).should == []
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.unshift(:new).should == [:new, empty]

    array = ArraySpecs.recursive_array
    array.unshift(:new)
    array[0..5].should == [:new, 1, 'two', 3.0, array, array]
  end

  it "raises a RuntimeError on a frozen array when the array is modified" do
    lambda { ArraySpecs.frozen_array.unshift(1) }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23666]
  it "raises a RuntimeError on a frozen array when the array would not be modified" do
    lambda { ArraySpecs.frozen_array.unshift    }.should raise_error(RuntimeError)
  end
end
