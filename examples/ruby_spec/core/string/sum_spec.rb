require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#sum" do
  it "returns a basic n-bit checksum of the characters in self" do
    "ruby".sum.should == 450
    "ruby".sum(8).should == 194
    "rubinius".sum(23).should == 881
  end

  it "tries to convert n to an integer using to_int" do
    obj = mock('8')
    obj.should_receive(:to_int).and_return(8)

    "hello".sum(obj).should == "hello".sum(8)
  end

  it "returns sum of the bytes in self if n less or equal to zero" do
    "xyz".sum(0).should == 363
    "xyz".sum(-10).should == 363
  end
end
