require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#push" do
  it "appends the arguments to the array" do
    a = [ "a", "b", "c" ]
    a.push("d", "e", "f").should equal(a)
    a.push().should == ["a", "b", "c", "d", "e", "f"]
    a.push(5)
    a.should == ["a", "b", "c", "d", "e", "f", 5]

    a = [0, 1]
    a.push(2)
    a.should == [0, 1, 2]
  end

  it "isn't confused by previous shift" do
    a = [ "a", "b", "c" ]
    a.shift
    a.push("foo")
    a.should == ["b", "c", "foo"]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.push(:last).should == [empty, :last]

    array = ArraySpecs.recursive_array
    array.push(:last).should == [1, 'two', 3.0, array, array, array, array, array, :last]
  end

  it "raises a RuntimeError on a frozen array" do
    lambda { ArraySpecs.frozen_array.push(1) }.should raise_error(RuntimeError)
    lambda { ArraySpecs.frozen_array.push }.should raise_error(RuntimeError)
  end
end
