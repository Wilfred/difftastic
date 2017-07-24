require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/slice', __FILE__)

describe "Array#[]" do
  it_behaves_like(:array_slice, :[])
end

describe "Array.[]" do
  it "[] should return a new array populated with the given elements" do
    array = Array[1, 'a', nil]
    array[0].should == 1
    array[1].should == 'a'
    array[2].should == nil
  end

  it "when applied to a literal nested array, unpacks its elements into the containing array" do
    Array[1, 2, *[3, 4, 5]].should == [1, 2, 3, 4, 5]
  end

  it "when applied to a nested referenced array, unpacks its elements into the containing array" do
    splatted_array = Array[3, 4, 5]
    Array[1, 2, *splatted_array].should == [1, 2, 3, 4, 5]
  end

  it "can unpack 2 or more nested referenced array" do
    splatted_array = Array[3, 4, 5]
    splatted_array2 = Array[6, 7, 8]
    Array[1, 2, *splatted_array, *splatted_array2].should == [1, 2, 3, 4, 5, 6, 7, 8]
  end

  it "constructs a nested Hash for tailing key-value pairs" do
    Array[1, 2, 3 => 4, 5 => 6].should == [1, 2, { 3 => 4, 5 => 6 }]
  end

  describe "with a subclass of Array" do
    before :each do
      ScratchPad.clear
    end

    it "returns an instance of the subclass" do
      ArraySpecs::MyArray[1, 2, 3].should be_an_instance_of(ArraySpecs::MyArray)
    end

    it "does not call #initialize on the subclass instance" do
      ArraySpecs::MyArray[1, 2, 3].should == [1, 2, 3]
      ScratchPad.recorded.should be_nil
    end
  end
end
