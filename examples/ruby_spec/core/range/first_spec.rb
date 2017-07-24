require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/begin', __FILE__)

describe "Range#first" do
  it_behaves_like(:range_begin, :first)

  it "returns the specified number of elements from the beginning" do
    (0..2).first(2).should == [0, 1]
  end

  it "returns an empty array for an empty Range" do
    (0...0).first(2).should == []
  end

  it "returns an empty array when passed zero" do
    (0..2).first(0).should == []
  end

  it "returns all elements in the range when count exceeds the number of elements" do
    (0..2).first(4).should == [0, 1, 2]
  end

  it "raises an ArgumentError when count is negative" do
    lambda { (0..2).first(-1) }.should raise_error(ArgumentError)
  end

  it "calls #to_int to convert the argument" do
    obj = mock_int(2)
    (3..7).first(obj).should == [3, 4]
  end

  it "raises a TypeError if #to_int does not return an Integer" do
    obj = mock("to_int")
    obj.should_receive(:to_int).and_return("1")
    lambda { (2..3).first(obj) }.should raise_error(TypeError)
  end

  it "truncates the value when passed a Float" do
    (2..9).first(2.8).should == [2, 3]
  end

  it "raises a TypeError when passed nil" do
    lambda { (2..3).first(nil) }.should raise_error(TypeError)
  end

  it "raises a TypeError when passed a String" do
    lambda { (2..3).first("1") }.should raise_error(TypeError)
  end
end
