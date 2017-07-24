require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#*" do
  before :each do
    @bignum = bignum_value(772)
  end

  it "returns self multiplied by the given Integer" do
    (@bignum * (1/bignum_value(0xffff).to_f)).should be_close(1.0, TOLERANCE)
    (@bignum * (1/bignum_value(0xffff).to_f)).should be_close(1.0, TOLERANCE)
    (@bignum * 10).should == 92233720368547765800
    (@bignum * (@bignum - 40)).should == 85070591730234629737795195287525433200
  end

  it "raises a TypeError when given a non-Integer" do
    lambda { @bignum * mock('10') }.should raise_error(TypeError)
    lambda { @bignum * "10" }.should raise_error(TypeError)
    lambda { @bignum * :symbol }.should raise_error(TypeError)
  end
end
