require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#insert" do
  it "returns self" do
    ary = []
    ary.insert(0).should equal(ary)
    ary.insert(0, :a).should equal(ary)
  end

  it "inserts objects before the element at index for non-negative index" do
    ary = []
    ary.insert(0, 3).should == [3]
    ary.insert(0, 1, 2).should == [1, 2, 3]
    ary.insert(0).should == [1, 2, 3]

    # Let's just assume insert() always modifies the array from now on.
    ary.insert(1, 'a').should == [1, 'a', 2, 3]
    ary.insert(0, 'b').should == ['b', 1, 'a', 2, 3]
    ary.insert(5, 'c').should == ['b', 1, 'a', 2, 3, 'c']
    ary.insert(7, 'd').should == ['b', 1, 'a', 2, 3, 'c', nil, 'd']
    ary.insert(10, 5, 4).should == ['b', 1, 'a', 2, 3, 'c', nil, 'd', nil, nil, 5, 4]
  end

  it "appends objects to the end of the array for index == -1" do
    [1, 3, 3].insert(-1, 2, 'x', 0.5).should == [1, 3, 3, 2, 'x', 0.5]
  end

  it "inserts objects after the element at index with negative index" do
    ary = []
    ary.insert(-1, 3).should == [3]
    ary.insert(-2, 2).should == [2, 3]
    ary.insert(-3, 1).should == [1, 2, 3]
    ary.insert(-2, -3).should == [1, 2, -3, 3]
    ary.insert(-1, []).should == [1, 2, -3, 3, []]
    ary.insert(-2, 'x', 'y').should == [1, 2, -3, 3, 'x', 'y', []]
    ary = [1, 2, 3]
  end

  it "pads with nils if the index to be inserted to is past the end" do
    [].insert(5, 5).should == [nil, nil, nil, nil, nil, 5]
  end

  it "can insert before the first element with a negative index" do
    [1, 2, 3].insert(-4, -3).should == [-3, 1, 2, 3]
  end

  it "raises an IndexError if the negative index is out of bounds" do
    lambda { [].insert(-2, 1)  }.should raise_error(IndexError)
    lambda { [1].insert(-3, 2) }.should raise_error(IndexError)
  end

  it "does nothing of no object is passed" do
    [].insert(0).should == []
    [].insert(-1).should == []
    [].insert(10).should == []
    [].insert(-2).should == []
  end

  it "tries to convert the passed position argument to an Integer using #to_int" do
    obj = mock('2')
    obj.should_receive(:to_int).and_return(2)
    [].insert(obj, 'x').should == [nil, nil, 'x']
  end

  it "raises an ArgumentError if no argument passed" do
    lambda { [].insert() }.should raise_error(ArgumentError)
  end

  it "raises a RuntimeError on frozen arrays when the array is modified" do
    lambda { ArraySpecs.frozen_array.insert(0, 'x') }.should raise_error(RuntimeError)
  end

  # see [ruby-core:23666]
  it "raises a RuntimeError on frozen arrays when the array would not be modified" do
    lambda { ArraySpecs.frozen_array.insert(0)      }.should raise_error(RuntimeError)
  end
end
