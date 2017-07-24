require File.expand_path('../../../spec_helper', __FILE__)

describe "Array#take_while" do
  it "returns all elements until the block returns false" do
    [1, 2, 3].take_while{ |element| element < 3 }.should == [1, 2]
  end

  it "returns all elements until the block returns nil" do
    [1, 2, nil, 4].take_while{ |element| element }.should == [1, 2]
  end

  it "returns all elements until the block returns false" do
    [1, 2, false, 4].take_while{ |element| element }.should == [1, 2]
  end
end
