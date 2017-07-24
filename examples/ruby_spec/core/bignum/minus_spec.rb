require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#-" do
  before :each do
    @bignum = bignum_value(314)
  end

  it "returns self minus the given Integer" do
    (@bignum - 9).should == 9223372036854776113
    (@bignum - 12.57).should be_close(9223372036854776109.43, TOLERANCE)
    (@bignum - bignum_value(42)).should == 272
  end

  it "raises a TypeError when given a non-Integer" do
    lambda { @bignum - mock('10') }.should raise_error(TypeError)
    lambda { @bignum - "10" }.should raise_error(TypeError)
    lambda { @bignum - :symbol }.should raise_error(TypeError)
  end
end
