require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#+" do
  before :each do
    @bignum = bignum_value(76)
  end

  it "returns self plus the given Integer" do
    (@bignum + 4).should == 9223372036854775888
    (@bignum + 4.2).should be_close(9223372036854775888.2, TOLERANCE)
    (@bignum + bignum_value(3)).should == 18446744073709551695
  end

  it "raises a TypeError when given a non-Integer" do
    lambda { @bignum + mock('10') }.should raise_error(TypeError)
    lambda { @bignum + "10" }.should raise_error(TypeError)
    lambda { @bignum + :symbol}.should raise_error(TypeError)
  end
end
