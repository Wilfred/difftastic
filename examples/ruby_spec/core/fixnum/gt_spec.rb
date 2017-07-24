require File.expand_path('../../../spec_helper', __FILE__)

describe "Fixnum#>" do
  it "returns true if self is greater than the given argument" do
    (13 > 2).should == true
    (-500 > -600).should == true

    (1 > 5).should == false
    (5 > 5).should == false

    (900 > bignum_value).should == false
    (5 > 4.999).should == true
  end

  it "raises an ArgumentError when given a non-Integer" do
    lambda { 5 > "4"       }.should raise_error(ArgumentError)
    lambda { 5 > mock('x') }.should raise_error(ArgumentError)
  end
end
