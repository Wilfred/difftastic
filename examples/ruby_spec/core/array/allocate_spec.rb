require File.expand_path('../../../spec_helper', __FILE__)

describe "Array.allocate" do
  it "returns an instance of Array" do
    ary = Array.allocate
    ary.should be_an_instance_of(Array)
  end

  it "returns a fully-formed instance of Array" do
    ary = Array.allocate
    ary.size.should == 0
    ary << 1
    ary.should == [1]
  end

  it "does not accept any arguments" do
    lambda { Array.allocate(1) }.should raise_error(ArgumentError)
  end
end
