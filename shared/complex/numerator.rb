require File.expand_path('../../../spec_helper', __FILE__)

describe :complex_numerator, shared: true do
  it "returns self's numerator" do
    Complex(2).numerator.should == Complex(2)
    Complex(3, 4).numerator.should == Complex(3, 4)

    Complex(Rational(3, 4), Rational(3, 4)).numerator.should == Complex(3, 3)
    Complex(Rational(7, 4), Rational(8, 4)).numerator.should == Complex(7, 8)

    Complex(Rational(7, 8), Rational(8, 4)).numerator.should == Complex(7, 16)
    Complex(Rational(7, 4), Rational(8, 8)).numerator.should == Complex(7, 4)

    # NOTE:
    # Bug? - Fails with a MethodMissingError
    # (undefined method `denominator' for 3.5:Float)
    # Complex(3.5, 3.7).numerator
  end
end
