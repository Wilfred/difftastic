require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#<=" do
  before :each do
    @bignum = bignum_value(39)
  end

  it "returns true if self is less than or equal to other" do
    (@bignum <= @bignum).should == true
    (-@bignum <= -(@bignum - 1)).should == true

    (@bignum <= 4.999).should == false
  end

  it "returns false if compares with near float" do
    (@bignum <= (@bignum + 0.0)).should == false
    (@bignum <= (@bignum + 0.5)).should == false
  end

  it "raises an ArgumentError when given a non-Integer" do
    lambda { @bignum <= "4" }.should raise_error(ArgumentError)
    lambda { @bignum <= mock('str') }.should raise_error(ArgumentError)
  end
end
