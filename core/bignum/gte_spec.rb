require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#>=" do
  before :each do
    @bignum = bignum_value(14)
  end

  it "returns true if self is greater than or equal to other" do
    (@bignum >= @bignum).should == true
    (@bignum >= (@bignum + 2)).should == false
    (@bignum >= 5664.2).should == true
    (@bignum >= 4).should == true
  end

  it "raises an ArgumentError when given a non-Integer" do
    lambda { @bignum >= "4" }.should raise_error(ArgumentError)
    lambda { @bignum >= mock('str') }.should raise_error(ArgumentError)
  end
end
