require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#**" do
  before :each do
    @bignum = bignum_value(47)
  end

  it "returns self raised to other power" do
    (@bignum ** 4).should == 7237005577332262361485077344629993318496048279512298547155833600056910050625
    (@bignum ** 1.2).should be_close(57262152889751597425762.57804, TOLERANCE)
  end

  it "raises a TypeError when given a non-Integer" do
    lambda { @bignum ** mock('10') }.should raise_error
    lambda { @bignum ** "10" }.should raise_error
    lambda { @bignum ** :symbol }.should raise_error
  end

  it "switch to a Float when the values is too big" do
    flt = (@bignum ** @bignum)
    flt.should be_kind_of(Float)
    flt.infinite?.should == 1
  end

  it "returns a complex number when negative and raised to a fractional power" do
    ((-@bignum) ** (1.0/3))      .should be_close(Complex(1048576,1816186.907597341), TOLERANCE)
    ((-@bignum) ** Rational(1,3)).should be_close(Complex(1048576,1816186.907597341), TOLERANCE)
  end
end
