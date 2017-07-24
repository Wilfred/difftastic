require File.expand_path('../../../spec_helper', __FILE__)

describe :rational_equal_value_rat, shared: true do
  it "returns true if self has the same numerator and denominator as the passed argument" do
    (Rational(3, 4) == Rational(3, 4)).should be_true
    (Rational(-3, -4) == Rational(3, 4)).should be_true
    (Rational(-4, 5) == Rational(4, -5)).should be_true

    (Rational(bignum_value, 3) == Rational(bignum_value, 3)).should be_true
    (Rational(-bignum_value, 3) == Rational(bignum_value, -3)).should be_true
  end
end

describe :rational_equal_value_int, shared: true do
  it "returns true if self has the passed argument as numerator and a denominator of 1" do
    # Rational(x, y) reduces x and y automatically
    (Rational(4, 2) == 2).should be_true
    (Rational(-4, 2) == -2).should be_true
    (Rational(4, -2) == -2).should be_true
  end
end

describe :rational_equal_value_float, shared: true do
  it "converts self to a Float and compares it with the passed argument" do
    (Rational(3, 4) == 0.75).should be_true
    (Rational(4, 2) == 2.0).should be_true
    (Rational(-4, 2) == -2.0).should be_true
    (Rational(4, -2) == -2.0).should be_true
  end
end

describe :rational_equal_value, shared: true do
  it "returns the result of calling #== with self on the passed argument" do
    obj = mock("Object")
    obj.should_receive(:==).and_return(:result)

    (Rational(3, 4) == obj).should_not be_false
  end
end
