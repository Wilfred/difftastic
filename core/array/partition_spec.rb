require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#partition" do
  it "returns two arrays" do
    [].partition {}.should == [[], []]
  end

  it "returns in the left array values for which the block evaluates to true" do
    ary = [0, 1, 2, 3, 4, 5]

    ary.partition { |i| true }.should == [ary, []]
    ary.partition { |i| 5 }.should == [ary, []]
    ary.partition { |i| false }.should == [[], ary]
    ary.partition { |i| nil }.should == [[], ary]
    ary.partition { |i| i % 2 == 0 }.should == [[0, 2, 4], [1, 3, 5]]
    ary.partition { |i| i / 3 == 0 }.should == [[0, 1, 2], [3, 4, 5]]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.partition { true }.should == [[empty], []]
    empty.partition { false }.should == [[], [empty]]

    array = ArraySpecs.recursive_array
    array.partition { true }.should == [
      [1, 'two', 3.0, array, array, array, array, array],
      []
    ]
    condition = true
    array.partition { condition = !condition }.should == [
      ['two', array, array, array],
      [1, 3.0, array, array]
    ]
  end

  it "does not return subclass instances on Array subclasses" do
    result = ArraySpecs::MyArray[1, 2, 3].partition { |x| x % 2 == 0 }
    result.should be_an_instance_of(Array)
    result[0].should be_an_instance_of(Array)
    result[1].should be_an_instance_of(Array)
  end
end
