require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#+" do
  it "concatenates two arrays" do
    ([ 1, 2, 3 ] + [ 3, 4, 5 ]).should == [1, 2, 3, 3, 4, 5]
    ([ 1, 2, 3 ] + []).should == [1, 2, 3]
    ([] + [ 1, 2, 3 ]).should == [1, 2, 3]
    ([] + []).should == []
  end

  it "can concatenate an array with itself" do
    ary = [1, 2, 3]
    (ary + ary).should == [1, 2, 3, 1, 2, 3]
  end

  it "tries to convert the passed argument to an Array using #to_ary" do
    obj = mock('["x", "y"]')
    obj.should_receive(:to_ary).and_return(["x", "y"])
    ([1, 2, 3] + obj).should == [1, 2, 3, "x", "y"]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    (empty + empty).should == [empty, empty]

    array = ArraySpecs.recursive_array
    (empty + array).should == [empty, 1, 'two', 3.0, array, array, array, array, array]
    (array + array).should == [
      1, 'two', 3.0, array, array, array, array, array,
      1, 'two', 3.0, array, array, array, array, array]
  end

  it "does return subclass instances with Array subclasses" do
    (ArraySpecs::MyArray[1, 2, 3] + []).should be_an_instance_of(Array)
    (ArraySpecs::MyArray[1, 2, 3] + ArraySpecs::MyArray[]).should be_an_instance_of(Array)
    ([1, 2, 3] + ArraySpecs::MyArray[]).should be_an_instance_of(Array)
  end

  it "does not call to_ary on array subclasses" do
    ([5, 6] + ArraySpecs::ToAryArray[1, 2]).should == [5, 6, 1, 2]
  end

  it "does not get infected even if an original array is tainted" do
    ([1, 2] + [3, 4]).tainted?.should be_false
    ([1, 2].taint + [3, 4]).tainted?.should be_false
    ([1, 2] + [3, 4].taint).tainted?.should be_false
    ([1, 2].taint + [3, 4].taint).tainted?.should be_false
  end

  it "does not infected even if an original array is untrusted" do
    ([1, 2] + [3, 4]).untrusted?.should be_false
    ([1, 2].untrust + [3, 4]).untrusted?.should be_false
    ([1, 2] + [3, 4].untrust).untrusted?.should be_false
    ([1, 2].untrust + [3, 4].untrust).untrusted?.should be_false
  end
end
