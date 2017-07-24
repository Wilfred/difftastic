require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#drop" do
  it "removes the specified number of elements from the start of the array" do
    [1, 2, 3, 4, 5].drop(2).should == [3, 4, 5]
  end

  it "raises an ArgumentError if the number of elements specified is negative" do
   lambda { [1, 2].drop(-3) }.should raise_error(ArgumentError)
  end

  it "returns an empty Array if all elements are dropped" do
    [1, 2].drop(2).should == []
  end

  it "returns an empty Array when called on an empty Array" do
    [].drop(0).should == []
  end

  it "does not remove any elements when passed zero" do
    [1, 2].drop(0).should == [1, 2]
  end

  it "returns an empty Array if more elements than exist are dropped" do
    [1, 2].drop(3).should == []
  end

  it 'acts correctly after a shift' do
    ary = [nil, 1, 2]
    ary.shift
    ary.drop(1).should == [2]
  end
end
