require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#coerce when given a Fixnum" do
  it "returns an array containing two Fixnums" do
    1.coerce(2).should == [2, 1]
    1.coerce(2).map { |i| i.class }.should == [Fixnum, Fixnum]
  end
end

describe "Fixnum#coerce when given a String" do
  it "raises an ArgumentError when trying to coerce with a non-number String" do
    lambda { 1.coerce(":)") }.should raise_error(ArgumentError)
  end

  it "returns  an array containing two Floats" do
    1.coerce("2").should == [2.0, 1.0]
    1.coerce("-2").should == [-2.0, 1.0]
  end
end

describe "Fixnum#coerce" do
  it "raises a TypeError when trying to coerce with nil" do
    lambda { 1.coerce(nil) }.should raise_error(TypeError)
  end

  it "tries to convert the given Object into a Float by using #to_f" do
    (obj = mock('1.0')).should_receive(:to_f).and_return(1.0)
    2.coerce(obj).should == [1.0, 2.0]

    (obj = mock('0')).should_receive(:to_f).and_return('0')
    lambda { 2.coerce(obj).should == [1.0, 2.0] }.should raise_error(TypeError)
  end

  it "raises a TypeError when given an Object that does not respond to #to_f" do
    lambda { 1.coerce(mock('x'))  }.should raise_error(TypeError)
    lambda { 1.coerce(1..4)       }.should raise_error(TypeError)
    lambda { 1.coerce(:test)      }.should raise_error(TypeError)
  end
end
