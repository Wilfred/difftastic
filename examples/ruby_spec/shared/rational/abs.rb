require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_abs, shared: true do
  it "returns self's absolute value" do
    Rational(3, 4).send(@method).should == Rational(3, 4)
    Rational(-3, 4).send(@method).should == Rational(3, 4)
    Rational(3, -4).send(@method).should == Rational(3, 4)

    Rational(bignum_value, -bignum_value).send(@method).should == Rational(bignum_value, bignum_value)
  end
end
