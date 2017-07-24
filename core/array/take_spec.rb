require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#take" do
  it "returns the first specified number of elements" do
    [1, 2, 3].take(2).should == [1, 2]
  end

  it "returns all elements when the argument is greater than the Array size" do
    [1, 2].take(99).should == [1, 2]
  end

  it "returns all elements when the argument is less than the Array size" do
    [1, 2].take(4).should == [1, 2]
  end

  it "returns an empty Array when passed zero" do
    [1].take(0).should == []
  end

  it "returns an empty Array when called on an empty Array" do
    [].take(3).should == []
  end

  it "raises an ArgumentError when the argument is negative" do
    lambda{ [1].take(-3) }.should raise_error(ArgumentError)
  end
end
