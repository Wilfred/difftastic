require File.expand_path('../../../spec_helper', __FILE__)

describe "Bignum#remainder" do
  it "returns the remainder of dividing self by other" do
    a = bignum_value(79)
    a.remainder(2).should == 1
    a.remainder(97.345).should be_close(46.5674996147722, TOLERANCE)
    a.remainder(bignum_value).should == 79
  end

  it "raises a ZeroDivisionError if other is zero and not a Float" do
    lambda { bignum_value(66).remainder(0) }.should raise_error(ZeroDivisionError)
  end

  it "does raises ZeroDivisionError if other is zero and a Float" do
    a = bignum_value(7)
    b = bignum_value(32)
    lambda { a.remainder(0.0) }.should raise_error(ZeroDivisionError)
    lambda { b.remainder(-0.0) }.should raise_error(ZeroDivisionError)
  end
end
