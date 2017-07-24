require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_denominator, shared: true do
  it "returns the denominator" do
    Rational(3, 4).denominator.should equal(4)
    Rational(3, -4).denominator.should equal(4)

    Rational(1, bignum_value).denominator.should == bignum_value
  end

  it "returns 1 if no denominator was given" do
    Rational(80).denominator.should == 1
  end
end
