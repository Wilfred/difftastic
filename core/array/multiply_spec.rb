require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/join', __FILE__)

describe "Array#*" do
  it "tries to convert the passed argument to a String using #to_str" do
    obj = mock('separator')
    obj.should_receive(:to_str).and_return('::')
    ([1, 2, 3, 4] * obj).should == '1::2::3::4'
  end

  it "tires to convert the passed argument to an Integer using #to_int" do
    obj = mock('count')
    obj.should_receive(:to_int).and_return(2)
    ([1, 2, 3, 4] * obj).should == [1, 2, 3, 4, 1, 2, 3, 4]
  end

  it "raises a TypeError if the argument can neither be converted to a string nor an integer" do
    obj = mock('not a string or integer')
    lambda{ [1,2] * obj }.should raise_error(TypeError)
  end

  it "converts the passed argument to a String rather than an Integer" do
    obj = mock('2')
    def obj.to_int() 2 end
    def obj.to_str() "2" end
    ([:a, :b, :c] * obj).should == "a2b2c"
  end

  it "raises a TypeError is the passed argument is nil" do
    lambda{ [1,2] * nil }.should raise_error(TypeError)
  end

  it "raises an ArgumentError when passed 2 or more arguments" do
    lambda{ [1,2].send(:*, 1, 2) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when passed no arguments" do
    lambda{ [1,2].send(:*) }.should raise_error(ArgumentError)
  end
end

describe "Array#* with an integer" do
  it "concatenates n copies of the array when passed an integer" do
    ([ 1, 2, 3 ] * 0).should == []
    ([ 1, 2, 3 ] * 1).should == [1, 2, 3]
    ([ 1, 2, 3 ] * 3).should == [1, 2, 3, 1, 2, 3, 1, 2, 3]
    ([] * 10).should == []
  end

  it "does not return self even if the passed integer is 1" do
    ary = [1, 2, 3]
    (ary * 1).should_not equal(ary)
  end

  it "properly handles recursive arrays" do
    empty = ArraySpecs.empty_recursive_array
    (empty * 0).should == []
    (empty * 1).should == empty
    (empty * 3).should == [empty, empty, empty]

    array = ArraySpecs.recursive_array
    (array * 0).should == []
    (array * 1).should == array
  end

  it "raises an ArgumentError when passed a negative integer" do
    lambda { [ 1, 2, 3 ] * -1 }.should raise_error(ArgumentError)
    lambda { [] * -1 }.should raise_error(ArgumentError)
  end

  describe "with a subclass of Array" do
    before :each do
      ScratchPad.clear

      @array = ArraySpecs::MyArray[1, 2, 3, 4, 5]
    end

    it "returns a subclass instance" do
      (@array * 0).should be_an_instance_of(ArraySpecs::MyArray)
      (@array * 1).should be_an_instance_of(ArraySpecs::MyArray)
      (@array * 2).should be_an_instance_of(ArraySpecs::MyArray)
    end

    it "does not call #initialize on the subclass instance" do
      (@array * 2).should == [1, 2, 3, 4, 5, 1, 2, 3, 4, 5]
      ScratchPad.recorded.should be_nil
    end
  end

  it "copies the taint status of the original array even if the passed count is 0" do
    ary = [1, 2, 3]
    ary.taint
    (ary * 0).tainted?.should == true
  end

  it "copies the taint status of the original array even if the array is empty" do
    ary = []
    ary.taint
    (ary * 3).tainted?.should == true
  end

  it "copies the taint status of the original array if the passed count is not 0" do
    ary = [1, 2, 3]
    ary.taint
    (ary * 1).tainted?.should == true
    (ary * 2).tainted?.should == true
  end

  it "copies the untrusted status of the original array even if the passed count is 0" do
    ary = [1, 2, 3]
    ary.untrust
    (ary * 0).untrusted?.should == true
  end

  it "copies the untrusted status of the original array even if the array is empty" do
    ary = []
    ary.untrust
    (ary * 3).untrusted?.should == true
  end

  it "copies the untrusted status of the original array if the passed count is not 0" do
    ary = [1, 2, 3]
    ary.untrust
    (ary * 1).untrusted?.should == true
    (ary * 2).untrusted?.should == true
  end
end

describe "Array#* with a string" do
  it_behaves_like :array_join_with_string_separator, :*
end
