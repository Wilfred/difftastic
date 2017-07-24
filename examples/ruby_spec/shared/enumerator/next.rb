require File.expand_path('../../../spec_helper', __FILE__)

describe :enum_next, shared: true do

  before :each do
    @enum = 1.upto(3)
  end

  it "returns the next element of the enumeration" do
    @enum.next.should == 1
    @enum.next.should == 2
    @enum.next.should == 3
  end

  it "raises a StopIteration exception at the end of the stream" do
    3.times { @enum.next }
    lambda { @enum.next }.should raise_error(StopIteration)
  end

  it "cannot be called again until the enumerator is rewound" do
    3.times { @enum.next }
    lambda { @enum.next }.should raise_error(StopIteration)
    lambda { @enum.next }.should raise_error(StopIteration)
    lambda { @enum.next }.should raise_error(StopIteration)
    @enum.rewind
    @enum.next.should == 1
  end
end
