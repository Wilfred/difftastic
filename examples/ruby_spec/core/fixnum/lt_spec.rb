require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#<" do
  it "returns true if self is less than the given argument" do
    (2 < 13).should == true
    (-600 < -500).should == true

    (5 < 1).should == false
    (5 < 5).should == false

    (900 < bignum_value).should == true
    (5 < 4.999).should == false
  end

  it "raises an ArgumentError when given a non-Integer" do
    lambda { 5 < "4"       }.should raise_error(ArgumentError)
    lambda { 5 < mock('x') }.should raise_error(ArgumentError)
  end
end
