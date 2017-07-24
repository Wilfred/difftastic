require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Array#to_a" do
  it "returns self" do
    a = [1, 2, 3]
    a.to_a.should == [1, 2, 3]
    a.should equal(a.to_a)
  end

  it "does not return subclass instance on Array subclasses" do
    e = ArraySpecs::MyArray.new(1, 2)
    e.to_a.should be_an_instance_of(Array)
    e.to_a.should == [1, 2]
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    empty.to_a.should == empty

    array = ArraySpecs.recursive_array
    array.to_a.should == array
  end
end
