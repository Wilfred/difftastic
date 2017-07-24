require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_denominator, shared: true do
  it "returns the least common multiple denominator of the real and imaginary parts" do
    Complex(3, 4).denominator.should == 1
    Complex(3, bignum_value).denominator.should == 1

    Complex(3, Rational(3,4)).denominator.should == 4

    Complex(Rational(4,8), Rational(3,4)).denominator.should == 4
    Complex(Rational(3,8), Rational(3,4)).denominator.should == 8
  end
end
