require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#transpose" do
  it "assumes an array of arrays and returns the result of transposing rows and columns" do
    [[1, 'a'], [2, 'b'], [3, 'c']].transpose.should == [[1, 2, 3], ["a", "b", "c"]]
    [[1, 2, 3], ["a", "b", "c"]].transpose.should == [[1, 'a'], [2, 'b'], [3, 'c']]
    [].transpose.should == []
    [[]].transpose.should == []
    [[], []].transpose.should == []
    [[0]].transpose.should == [[0]]
    [[0], [1]].transpose.should == [[0, 1]]
  end

  it "tries to convert the passed argument to an Array using #to_ary" do
    obj = mock('[1,2]')
    obj.should_receive(:to_ary).and_return([1, 2])
    [obj, [:a, :b]].transpose.should == [[1, :a], [2, :b]]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.transpose.should == empty

    a = []; a << a
    b = []; b << b
    [a, b].transpose.should == [[a, b]]

    a = [1]; a << a
    b = [2]; b << b
    [a, b].transpose.should == [ [1, 2], [a, b] ]
  end

  it "raises a TypeError if the passed Argument does not respond to #to_ary" do
    lambda { [Object.new, [:a, :b]].transpose }.should raise_error(TypeError)
  end

  it "does not call to_ary on array subclass elements" do
    ary = [ArraySpecs::ToAryArray[1, 2], ArraySpecs::ToAryArray[4, 6]]
    ary.transpose.should == [[1, 4], [2, 6]]
  end

  it "raises an IndexError if the arrays are not of the same length" do
    lambda { [[1, 2], [:a]].transpose }.should raise_error(IndexError)
  end

  it "does not return subclass instance on Array subclasses" do
    result = ArraySpecs::MyArray[ArraySpecs::MyArray[1, 2, 3], ArraySpecs::MyArray[4, 5, 6]].transpose
    result.should be_an_instance_of(Array)
    result[0].should be_an_instance_of(Array)
    result[1].should be_an_instance_of(Array)
  end
end
